#pragma once

namespace ariel
{
    class Player
    {
        private:
            std::string name;
            int sSize;
            int cTaken;
            bool inGame;

        public:
            int stacksize() { return this->sSize; }

            int cardesTaken() { return this->cTaken; }

            bool isInGame() { return this->inGame; }

            void setInGame(bool status) { this->inGame = status; }

            std::string getName() { return this->name; }

            Player(std::string name);

            ~Player();
    };
}