/**
 * Team: fitsmu
 * Jason Fitch
 * Sam Smucny
 *
 * card.h: Contains the declarations for the card class, including member
 *         methods and data members
 */

#include <iostream>

// Card class declaration
class card {

public:

   // Constructor
   card(int value, std::string suit);

   // value getter and setter
   int getValue();
   void setValue(int value);

   // suit getter and setter
   std::string getSuit();
   void setSuit(std::string suit);


private:

   // Private data members
   int value;
   std::string suit;
   card* next;

};
