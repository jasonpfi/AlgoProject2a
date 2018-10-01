/**
 * Team: fitsmu
 * Jason Fitch
 * Sam Smucny
 *
 * card.cpp: implements the card class's public methods
 *
 */


card::card(int value, string suit)
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

String getSuit()
// Returns the suit of the card
{
   return this->suit;
}

void setSuit(string suit)
// Sets the suit of the card to the passed string
{
   this->suit = suit;
}
