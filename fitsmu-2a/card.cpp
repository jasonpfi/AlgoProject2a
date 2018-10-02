#include "card.h"

std::ostream& operator << (std::ostream& os, card& c)
// Overloaded output operator
{
   return os << "Suit: " << c.getSuit() << "\nValue: " <<
          std::to_string(c.getValue()) << std::endl;
}

