/**
 * Team: fitsmu
 * Jason Fitch
 * Sam Smucny
 *
 * card.h: Contains the declarations for the card class, including member
 *         methods and data members
 */

#include <iostream>

std::ostream operator << (std::ostream& os, card& c)
// Overloaded output operator
{
   return os << "Suit: " << c.getSuit() << "\nValue: " <<
          std::to_string(c.getValue()) << std::endl;
}

// Card class declaration
class card {

public:

   // Constructor
   card(int value, string suit);

   // value getter and setter
   int getValue();
   void setValue(int value);

   // suit getter and setter
   string getSuit();
   void setSuit(string suit);


private:

   // Private data members
   int value;
   string suit;
   card* next;

};
