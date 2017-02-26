#include "EssentialGifts.hpp"

std::string ValentinePrimeTime::EssentialGifts::getName(){
  return name;
}
void ValentinePrimeTime::EssentialGifts::setName(std::string nam){
  name = nam;
}
int ValentinePrimeTime::EssentialGifts::getPrice(){
	return price;
}
int ValentinePrimeTime::EssentialGifts::getValue(){
	return value;
}
void ValentinePrimeTime::EssentialGifts::setPrice(int p){
	price = p;
}
void ValentinePrimeTime::EssentialGifts::setValue(int v){
	value = v;
}
