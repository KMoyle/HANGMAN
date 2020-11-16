#include <iostream>
#include <Player.h>
#include <GamePlay.h>

using namespace std;

int Player::total_number_of_players{0};

int main()
{
    std::string file_path("/home/lee/Documents/PROJECTS/HANGMAN/hangman/word_list.txt");

    Player *p = new Player( "Lee", "dirtyDonkey");


    string information_title = "############################\n#    PLAYER INFORMATION    #\n############################";
    cout << information_title << endl;
    cout << "Name: " << p->getName() << endl;
    cout << "Games Played: " << p->getGamesPlayed() << endl;
    cout << "Games Won: " << p->getGamesWon() << endl;
    cout << "Total Score: " << p->getTotalScore() << endl;


    cout << "Total Players: " << Player::total_number_of_players << endl;

    GamePlay game;

    game.getWordsList(file_path);

    cout << "Game Word: " << game.getNewWord() << endl;



    delete p;
}
