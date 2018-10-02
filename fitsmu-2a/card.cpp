/**
 * Team: fitsmu
 * Jason Fitch
 * Sam Smucny
 *
 * card.cpp: implements the card class's public methods
 *
 */

#include "card.h"

std::ostream& operator << (std::ostream& os, card& c)
// Overloaded output operator
{
   return os << "Suit: " << c.getSuit() << "\nValue: " <<
          std::to_string(c.getValue()) << std::endl;
}

card::card(int value, std::string suit)
// Constructor for the card class. Sets the value and suit of the card
{
   this->suit = suit;
   this->value = value;
}

int card::getValue()
// Returns the value of the card
{
   return this->value;
}

void card::setValue(int value)
// Sets the value of the card with the passed value
{
   this->value = value;
}

std::string card::getSuit()
// Returns the suit of the card
{
   return this->suit;
}

void card::setSuit(std::string suit)
// Sets the suit of the card to the passed string
{
   this->suit = suit;
}
