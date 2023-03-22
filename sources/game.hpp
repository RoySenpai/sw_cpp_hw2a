#pragma once

namespace ariel
{
    class Game
    {
        private:
            Player* p1;
            Player* p2;

        public:
            // Constuctor: Create a game with two players
            Game(Player p1, Player p2);

            // Destructor
            ~Game();

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