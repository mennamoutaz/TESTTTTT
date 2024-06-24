/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *firstframe;
    QLabel *label_3;
    QPushButton *welcomeSignupButton;
    QPushButton *welcomeLoginButton;
    QWidget *loginframe;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *emailLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QLabel *loginErrorLabel;
    QPushButton *switchToSignupButton;
    QLabel *label_4;
    QPushButton *return1;
    QWidget *page;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *userNameLabel;
    QLabel *label_13;
    QLabel *userEmailLabel;
    QLabel *label_15;
    QLabel *userAgeLabel;
    QLabel *label_17;
    QLabel *userGamesPlayedLabel;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *userWinsLabel;
    QLabel *userLossesLabel;
    QLabel *userLastLoginLabel;
    QLabel *userNameLabel2;
    QPushButton *PLAY;
    QWidget *signupframe;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *signupCityLineEdit;
    QLineEdit *signupAgeLineEdit;
    QLineEdit *signupNameLineEdit;
    QLineEdit *signupPasswordLineEdit;
    QLineEdit *signupEmailLineEdit;
    QLabel *signupErrorLabel;
    QPushButton *signupButton;
    QPushButton *switchToLoginButton;
    QPushButton *return1_2;
    QWidget *page_2;
    QWidget *playSelectionFrame;
    QPushButton *pvpButton;
    QPushButton *pveButton;
    QFrame *pvpGameFrame;
    QWidget *player2LoginFrame_2;
    QLabel *Email;
    QLabel *Password;
    QLabel *player2LoginErrorLabel;
    QLineEdit *player2EmailLineEdit;
    QLineEdit *player2PasswordLineEdit;
    QPushButton *player2LoginButton;
    QPushButton *switchToPlayer2SignupButton;
    QWidget *player2LoginFrame;
    QWidget *page_3;
    QPushButton *button_0_0;
    QPushButton *button_0_1;
    QPushButton *button_0_2;
    QPushButton *button_1_0;
    QPushButton *button_1_1;
    QPushButton *button_1_2;
    QPushButton *button_2_0;
    QPushButton *button_2_1;
    QPushButton *button_2_2;
    QLabel *statusLabel;
    QPushButton *showPlayer1StatsButton;
    QPushButton *showPlayer2StatsButton;
    QPushButton *logout;
    QPushButton *pg;
    QWidget *player2SignupFrame_2;
    QWidget *player2SignupFrame;
    QLabel *Name;
    QLabel *Email_2;
    QLabel *Password_2;
    QLabel *Age;
    QLabel *City;
    QLineEdit *player2SignupNameLineEdit;
    QLineEdit *player2SignupEmailLineEdit;
    QLineEdit *player2SignupPasswordLineEdit;
    QLineEdit *player2SignupAgeLineEdit;
    QLineEdit *player2SignupCityLineEdit;
    QPushButton *player2SignupButton;
    QLabel *player2SignupErrorLabel;
    QPushButton *switchToPlayer2LoginButton;
    QWidget *page_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 622);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(711, 561));
        stackedWidget->setStyleSheet(QString::fromUtf8("ui->firstframe->setStyleSheet(\"background-color: rgb(33, 0, 49);\"); "));
        firstframe = new QWidget();
        firstframe->setObjectName("firstframe");
        label_3 = new QLabel(firstframe);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 100, 331, 51));
        welcomeSignupButton = new QPushButton(firstframe);
        welcomeSignupButton->setObjectName("welcomeSignupButton");
        welcomeSignupButton->setGeometry(QRect(210, 180, 80, 24));
        welcomeLoginButton = new QPushButton(firstframe);
        welcomeLoginButton->setObjectName("welcomeLoginButton");
        welcomeLoginButton->setGeometry(QRect(210, 230, 80, 24));
        stackedWidget->addWidget(firstframe);
        loginframe = new QWidget();
        loginframe->setObjectName("loginframe");
        label = new QLabel(loginframe);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 160, 61, 31));
        label_2 = new QLabel(loginframe);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 200, 101, 31));
        emailLineEdit = new QLineEdit(loginframe);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(160, 170, 191, 21));
        passwordLineEdit = new QLineEdit(loginframe);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(160, 210, 191, 21));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(loginframe);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(130, 270, 80, 24));
        loginErrorLabel = new QLabel(loginframe);
        loginErrorLabel->setObjectName("loginErrorLabel");
        loginErrorLabel->setGeometry(QRect(90, 320, 231, 61));
        switchToSignupButton = new QPushButton(loginframe);
        switchToSignupButton->setObjectName("switchToSignupButton");
        switchToSignupButton->setGeometry(QRect(400, 30, 80, 24));
        label_4 = new QLabel(loginframe);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 70, 151, 31));
        return1 = new QPushButton(loginframe);
        return1->setObjectName("return1");
        return1->setGeometry(QRect(410, 340, 80, 24));
        stackedWidget->addWidget(loginframe);
        page = new QWidget();
        page->setObjectName("page");
        label_10 = new QLabel(page);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(40, 50, 81, 31));
        label_11 = new QLabel(page);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(50, 130, 51, 41));
        userNameLabel = new QLabel(page);
        userNameLabel->setObjectName("userNameLabel");
        userNameLabel->setGeometry(QRect(120, 140, 211, 21));
        label_13 = new QLabel(page);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(50, 180, 61, 31));
        userEmailLabel = new QLabel(page);
        userEmailLabel->setObjectName("userEmailLabel");
        userEmailLabel->setGeometry(QRect(110, 190, 231, 21));
        label_15 = new QLabel(page);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(50, 210, 41, 41));
        userAgeLabel = new QLabel(page);
        userAgeLabel->setObjectName("userAgeLabel");
        userAgeLabel->setGeometry(QRect(100, 220, 251, 21));
        label_17 = new QLabel(page);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(50, 250, 131, 51));
        userGamesPlayedLabel = new QLabel(page);
        userGamesPlayedLabel->setObjectName("userGamesPlayedLabel");
        userGamesPlayedLabel->setGeometry(QRect(180, 270, 261, 16));
        label_19 = new QLabel(page);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(50, 300, 91, 31));
        label_20 = new QLabel(page);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(50, 340, 71, 31));
        label_21 = new QLabel(page);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(50, 380, 171, 31));
        userWinsLabel = new QLabel(page);
        userWinsLabel->setObjectName("userWinsLabel");
        userWinsLabel->setGeometry(QRect(100, 310, 221, 16));
        userLossesLabel = new QLabel(page);
        userLossesLabel->setObjectName("userLossesLabel");
        userLossesLabel->setGeometry(QRect(110, 350, 271, 16));
        userLastLoginLabel = new QLabel(page);
        userLastLoginLabel->setObjectName("userLastLoginLabel");
        userLastLoginLabel->setGeometry(QRect(220, 390, 281, 16));
        userNameLabel2 = new QLabel(page);
        userNameLabel2->setObjectName("userNameLabel2");
        userNameLabel2->setGeometry(QRect(120, 60, 311, 21));
        PLAY = new QPushButton(page);
        PLAY->setObjectName("PLAY");
        PLAY->setGeometry(QRect(480, 420, 80, 24));
        stackedWidget->addWidget(page);
        signupframe = new QWidget();
        signupframe->setObjectName("signupframe");
        label_5 = new QLabel(signupframe);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 150, 49, 16));
        label_6 = new QLabel(signupframe);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 180, 49, 16));
        label_7 = new QLabel(signupframe);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 210, 49, 16));
        label_8 = new QLabel(signupframe);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 240, 49, 16));
        label_9 = new QLabel(signupframe);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(60, 270, 49, 16));
        signupCityLineEdit = new QLineEdit(signupframe);
        signupCityLineEdit->setObjectName("signupCityLineEdit");
        signupCityLineEdit->setGeometry(QRect(110, 270, 351, 21));
        signupAgeLineEdit = new QLineEdit(signupframe);
        signupAgeLineEdit->setObjectName("signupAgeLineEdit");
        signupAgeLineEdit->setGeometry(QRect(110, 240, 351, 21));
        signupNameLineEdit = new QLineEdit(signupframe);
        signupNameLineEdit->setObjectName("signupNameLineEdit");
        signupNameLineEdit->setGeometry(QRect(110, 210, 351, 21));
        signupPasswordLineEdit = new QLineEdit(signupframe);
        signupPasswordLineEdit->setObjectName("signupPasswordLineEdit");
        signupPasswordLineEdit->setGeometry(QRect(110, 180, 351, 21));
        signupEmailLineEdit = new QLineEdit(signupframe);
        signupEmailLineEdit->setObjectName("signupEmailLineEdit");
        signupEmailLineEdit->setGeometry(QRect(110, 150, 351, 21));
        signupErrorLabel = new QLabel(signupframe);
        signupErrorLabel->setObjectName("signupErrorLabel");
        signupErrorLabel->setGeometry(QRect(10, 340, 261, 41));
        signupButton = new QPushButton(signupframe);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(100, 310, 80, 24));
        switchToLoginButton = new QPushButton(signupframe);
        switchToLoginButton->setObjectName("switchToLoginButton");
        switchToLoginButton->setGeometry(QRect(360, 30, 80, 24));
        return1_2 = new QPushButton(signupframe);
        return1_2->setObjectName("return1_2");
        return1_2->setGeometry(QRect(640, 440, 80, 24));
        stackedWidget->addWidget(signupframe);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        playSelectionFrame = new QWidget(page_2);
        playSelectionFrame->setObjectName("playSelectionFrame");
        playSelectionFrame->setGeometry(QRect(330, 270, 120, 80));
        pvpButton = new QPushButton(page_2);
        pvpButton->setObjectName("pvpButton");
        pvpButton->setGeometry(QRect(170, 150, 181, 31));
        pveButton = new QPushButton(page_2);
        pveButton->setObjectName("pveButton");
        pveButton->setGeometry(QRect(170, 210, 181, 31));
        pvpGameFrame = new QFrame(page_2);
        pvpGameFrame->setObjectName("pvpGameFrame");
        pvpGameFrame->setGeometry(QRect(310, 300, 120, 80));
        pvpGameFrame->setFrameShape(QFrame::StyledPanel);
        pvpGameFrame->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page_2);
        player2LoginFrame_2 = new QWidget();
        player2LoginFrame_2->setObjectName("player2LoginFrame_2");
        Email = new QLabel(player2LoginFrame_2);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(110, 190, 51, 31));
        Password = new QLabel(player2LoginFrame_2);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(80, 230, 91, 41));
        player2LoginErrorLabel = new QLabel(player2LoginFrame_2);
        player2LoginErrorLabel->setObjectName("player2LoginErrorLabel");
        player2LoginErrorLabel->setGeometry(QRect(0, 310, 231, 51));
        player2EmailLineEdit = new QLineEdit(player2LoginFrame_2);
        player2EmailLineEdit->setObjectName("player2EmailLineEdit");
        player2EmailLineEdit->setGeometry(QRect(170, 200, 241, 21));
        player2PasswordLineEdit = new QLineEdit(player2LoginFrame_2);
        player2PasswordLineEdit->setObjectName("player2PasswordLineEdit");
        player2PasswordLineEdit->setGeometry(QRect(170, 240, 241, 21));
        player2LoginButton = new QPushButton(player2LoginFrame_2);
        player2LoginButton->setObjectName("player2LoginButton");
        player2LoginButton->setGeometry(QRect(210, 290, 80, 24));
        switchToPlayer2SignupButton = new QPushButton(player2LoginFrame_2);
        switchToPlayer2SignupButton->setObjectName("switchToPlayer2SignupButton");
        switchToPlayer2SignupButton->setGeometry(QRect(330, 20, 80, 24));
        player2LoginFrame = new QWidget(player2LoginFrame_2);
        player2LoginFrame->setObjectName("player2LoginFrame");
        player2LoginFrame->setGeometry(QRect(40, 30, 120, 80));
        stackedWidget->addWidget(player2LoginFrame_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        button_0_0 = new QPushButton(page_3);
        button_0_0->setObjectName("button_0_0");
        button_0_0->setGeometry(QRect(290, 150, 71, 61));
        button_0_1 = new QPushButton(page_3);
        button_0_1->setObjectName("button_0_1");
        button_0_1->setGeometry(QRect(370, 150, 71, 61));
        button_0_2 = new QPushButton(page_3);
        button_0_2->setObjectName("button_0_2");
        button_0_2->setGeometry(QRect(450, 150, 71, 61));
        button_1_0 = new QPushButton(page_3);
        button_1_0->setObjectName("button_1_0");
        button_1_0->setGeometry(QRect(290, 220, 71, 61));
        button_1_1 = new QPushButton(page_3);
        button_1_1->setObjectName("button_1_1");
        button_1_1->setGeometry(QRect(370, 220, 71, 61));
        button_1_2 = new QPushButton(page_3);
        button_1_2->setObjectName("button_1_2");
        button_1_2->setGeometry(QRect(450, 220, 71, 61));
        button_2_0 = new QPushButton(page_3);
        button_2_0->setObjectName("button_2_0");
        button_2_0->setGeometry(QRect(290, 290, 71, 61));
        button_2_1 = new QPushButton(page_3);
        button_2_1->setObjectName("button_2_1");
        button_2_1->setGeometry(QRect(370, 290, 71, 61));
        button_2_2 = new QPushButton(page_3);
        button_2_2->setObjectName("button_2_2");
        button_2_2->setGeometry(QRect(450, 290, 71, 61));
        statusLabel = new QLabel(page_3);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(210, 90, 371, 31));
        showPlayer1StatsButton = new QPushButton(page_3);
        showPlayer1StatsButton->setObjectName("showPlayer1StatsButton");
        showPlayer1StatsButton->setGeometry(QRect(70, 460, 80, 24));
        showPlayer2StatsButton = new QPushButton(page_3);
        showPlayer2StatsButton->setObjectName("showPlayer2StatsButton");
        showPlayer2StatsButton->setGeometry(QRect(640, 460, 80, 24));
        logout = new QPushButton(page_3);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(660, 20, 80, 24));
        pg = new QPushButton(page_3);
        pg->setObjectName("pg");
        pg->setGeometry(QRect(30, 20, 80, 24));
        stackedWidget->addWidget(page_3);
        player2SignupFrame_2 = new QWidget();
        player2SignupFrame_2->setObjectName("player2SignupFrame_2");
        player2SignupFrame = new QWidget(player2SignupFrame_2);
        player2SignupFrame->setObjectName("player2SignupFrame");
        player2SignupFrame->setGeometry(QRect(159, 119, 451, 161));
        Name = new QLabel(player2SignupFrame_2);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(30, 120, 61, 41));
        Email_2 = new QLabel(player2SignupFrame_2);
        Email_2->setObjectName("Email_2");
        Email_2->setGeometry(QRect(30, 180, 51, 31));
        Password_2 = new QLabel(player2SignupFrame_2);
        Password_2->setObjectName("Password_2");
        Password_2->setGeometry(QRect(10, 230, 91, 31));
        Age = new QLabel(player2SignupFrame_2);
        Age->setObjectName("Age");
        Age->setGeometry(QRect(30, 280, 61, 31));
        City = new QLabel(player2SignupFrame_2);
        City->setObjectName("City");
        City->setGeometry(QRect(30, 330, 41, 31));
        player2SignupNameLineEdit = new QLineEdit(player2SignupFrame_2);
        player2SignupNameLineEdit->setObjectName("player2SignupNameLineEdit");
        player2SignupNameLineEdit->setGeometry(QRect(110, 130, 311, 24));
        player2SignupEmailLineEdit = new QLineEdit(player2SignupFrame_2);
        player2SignupEmailLineEdit->setObjectName("player2SignupEmailLineEdit");
        player2SignupEmailLineEdit->setGeometry(QRect(110, 180, 311, 24));
        player2SignupPasswordLineEdit = new QLineEdit(player2SignupFrame_2);
        player2SignupPasswordLineEdit->setObjectName("player2SignupPasswordLineEdit");
        player2SignupPasswordLineEdit->setGeometry(QRect(110, 230, 311, 24));
        player2SignupAgeLineEdit = new QLineEdit(player2SignupFrame_2);
        player2SignupAgeLineEdit->setObjectName("player2SignupAgeLineEdit");
        player2SignupAgeLineEdit->setGeometry(QRect(110, 280, 311, 24));
        player2SignupCityLineEdit = new QLineEdit(player2SignupFrame_2);
        player2SignupCityLineEdit->setObjectName("player2SignupCityLineEdit");
        player2SignupCityLineEdit->setGeometry(QRect(110, 330, 311, 24));
        player2SignupButton = new QPushButton(player2SignupFrame_2);
        player2SignupButton->setObjectName("player2SignupButton");
        player2SignupButton->setGeometry(QRect(190, 370, 80, 24));
        player2SignupErrorLabel = new QLabel(player2SignupFrame_2);
        player2SignupErrorLabel->setObjectName("player2SignupErrorLabel");
        player2SignupErrorLabel->setGeometry(QRect(0, 400, 261, 31));
        switchToPlayer2LoginButton = new QPushButton(player2SignupFrame_2);
        switchToPlayer2LoginButton->setObjectName("switchToPlayer2LoginButton");
        switchToPlayer2LoginButton->setGeometry(QRect(340, 70, 80, 24));
        stackedWidget->addWidget(player2SignupFrame_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        stackedWidget->addWidget(page_4);

        gridLayout_4->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:700; vertical-align:super;\">Welcome to Tic Tac Toe</span></p></body></html>", nullptr));
        welcomeSignupButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        welcomeLoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">Email</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">Password</span></p></body></html>", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        loginErrorLabel->setText(QString());
        switchToSignupButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Please Login ....</span></p><p><br/></p></body></html>", nullptr));
        return1->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700;\">Hello </span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Name</span></p></body></html>", nullptr));
        userNameLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\"><br/></span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Email</span></p></body></html>", nullptr));
        userEmailLabel->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Age</span></p></body></html>", nullptr));
        userAgeLabel->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Played games</span></p></body></html>", nullptr));
        userGamesPlayedLabel->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">wins</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">losses</span></p><p><br/></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">last logged in date</span></p><p><br/></p></body></html>", nullptr));
        userWinsLabel->setText(QString());
        userLossesLabel->setText(QString());
        userLastLoginLabel->setText(QString());
        userNameLabel2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:22pt;\"><br/></span></p></body></html>", nullptr));
        PLAY->setText(QCoreApplication::translate("MainWindow", "PLAY", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "City", nullptr));
        signupErrorLabel->setText(QString());
        signupButton->setText(QCoreApplication::translate("MainWindow", "signupButton", nullptr));
        switchToLoginButton->setText(QCoreApplication::translate("MainWindow", "Back to Login", nullptr));
        return1_2->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        pvpButton->setText(QCoreApplication::translate("MainWindow", "player vs player", nullptr));
        pveButton->setText(QCoreApplication::translate("MainWindow", "player vs ai", nullptr));
        Email->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Email</span></p></body></html>", nullptr));
        Password->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Password</span></p></body></html>", nullptr));
        player2LoginErrorLabel->setText(QString());
        player2LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        switchToPlayer2SignupButton->setText(QCoreApplication::translate("MainWindow", "sign up", nullptr));
        button_0_0->setText(QString());
        button_0_1->setText(QString());
        button_0_2->setText(QString());
        button_1_0->setText(QString());
        button_1_1->setText(QString());
        button_1_2->setText(QString());
        button_2_0->setText(QString());
        button_2_1->setText(QString());
        button_2_2->setText(QString());
        statusLabel->setText(QString());
        showPlayer1StatsButton->setText(QCoreApplication::translate("MainWindow", "Player1Stats", nullptr));
        showPlayer2StatsButton->setText(QCoreApplication::translate("MainWindow", "Player2Stats", nullptr));
        logout->setText(QCoreApplication::translate("MainWindow", "log out", nullptr));
        pg->setText(QCoreApplication::translate("MainWindow", "New Game", nullptr));
        Name->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Name</span></p></body></html>", nullptr));
        Email_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Email</span></p></body></html>", nullptr));
        Password_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Password</span></p></body></html>", nullptr));
        Age->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Age</span></p></body></html>", nullptr));
        City->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">City</span></p></body></html>", nullptr));
        player2SignupButton->setText(QCoreApplication::translate("MainWindow", "Signup", nullptr));
        player2SignupErrorLabel->setText(QString());
        switchToPlayer2LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
