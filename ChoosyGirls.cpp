#include "ChoosyGirls.hpp"

std::string ValentinePrimeTime::ChoosyGirls::getName(){
  return name;
}
void ValentinePrimeTime::ChoosyGirls::setName(std::string nam){
  name = nam;
}
double ValentinePrimeTime::ChoosyGirls::getAttractiveness(){
  return attractiveness;
}
void ValentinePrimeTime::ChoosyGirls::setAttractiveness(double attractive){
  attractiveness = attractive;
}
double ValentinePrimeTime::ChoosyGirls::getIntelligenceLevel(){
  return intelligenceLevel;
}
void ValentinePrimeTime::ChoosyGirls::setIntelligenceLevel(double intelligence){
  intelligenceLevel = intelligence; 
}
int ValentinePrimeTime::ChoosyGirls::getMaintenanceCost(){
  return maintenanceCost;
}
void ValentinePrimeTime::ChoosyGirls::setMaintenanceCost(int maintenance){
  maintenanceCost = maintenance;
}
bool ValentinePrimeTime::ChoosyGirls::setCommitted(bool commit){
  committed = commit;
}
bool ValentinePrimeTime::ChoosyGirls::getCommitted(){
  return committed;
}
int ValentinePrimeTime::ChoosyGirls::happiness(int cost){
  return cost*cost;
}
