/**
 * Team: fitsmu
 * Jason Fitch
 * Sam Smucny
 *
 * card.h: Contains the declarations for the card class, including member
 *         methods and data members
 */

#include <iostream>
#include <string>

class card {

public:

   card(int value, std::string suit); // Implement SUIT

   int getValue();
   void setValue(int value);

   std::string getSuit();
   void setSuit(std::string suit);


private:

   int value;
   std::string suit;

};
