#include "GenerousBoys.hpp"

std::string ValentinePrimeTime::GenerousBoys::getName(){
  return name;
}
void ValentinePrimeTime::GenerousBoys::setName(std::string nam){
  name = nam;
}
double ValentinePrimeTime::GenerousBoys::getAttractiveness(){
  return attractiveness;
}
void ValentinePrimeTime::GenerousBoys::setAttractiveness(double attractive){
  attractiveness = attractive;
}
double ValentinePrimeTime::GenerousBoys::getIntelligenceLevel(){
  return intelligenceLevel;
}
void ValentinePrimeTime::GenerousBoys::setIntelligenceLevel(double intelligence){
  intelligenceLevel = intelligence; 
}
int ValentinePrimeTime::GenerousBoys::getBudget(){
  return budget;
}
void ValentinePrimeTime::GenerousBoys::setBudget(int b){
  budget = b;
}
bool ValentinePrimeTime::GenerousBoys::setCommitted(bool commit){
  committed = commit;
}
bool ValentinePrimeTime::GenerousBoys::getCommitted(){
  return committed;
}
int ValentinePrimeTime::GenerousBoys::happiness(){
  return 1;
}
int ValentinePrimeTime::GenerousBoys::getReqAttraction(){
  return reqAttraction;
}
void ValentinePrimeTime::GenerousBoys::setReqAttraction(int at){
  reqAttraction = at;
}
