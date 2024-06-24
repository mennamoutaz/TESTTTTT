#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <sqlite3.h>
#include <string>
#include <vector>

class DatabaseManager {
public:
    DatabaseManager();
    ~DatabaseManager();

    bool openDB(const std::string& path);
    void closeDB();
    bool login(const std::string& email);
    bool getPlayerStats(const std::string& email,
                        int& pvp_win_count, int& pvp_lose_count, int& pvp_total_games,
                        int& pve_win_count, int& pve_lose_count, int& pve_total_games);
    void updatePlayerStats(const std::string& email,
                           int pvp_win_count, int pvp_lose_count, int pvp_total_games,
                           int pve_win_count, int pve_lose_count, int pve_total_games);
    void handleGameOutcome(const std::string& player1Email, const std::string& player2Email, int game_result, int gameMode);

private:
    sqlite3* db;
};

#endif // DATABASEMANAGER_H
