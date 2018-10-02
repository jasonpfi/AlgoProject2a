#include "card.h"

std::ostream& operator << (std::ostream& os, card& c)
// Overloaded output operator
{
   return os << "Suit: " << c.getSuit() << "\nValue: " <<
          std::to_string(c.getValue()) << std::endl;
}

card::card(int value, std::string suit)
// Constructor for the card class. Sets the value and suit of the card

