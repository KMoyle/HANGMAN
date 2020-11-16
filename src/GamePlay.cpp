#include "GamePlay.h"

GamePlay::GamePlay()
{
    //ctor
}

void GamePlay::getWordsList(std::string fp){

    std::ifstream infile(fp);
    int counter{1};

    if (infile){
        std::string line;

        while (std::getline(infile, line)){
           // printf("%s\n", line.c_str());
            auto key_word_pair = std::make_pair( counter, static_cast<std::string>(line));

            word_list_l.push_back(key_word_pair);
            word_list_s.insert(key_word_pair);

            ++counter;
        }
        infile.close();
    }
}

std::string GamePlay::getNewWord(){

    game_word = word_list_l.front().second;

    return game_word;
}


void GamePlay::reduceLives(){
    --lives;
}

void GamePlay::resetLives(){
    lives = 6;
}

GamePlay::~GamePlay()
{
    //dtor
}
