#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Test 1 - Initialization") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);
}

TEST_CASE("Test 2 - Playing") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    for (int i=0;i<5;i++) {
        game.playTurn();
    }
    game.printLastTurn();
    CHECK(p1.stacksize() == 21);
    CHECK(p2.stacksize() == 21);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);
}