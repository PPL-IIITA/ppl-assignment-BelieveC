#include "UtilityGifts.hpp"

std::string ValentinePrimeTime::UtilityGifts::getName(){
  return name;
}
void ValentinePrimeTime::UtilityGifts::setName(std::string nam){
  name = nam;
}
int ValentinePrimeTime::UtilityGifts::getPrice(){
	return price;
}
int ValentinePrimeTime::UtilityGifts::getValue(){
	return value;
}
int ValentinePrimeTime::UtilityGifts::getUtilityValue(){
	return utilityValue;
}
void ValentinePrimeTime::UtilityGifts::setPrice(int p){
	price = p;
}
void ValentinePrimeTime::UtilityGifts::setValue(int v){
	value = v;
}
void ValentinePrimeTime::UtilityGifts::setUtilityValue(int u){
	utilityValue = u;
}
