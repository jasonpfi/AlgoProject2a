


card::card(int value, string suit)
{
   this->suit = suit;
   this->value = value;
}

int card::getValue()
{
   return this->value;
}

void card::setValue(int value)
{
   this->value = value;
}

String getSuit()
{
   return this->suit;
}

void setSuit(string suit)
{
   this->suit = suit;
}
