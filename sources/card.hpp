namespace ariel {
    class Card {
        private:
            int value;
            char suit;

        public:
            // Constructor: Create a card with a value and a suit
            Card(int value, char suit);

            // Destructor
            ~Card();

            // Get the value of the card
            int getValue() { return value; }

            // Get the suit of the card
            char getSuit() { return suit; }

            // Set the value of the card
            void setValue(int value) { this->value = value; }

            // Set the suit of the card
            void setSuit(char suit) { this->suit = suit; }

            bool operator==(const Card& rhs) const { return value == rhs.value and suit == rhs.suit; }

            bool operator<(const Card& rhs) const { return value < rhs.value or (value == rhs.value and suit < rhs.suit) or (value != 1 and rhs.value == 1); }

            bool operator>(const Card& rhs) const { return value > rhs.value or (value == rhs.value and suit > rhs.suit) or (value == 1 and rhs.value != 1); }
    };
};
