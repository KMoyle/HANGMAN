#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <iostream>
#include <string>
#include <list>
#include <set>
#include <fstream>
#include <ctype.h>
#include <vector>

class GamePlay
{
    public:
        GamePlay();
        ~GamePlay();

        void getWordsList(std::string);
        std::string getNewWord();

        void reduceLives();
        void resetLives();

        void drawBoard();

        void getGuess();
        void validateGuess();
        void guessAnyGood();



        std::list<std::pair<int,std::string> >word_list_l;
        std::set<std::pair<int,std::string> >word_list_s;

        char players_guess_c;
        std::string players_guess_s;




    protected:

    private:

    int lives{6};
    int word_length;
    std::string game_word{"hello"};
    bool new_game{false};


        /// BOARDS
        std::string l0 = "     _____     \n"\
                         "     |/      \n"\
                         "     |       \n"\
                         "     |     \n"\
                         "_____|_________\n";

        std::string l1 = "     _____     \n"\
                         "     |/  0     \n"\
                         "     |       \n"\
                         "     |     \n"\
                         "_____|_________\n";
        std::string l2 = "     _____     \n"\
                         "     |/  0     \n"\
                         "     |   |    \n"\
                         "     |     \n"\
                         "_____|_________\n";

        std::string l3 = "     _____     \n"\
                         "     |/  0     \n"\
                         "     |  /|    \n"\
                         "     |     \n"\
                         "_____|_________\n";
        std::string l4 = "     _____     \n"\
                         "     |/  0     \n"\
                         "     |  /|\\    \n"\
                         "     |      \n"\
                         "_____|_________\n";

        std::string l5 = "     _____     \n"\
                         "     |/  0     \n"\
                         "     |  /|\\    \n"\
                         "     |  /     \n"\
                         "_____|_________\n";

        std::string l6 = "     _____     \n"\
                         "     |/  0     \n"\
                         "     |  /|\\    \n"\
                         "     |  / \\    \n"\
                         "_____|_________\n";


};

#endif // GAMEPLAY_H
