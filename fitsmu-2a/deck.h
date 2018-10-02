/**
 * Team: fitsmu
 * Jason Fitch
 * Sam Smucny
 *
 * deck.h: header file for deck class.
 *		Contains a collection of cards and 
 *		methods to manipulate them.
 */

#include <iostream>
#include "d_node.h"
#include "card.h"

class deck
{
public:

	// Constructors
	deck();
	deck(node<card> *head) : first(head) {};

	void shuffle();
	card deal();

	// Overloaded operators
	friend std::ostream& operator <<(std::ostream& out, const deck& deck);

private:
	node<card> *first;

	// Private methods
	void addCard(const card& card);
	node<card>* pop();

	static node<card>* insertAt(node<card> *list, const int& index, node<card> *newCard);
};