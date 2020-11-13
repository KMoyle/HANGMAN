#include <iostream>
#include <Player.h>

using namespace std;

int main()
{
    Player *p = new Player( "Kyle", "sneakysnake");


    string information_title = "############################\n#    PLAYER INFORMATION    #\n############################";
    cout << information_title << endl;
    cout << "Name: " << p->getName() << endl;
    cout << "Games Played: " << p->getGamesPlayed() << endl;
    cout << "Games Won: " << p->getGamesWon() << endl;
    cout << "Total Score: " << p->getTotalScore() << endl;

    delete p;
}
