#include "LuxuryGifts.hpp"

std::string ValentinePrimeTime::LuxuryGifts::getName(){
  return name;
}
void ValentinePrimeTime::LuxuryGifts::setName(std::string nam){
  name = nam;
}
int ValentinePrimeTime::LuxuryGifts::getLuxuryRating(){
	return luxuryRating;
}
int ValentinePrimeTime::LuxuryGifts::getDifficultyRating(){
	return difficultyRating;
}
int ValentinePrimeTime::LuxuryGifts::getPrice(){
	return price;
}
int ValentinePrimeTime::LuxuryGifts::getValue(){
	return value;
}
void ValentinePrimeTime::LuxuryGifts::setLuxuryRating(int l){
	luxuryRating = l;
}
void ValentinePrimeTime::LuxuryGifts::setDifficultyRating(int d){
	difficultyRating = d;
}
void ValentinePrimeTime::LuxuryGifts::setPrice(int p){
	price = p;
}
void ValentinePrimeTime::LuxuryGifts::setValue(int v){
	value = v;
}
