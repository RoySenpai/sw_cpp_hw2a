#include <iostream>
#include "player.hpp"
#include "game.hpp"

namespace ariel {
    Game::Game(Player p1, Player p2) {
        this->p1 = &p1;
        this->p2 = &p2;
    }

    Game::~Game() {
        std::cout << "Game has been destroyed" << std::endl;
    }

    // play a single turn
    void Game::playTurn() {
        std::cout << "playTurn" << std::endl;
    }

    // print the last turn stats.
    void Game::printLastTurn() {
        std::cout << "printLastTurn" << std::endl;
    }

    //playes the game untill the end
    void Game::playAll() {
        std::cout << "playAll" << std::endl;
    }

    // prints the name of the winning player
    void Game::printWiner() {
        std::cout << "printWiner" << std::endl;
    }

    // prints all the turns played one line per turn (same format as game.printLastTurn())
    void Game::printLog() {
        std::cout << "printLog" << std::endl;
    }

    // for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )
    void Game::printStats() {
        std::cout << "printStats" << std::endl;
    }
}