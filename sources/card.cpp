#include <iostream>
#include <string>
using namespace std;

#include "card.hpp"

namespace ariel {
    Card::Card(int value, char suit) {
        this->value = value;
        this->suit = suit;
    }

    Card::~Card() {
        cout << "Card has been destroyed" << endl;
    }
}