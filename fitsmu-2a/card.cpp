#include "card.h"

std::ostream& operator <<(std::ostream& out, const card& card)
// Prints card in format {Value}{Suit}
// Example: 3H = 3 of hearts, 11C = jack of clubs
{
	out << card.value << card.suit;
	return out;
}

