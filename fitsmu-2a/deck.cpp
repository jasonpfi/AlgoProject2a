#include <random>
#include "deck.h"

deck::deck()
// Default constructor fills deck with 52 ordered cards
{
	// Add cards in reverse order so the linked list
	// is ordered properly at the end
	for (int i = 13; i > 0; i--)
	{
		addCard(card(i, 'S'));
		addCard(card(i, 'H'));
		addCard(card(i, 'D'));
		addCard(card(i, 'C'));
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
{
	node<card> *top = this->first;
	this->first = top->next;
	top->next = NULL;
	return top;
}

std::ostream& operator <<(std::ostream& out, const deck& deck)
// Overloaded print operator. Prints each card in deck on new line
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
{
	this->first = new node<card>(newCard, this->first);
}

node<card>* deck::insertAt(node<card>* list, const int & index, node<card>* newCard)
{
	node<card> *curr = list;
	node<card> *prev = NULL;

	for (int i = 0; i < index; i++)
	{
		if (curr != NULL)
		{
			prev = curr;
			curr = curr->next;
		}
		else
		{
			throw new std::exception("Index out of bounds exception");
		}
	}

	if (prev != NULL)
	{
		prev->next = newCard;
	}
	newCard->next = curr;

	return prev == NULL ? newCard : list;
}
