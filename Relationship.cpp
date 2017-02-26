#include "Relationship.hpp"

void ValentinePrimeTime::Relationship::setBoyName(std::string b){
	boyName = b;
}
void ValentinePrimeTime::Relationship::setGirlName(std::string g){
	girlName = g;
}
void ValentinePrimeTime::Relationship::setCompatibleRating(double c){
	compatibleRating = c;
}
void ValentinePrimeTime::Relationship::setHappinessRating(double h){
	happinessRating = h;
}
std::string ValentinePrimeTime::Relationship::getBoyName(){
	return boyName;
}
std::string ValentinePrimeTime::Relationship::getGirlName(){
	return girlName;
}
double ValentinePrimeTime::Relationship::getCompatibleRating(){
	return compatibleRating;
}
double ValentinePrimeTime::Relationship::getHappinessRating(){
	return happinessRating;
}

