#include <iostream>
#include <string>
using namespace std;

#include "player.hpp"

namespace ariel {
    Player::Player(std::string name) {
        this->name = name;
        this->sSize = 26;
        this->cTaken = 0;
    }

    Player::~Player() {
        cout << "Player " << this->name << " has been destroyed" << endl;
    }
}