#include "GiftRecord.hpp"

std::string ValentinePrimeTime::GiftRecord::getName(){
  return name;
}
void ValentinePrimeTime::GiftRecord::setName(std::string nam){
  name = nam;
}
void ValentinePrimeTime::GiftRecord::setBoyName(std::string b){
	boyName = b;
}
void ValentinePrimeTime::GiftRecord::setGirlName(std::string g){
	girlName = g;
}
std::string ValentinePrimeTime::GiftRecord::getBoyName(){
	return boyName;
}
std::string ValentinePrimeTime::GiftRecord::getGirlName(){
	return girlName;
}