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

    word_length  = game_word.length();

    new_game = true;

    return game_word;
}

void GamePlay::getGuess(){

    std::cout << "Type a character for your next guess...." << std::endl;
    std::cin >> players_guess_c;

    if (isalpha(players_guess_c)){
        std::cout << "You selected: " << players_guess_c << std::endl;
        players_guess_s.push_back(players_guess_c);

    }else{
        std::cout << "Please choose a valid character (i.e. a-z)" << std::endl;
        getGuess();
    }

}

void guessAnyGood(){

    std::size_t found_letter = 0;
    std::vector<int> char_location;

    while(found_letter!=std::string::npos){

        found_letter = game_word.find(players_guess_s);

        char_location.push_back(found_letter);
    }


}

void GamePlay::reduceLives(){
    --lives;
}

void GamePlay::resetLives(){
    lives = 6;
}

void GamePlay::drawBoard(){

    switch (lives){

        case 0:
            std::cout << l6 << std::endl;
            break;
        case 1:
            std::cout << l5 << std::endl;
            break;
        case 2:
            std::cout << l4 << std::endl;
            break;
        case 3:
            std::cout << l3 << std::endl;
            break;
        case 4:
            std::cout << l2 << std::endl;
            break;
        case 5:
            std::cout << l1 << std::endl;
            break;
        case 6:
            std::cout << l0 << std::endl;
            break;

    }



}

GamePlay::~GamePlay()
{
    //dtor
}
