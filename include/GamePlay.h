#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <iostream>
#include <string>
#include <list>
#include <set>
#include <fstream>

class GamePlay
{
    public:
        GamePlay();
        ~GamePlay();

        void getWordsList(std::string);
        std::string getNewWord();

        void reduceLives();
        void resetLives();



        std::list<std::pair<int,std::string> >word_list_l;
        std::set<std::pair<int,std::string> >word_list_s;

    protected:

    private:

    int lives{6};
    std::string game_word;



};

#endif // GAMEPLAY_H
