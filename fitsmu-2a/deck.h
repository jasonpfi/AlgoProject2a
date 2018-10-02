/**
 * Team: fitsmu
 * Jason Fitch
 * Sam Smucny
 *
 * deck.h: defines the deck class and declares the methods and data members
 *
 */

#include <iostream>
#include "d_node.h"
#include "card.h"

class deck
{

public:

   deck();

private:

   node<card>* first;

};
