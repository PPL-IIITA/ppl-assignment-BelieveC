#include "MiserBoys.hpp"

std::string ValentinePrimeTime::MiserBoys::getName(){
  return name;
}
void ValentinePrimeTime::MiserBoys::setName(std::string nam){
  name = nam;
}
double ValentinePrimeTime::MiserBoys::getAttractiveness(){
  return attractiveness;
}
void ValentinePrimeTime::MiserBoys::setAttractiveness(double attractive){
  attractiveness = attractive;
}
double ValentinePrimeTime::MiserBoys::getIntelligenceLevel(){
  return intelligenceLevel;
}
void ValentinePrimeTime::MiserBoys::setIntelligenceLevel(double intelligence){
  intelligenceLevel = intelligence; 
}
int ValentinePrimeTime::MiserBoys::getBudget(){
  return budget;
}
void ValentinePrimeTime::MiserBoys::setBudget(int b){
  budget = b;
}
bool ValentinePrimeTime::MiserBoys::setCommitted(bool commit){
  committed = commit;
}
bool ValentinePrimeTime::MiserBoys::getCommitted(){
  return committed;
}
int ValentinePrimeTime::MiserBoys::happiness(){
  return 1;
}
int ValentinePrimeTime::MiserBoys::getReqAttraction(){
  return reqAttraction;
}
void ValentinePrimeTime::MiserBoys::setReqAttraction(int at){
  reqAttraction = at;
}
