/**
 * Team fitsmu
 * Jason Fitch
 * Sam Smucny
 *
 * deck.cpp: cpp file for deck class. Contains the implementation of
 *           methods defined in the header file
 */

#include <random>
#include "deck.h"

deck::deck()
// Default constructor fills deck with 52 ordered cards
{
	// Create lookup array of suit names to loop though and create cards
	std::string suits[] = { "Club", "Diamond", "Heart", "Spade" };

	// Add cards in reverse order so the linked list
	//  is ordered properly at the end
	// Loop through the array of suits and card values to initialize
	//  cards

	for (int i = 3; i >= 0; i--)
	{
		for (int j = 13; j > 0; j--)
		{
			addCard(card(j, suits[i]));
		}
	}
}

deck::~deck()
// Deallocates memory by deleting each card in deck
{
	while (this->first != NULL)
	{
		delete pop();
	}
}

void deck::shuffle()
// Pops the cards off of the deck, adding them to random positions in a new
//  linked list. When the deck is empty, the front pointer points to
//  the new linked list
{
	int length = 0;
	node<card> *head = NULL;

	while (this->first != NULL)
	{
		length++;
		node<card>* top = pop();
		head = insertAt(head, rand() % length, top);
	}

	this->first = head;
}

node<card>* deck::pop()
// Removes the top card from the deck and returns the pointer to it
// Does not deallocate memory
{
	node<card> *top = this->first;
	this->first = top->next;
	top->next = NULL;
	return top;
}

std::ostream& operator <<(std::ostream& out, const deck& deck)
// Overloaded print operator. Prints each card in deck on new line
//
// out: the ostream operator that prints the argument to the screen
// deck: the deck object whose members are going to be printed
{
	node<card> *curr = deck.first;
	while (curr != NULL)
	{
		out << curr->nodeValue << std::endl;
		curr = curr->next;
	}
	return out;
}

void deck::addCard(const card& newCard)
// Adds a new card to the top of a deck.
//
// newCard: the card object to be added to the front of the deck
{
	this->first = new node<card>(newCard, this->first);
}

node<card>* deck::insertAt(node<card>* list, const int& index,
	node<card>* newCard)
// Takes a new card node as the argument and inserts it into the passed linked list
//  of cards at the given index. Returns the updated head of the linked list.
//
//  list: The linked list of cards to be added to
//  index: the index at which to insert the card in the linked list
//  newCard: the card object to be added to the linked list at the given index
{
	node<card> *curr = list;
	node<card> *prev = NULL;

	// Iterate through list to find insert position
	for (int i = 0; i < index; i++)
	{
		if (curr != NULL)
		{
			prev = curr;
			curr = curr->next;
		}
		else
		{
			throw "Index out of bounds";
		}
	}

	// Insert node by changing next pointer values
	if (prev != NULL)
	{
		prev->next = newCard;
	}
	newCard->next = curr;

	// Return head of list. newCard if inserted at front,
	// the old front otherwise
	return prev == NULL ? newCard : list;
}
