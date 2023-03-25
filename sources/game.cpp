#include <iostream>
#include <stdexcept>
#include "player.hpp"
#include "game.hpp"

using namespace std;

namespace ariel {
    Game::Game(Player& plr1, Player& plr2): p1(plr1), p2(plr2) {
        if (plr1.getName() == plr2.getName())
            throw invalid_argument("Player 1 and PLayer 2 are the same player!");

        else if (plr1.getName() == "")
            throw invalid_argument("Player 1 has no name!");

        else if (plr2.getName() == "")
            throw invalid_argument("Player 2 has no name!");

        else if (plr1.isInGame() == true)
            throw invalid_argument("Player 1 is already in a game!");

        else if (plr2.isInGame() == true)
            throw invalid_argument("Player 2 is already in a game!");

        else
        {
            this->p1 = plr1;
            this->p2 = plr2;
            this->turn = 0;

            this->p1.setInGame(true);
            this->p2.setInGame(true);

            cout << "Game has been created" << endl;
        }
    }

    Game::~Game() {
        cout << "Game has been destroyed" << endl;
    }

    // play a single turn
    void Game::playTurn() {
        if (p1.isInGame() == true && p2.isInGame() == true)
        {
            cout << "playTurn" << endl;
            this->turn++;
        }

        else
            throw logic_error("Game is over!");
    }

    // print the last turn stats.
    void Game::printLastTurn() {
        if (turn > 0)
            cout << "printLastTurn" << endl;

        else
            //throw logic_error("No turns have been played yet!");
            cout << "No turns have been played yet!" << endl;
    }

    //playes the game untill the end
    void Game::playAll() {
        cout << "playAll" << endl;

        p1.setInGame(false);
        p2.setInGame(false);
    }

    // prints the name of the winning player
    void Game::printWiner() {
        if (p1.cardesTaken() == 26 && p1.stacksize() == 52)
            cout << p1.getName() << " wins" << endl;

        else if (p2.cardesTaken() == 26 && p2.stacksize() == 52)
            cout << p2.getName() << " wins" << endl;

        else
            //throw logic_error("Game is not finished yet!");
            cout << "Game is not finished yet!" << endl;
    }

    // prints all the turns played one line per turn (same format as game.printLastTurn())
    void Game::printLog() {
        cout << "printLog" << endl << endl;
    }

    // for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )
    void Game::printStats() {
        cout << "Player " << p1.getName() << " status:" << endl;
        cout << "Cards won: " << p1.cardesTaken() << endl;
        cout << "Cards left: " << p1.stacksize() << endl;
        cout << "Win rate: " << p1.cardesTaken() / 26 * 100 << "%" << endl << endl;

        cout << "Player " << p2.getName() << " status:" << endl;
        cout << "Cards won: " << p2.cardesTaken() << endl;
        cout << "Cards left: " << p2.stacksize() << endl;
        cout << "Win rate: " << p2.cardesTaken() / 26 * 100 << "%" << endl << endl;
    }
}