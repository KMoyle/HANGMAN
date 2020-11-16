#include "Player.h"

Player::Player( std::string n, std::string p ): name(n), password(p)
{
    ++total_number_of_players;
    //ctor
}
std::string Player::getName(){
    return name;
}

std::string Player::getPassword(){
    return password;
}

int Player::getGamesPlayed(){
    return games_played;
}

inline void Player::increaseGamesPlayed(){
    ++games_played;
}

int Player::getGamesWon(){
    return games_won;
}

inline void Player::increaseGamesWon(){
    ++games_won;
}

inline void Player::setLastGameScore( int gs ){
    last_game_score = gs; //gs is score from game class
}
double Player::getLastGameScore(){
    return last_game_score;
}

double Player::getTotalScore(){
    return total_score;
}
inline void Player::increaseTotalScore(){
    total_score+=last_game_score;
}

void Player::usedWords(int w){
    words_used.push_back(w);
}

Player::~Player()
{
    //dtor
}
