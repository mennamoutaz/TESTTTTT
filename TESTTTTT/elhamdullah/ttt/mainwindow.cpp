#include "mainwindow.h"  // Include the main window class
#include "ui_mainwindow.h"  // Include the UI definitions
#include <QMessageBox>  // For displaying message boxes
#include <QInputDialog>  // For input dialogs
#include <sqlite3.h>  // SQLite database
#include <chrono>  // For date-time operations
#include <iostream>  // Standard IO operations
#include <ctime>
#include <iomanip>
#include <sstream>
#include <string>  // Standard string operations
#include <QTextStream>  // For handling Qt's string input/output

// Declare a global database connection
sqlite3* db;

// Function to convert time to string
std::string timeToString(std::chrono::system_clock::time_point timePoint) {
    std::time_t time = std::chrono::system_clock::to_time_t(timePoint);
    std::tm tm;
    localtime_s(&tm, &time);  // Use localtime_s to convert time to tm struct in a thread-safe manner

    std::ostringstream oss;
    oss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");  // Format the time using put_time
    return oss.str();  // Return the formatted time string
}

// Function to hash a password using SHA-256
uint64_t customHash(const std::string& str) {
    const uint64_t seed = 0xdeadbeef;
    const uint64_t fnv_prime = 1099511628211ULL;
    uint64_t hash = seed;

    for (char c : str) {
        hash ^= c;
        hash *= fnv_prime;
    }

    return hash;
}

// Function to hash a password to a string
std::string hashPassword(const std::string& password) {
    uint64_t hash = customHash(password);
    return std::to_string(hash);
}

// Function to handle user signup
std::string signup(sqlite3* db, const std::string& email, const std::string& password, const std::string& name, int age, const std::string& city) {
    // Check if the email already exists
    std::string checkSQL = "SELECT COUNT(*) FROM players WHERE email = '" + email + "'";
    sqlite3_stmt* stmt;

    if (sqlite3_prepare_v2(db, checkSQL.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
        return "";  // Return empty if statement preparation fails
    }

    int result = 0;
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        result = sqlite3_column_int(stmt, 0);
    }

    sqlite3_finalize(stmt);

    if (result > 0) {
        // Email already exists
        return "";
    }

    // Get the current date-time
    std::string currentDateStr = timeToString(std::chrono::system_clock::now());

    // SQL query to insert a new player
    std::string insertSQL = "INSERT INTO players (email, password, name, age, city, current_date) VALUES ('" + email + "', '" + password + "', '" + name + "', " + std::to_string(age) + ", '" + city + "', '" + currentDateStr + "')";
    char* errMsg = nullptr;

    // Execute the SQL query
    if (sqlite3_exec(db, insertSQL.c_str(), nullptr, nullptr, &errMsg) != SQLITE_OK) {
        if (errMsg) {
            std::cerr << "Error inserting data: " << errMsg << std::endl;
            sqlite3_free(errMsg);  // Free error message memory
        }
        return "";  // Return an empty string on failure
    }

    return email;  // Return the email upon successful signup
}

void MainWindow::loadUserData(const std::string &email) {
    // SQL query to retrieve user data
    std::string sql = "SELECT name, age, total_games, pvp_win_count, pvp_lose_count, pvp_total_games ,last_login_date FROM players WHERE email = '" + email + "'";
    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
        // Error handling for query preparation
        QMessageBox::critical(this, "Database Error", "Failed to prepare the SQL statement.");
        return;
    }

    if (sqlite3_step(stmt) == SQLITE_ROW) {
        // Retrieve data from the query
        std::string name = reinterpret_cast<const char *>(sqlite3_column_text(stmt, 0));
        int age = sqlite3_column_int(stmt, 1);
        int totalGames = sqlite3_column_int(stmt, 2);
        int pvpWins = sqlite3_column_int(stmt, 3);
        int pvpLosses = sqlite3_column_int(stmt, 4);
        int totalGamespvp = sqlite3_column_int(stmt, 5);
        std::string lastLoginDate = reinterpret_cast<const char *>(sqlite3_column_text(stmt, 6));

        // Set the values to the corresponding labels in your frame
        ui->userNameLabel->setText(QString::fromStdString(name));
        ui->userNameLabel2->setText(QString::fromStdString(name));
        ui->userEmailLabel->setText(QString::fromStdString(email));
        ui->userAgeLabel->setText(QString::number(age));
        ui->userGamesPlayedLabel->setText(QString::number(totalGamespvp));
        ui->userWinsLabel->setText(QString::number(pvpWins));
        ui->userLossesLabel->setText(QString::number(pvpLosses));
        ui->userLastLoginLabel->setText(QString::fromStdString(lastLoginDate));
    }

    sqlite3_finalize(stmt);  // Finalize the statement
}

// Function to handle user login
std::string login(sqlite3* db, const std::string& email, const std::string& password) {
    // SQL query to select password for a given email
    std::string sql = "SELECT password, last_login_date FROM players WHERE email = '" + email + "'";
    sqlite3_stmt* stmt;

    // Prepare the SQL statement
    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
        return "";  // Return empty if statement preparation fails
    }

    std::string resultEmail = "";  // Default to an empty string if login fails

    if (sqlite3_step(stmt) == SQLITE_ROW) {
        // Retrieve the password from the database
        std::string dbPassword(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0)));

        if (dbPassword == password) {  // Check if passwords match
            resultEmail = email;  // Store the successful login email

            // Update the last login date
            std::string lastLoginDateStr = timeToString(std::chrono::system_clock::now());
            std::string updateSQL = "UPDATE players SET last_login_date = '" + lastLoginDateStr + "' WHERE email = '" + email + "'";
            sqlite3_exec(db, updateSQL.c_str(), nullptr, nullptr, nullptr);
        }
    }

    sqlite3_finalize(stmt);  // Finalize the statement to avoid memory leaks

    return resultEmail;  // Return the email if login is successful, otherwise an empty string
}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect button signals to slots
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::onLoginButtonClicked);
    connect(ui->signupButton, &QPushButton::clicked, this, &MainWindow::onSignupButtonClicked);
    connect(ui->switchToSignupButton, &QPushButton::clicked, this, &MainWindow::onSwitchToSignupButtonClicked);
    connect(ui->switchToLoginButton, &QPushButton::clicked, this, &MainWindow::onSwitchToLoginButtonClicked);
    connect(ui->PVPButton, &QPushButton::clicked, this, &MainWindow::onPVPButtonClicked);
    connect(ui->PVEButton, &QPushButton::clicked, this, &MainWindow::onPVEButtonClicked);
    connect(ui->player2LoginButton, &QPushButton::clicked, this, &MainWindow::onPlayer2LoginButtonClicked);
    connect(ui->player2SignupButton, &QPushButton::clicked, this, &MainWindow::onPlayer2SignupButtonClicked);
    connect(ui->switchToPlayer2SignupButton, &QPushButton::clicked, this, &MainWindow::onSwitchToPlayer2SignupButtonClicked);
    connect(ui->switchToPlayer2LoginButton, &QPushButton::clicked, this, &MainWindow::onSwitchToPlayer2LoginButtonClicked);
    connect(ui->showPlayer1StatsButton, &QPushButton::clicked, this, &MainWindow::showPlayer1Stats);
    connect(ui->showPlayer2StatsButton, &QPushButton::clicked, this, &MainWindow::showPlayer2Stats);
    connect(ui->logoutButton, &QPushButton::clicked, this, &MainWindow::onlogoutClicked);
    connect(ui->playGameButton, &QPushButton::clicked, this, &MainWindow::onpgClicked);

    // Initialize game settings
    initializeGame();

    // Open the SQLite database
    if (sqlite3_open("tic_tac_toe.db", &db) != SQLITE_OK) {
        QMessageBox::critical(this, "Database Error", "Failed to open the database.");
        return;
    }

    // Create the players table if it does not exist
    std::string createTableSQL = "CREATE TABLE IF NOT EXISTS players ("
                                 "email TEXT PRIMARY KEY,"
                                 "password TEXT,"
                                 "name TEXT,"
                                 "age INTEGER,"
                                 "city TEXT,"
                                 "current_date TEXT,"
                                 "total_games INTEGER DEFAULT 0,"
                                 "pvp_win_count INTEGER DEFAULT 0,"
                                 "pvp_lose_count INTEGER DEFAULT 0,"
                                 "pvp_total_games INTEGER DEFAULT 0,"
                                 "last_login_date TEXT)";
    char *errMsg = nullptr;
    if (sqlite3_exec(db, createTableSQL.c_str(), nullptr, nullptr, &errMsg) != SQLITE_OK) {
        if (errMsg) {
            std::cerr << "Error creating table: " << errMsg << std::endl;
            sqlite3_free(errMsg);
        }
        QMessageBox::critical(this, "Database Error", "Failed to create the players table.");
        return;
    }
}

MainWindow::~MainWindow()
{
    sqlite3_close(db);  // Close the database connection
    delete ui;
}

void MainWindow::initializeGame()
{
    // Initialize the game board with empty spaces
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }

    gameActive = true;  // Set the game as active
    currentPlayer = 'X';  // Set the starting player

    // Update the UI with the initial game board
    updateBoardUI();
}

void MainWindow::updateBoardUI()
{
    // Update each button on the board with the corresponding symbol
    ui->button00->setText(QChar(board[0][0]));
    ui->button01->setText(QChar(board[0][1]));
    ui->button02->setText(QChar(board[0][2]));
    ui->button10->setText(QChar(board[1][0]));
    ui->button11->setText(QChar(board[1][1]));
    ui->button12->setText(QChar(board[1][2]));
    ui->button20->setText(QChar(board[2][0]));
    ui->button21->setText(QChar(board[2][1]));
    ui->button22->setText(QChar(board[2][2]));
}

void MainWindow::checkGameStatus()
{
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
            gameActive = false;
            askPlayAgain(QString("%1 wins!").arg(QChar(currentPlayer)));
            return;
        }

        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) {
            gameActive = false;
            askPlayAgain(QString("%1 wins!").arg(QChar(currentPlayer)));
            return;
        }
    }

    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) {
        gameActive = false;
        askPlayAgain(QString("%1 wins!").arg(QChar(currentPlayer)));
        return;
    }

    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) {
        gameActive = false;
        askPlayAgain(QString("%1 wins!").arg(QChar(currentPlayer)));
        return;
    }

    // Check for a draw
    bool draw = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                draw = false;
                break;
            }
        }
        if (!draw) {
            break;
        }
    }

    if (draw) {
        gameActive = false;
        askPlayAgain("It's a draw!");
        return;
    }

    // Switch to the other player
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void MainWindow::askPlayAgain(const QString &result)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Game Over", result + "\nPlay again?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        initializeGame();
    } else {
        // Handle end of game, e.g., navigate to a different UI or close the application
    }
}

void MainWindow::handleButtonClick()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button || !gameActive) {
        return;
    }

    int row = button->property("row").toInt();
    int col = button->property("col").toInt();

    if (board[row][col] == ' ') {
        board[row][col] = currentPlayer;
        updateBoardUI();
        checkGameStatus();
    }
}

void MainWindow::onLoginButtonClicked()
{
    QString email = ui->emailLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    std::string emailStr = email.toStdString();
    std::string passwordStr = hashPassword(password.toStdString());

    std::string loggedInEmail = login(db, emailStr, passwordStr);

    if (!loggedInEmail.empty()) {
        loadUserData(loggedInEmail);
        ui->stackedWidget->setCurrentIndex(1);  // Navigate to the main game frame
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid email or password");
    }
}

void MainWindow::onSignupButtonClicked()
{
    QString email = ui->signupEmailLineEdit->text();
    QString password = ui->signupPasswordLineEdit->text();
    QString name = ui->signupNameLineEdit->text();
    int age = ui->signupAgeSpinBox->value();
    QString city = ui->signupCityLineEdit->text();

    std::string emailStr = email.toStdString();
    std::string passwordStr = hashPassword(password.toStdString());
    std::string nameStr = name.toStdString();
    std::string cityStr = city.toStdString();

    std::string signedUpEmail = signup(db, emailStr, passwordStr, nameStr, age, cityStr);

    if (!signedUpEmail.empty()) {
        QMessageBox::information(this, "Signup Success", "You have successfully signed up");
        ui->stackedWidget->setCurrentIndex(0);  // Navigate to the login frame
    } else {
        QMessageBox::warning(this, "Signup Failed", "Email already exists or an error occurred");
    }
}

void MainWindow::onSwitchToSignupButtonClicked()
{
    ui->stackedWidget->setCurrentIndex(2);  // Navigate to the signup frame
}

void MainWindow::onSwitchToLoginButtonClicked()
{
    ui->stackedWidget->setCurrentIndex(0);  // Navigate to the login frame
}

void MainWindow::onPVPButtonClicked()
{
    // Handle PVP game start
    ui->stackedWidget->setCurrentIndex(3);  // Navigate to the PVP game frame
}

void MainWindow::onPVEButtonClicked()
{
    // Handle PVE game start
}

void MainWindow::onPlayer2LoginButtonClicked()
{
    // Handle Player 2 login
}

void MainWindow::onPlayer2SignupButtonClicked()
{
    // Handle Player 2 signup
}

void MainWindow::onSwitchToPlayer2SignupButtonClicked()
{
    // Navigate to Player 2 signup frame
}

void MainWindow::onSwitchToPlayer2LoginButtonClicked()
{
    // Navigate to Player 2 login frame
}

void MainWindow::showPlayer1Stats()
{
    // Show Player 1 stats
}

void MainWindow::showPlayer2Stats()
{
    // Show Player 2 stats
}

void MainWindow::onlogoutClicked()
{
    // Handle logout
}

void MainWindow::onpgClicked()
{
    // Handle play game button
}
