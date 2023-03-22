#pragma once

namespace ariel
{
    class Player
    {
        private:
            std::string name;
            int sSize;
            int cTaken;

        public:
            int stacksize();

            int cardesTaken();

            Player(std::string name);

            ~Player();
    };
}