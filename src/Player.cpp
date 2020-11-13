#include "Player.h"

Player::Player( std::string n, std::string p ): name(n), password(p)
{
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

void Player::increaseGamesPlayed(){
    games_played++;
}

int Player::getGamesWon(){
    return games_won;
}

void Player::increaseGamesWon(){
    games_won++;
}

void Player::setLastGameScore( int gs ){
    last_game_score = gs; //gs is score from game class
}
double Player::getLastGameScore(){
    return last_game_score;
}

double Player::getTotalScore(){
    return total_score;
}
void Player::increaseTotalScore(){
    total_score+=last_game_score;
}

Player::~Player()
{
    //dtor
}
