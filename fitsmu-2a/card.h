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

   card(int value, String suit); // Implement SUIT

   int getValue();
   void setValue(int value);

   String getSuit();
   void setSuit(String suit);


private:

   int value;
   String suit;

};
