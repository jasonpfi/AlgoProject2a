#include "card.h"

std::ostream& operator << (std::ostream& out, const card& card)
// Overloaded output operator
{
   return out << "Suit: " << card.suit << "\nValue: " <<
          card.value << std::endl;
}

