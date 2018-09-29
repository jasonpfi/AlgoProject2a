/**
 * Team: fitsmu
 * Jason Fitch
 * Sam Smucny
 *
 * card.h: Contains the declarations for the card class, including member
 *         methods and data members
 */

#include <iostream>

class card {

public:

   card(int value, string suit);

   int getValue();
   void setValue(int value);

   string getSuit();
   void setSuit(string suit);


private:

   int value;
   string suit;

};
