#ifndef PLAYER_H
#define PLAYER_H

#include <string>


class Player
{
    public:
        Player( std::string n, std::string p );
        ~Player();


        /**
        FUNCTIONS PLAYER GETS & SETS (Personal & Game Information)
        **/
        std::string getName();

        void setPassword();
        std::string getPassword();

        int getGamesPlayed();
        void increaseGamesPlayed();

        int getGamesWon();
        void increaseGamesWon();

        void setLastGameScore(int);
        double getLastGameScore();

        double getTotalScore();
        void increaseTotalScore();


        static int total_number_of_players;

    protected:

    private:

        ///Personal details
        std::string name;
        std::string password;

        ///Gameplay info
        int games_played{0};
        int games_won{0};
        double total_score{0};
        double last_game_score{0};

};

#endif // PLAYER_H
