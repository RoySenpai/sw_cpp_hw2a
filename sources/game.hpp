/*
 *  Software Systems CPP Course Assignment 2
 *  Copyright (C) 2023  Roy Simanovich
 * 
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 * 
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

#include "player.hpp"

namespace ariel
{
    class Game
    {
        private:
            Player& p1;
            Player& p2;
            int turn;

        public:
            // Constuctor: Create a game with two players
            Game(Player& plr1, Player& plr2);

            // play a single turn
            void playTurn();

            // print the last turn stats.
            void printLastTurn();

            //playes the game untill the end
            void playAll();

            // prints the name of the winning player
            void printWiner();

            // prints all the turns played one line per turn (same format as game.printLastTurn())
            void printLog();

            // for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )
            void printStats();
    };
}