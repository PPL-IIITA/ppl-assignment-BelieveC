#include "NormalGirls.hpp"

std::string ValentinePrimeTime::NormalGirls::getName(){
  return name;
}
void ValentinePrimeTime::NormalGirls::setName(std::string nam){
  name = nam;
}
double ValentinePrimeTime::NormalGirls::getAttractiveness(){
  return attractiveness;
}
void ValentinePrimeTime::NormalGirls::setAttractiveness(double attractive){
  attractiveness = attractive;
}
double ValentinePrimeTime::NormalGirls::getIntelligenceLevel(){
  return intelligenceLevel;
}
void ValentinePrimeTime::NormalGirls::setIntelligenceLevel(double intelligence){
  intelligenceLevel = intelligence; 
}
int ValentinePrimeTime::NormalGirls::getMaintenanceCost(){
  return maintenanceCost;
}
void ValentinePrimeTime::NormalGirls::setMaintenanceCost(int maintenance){
  maintenanceCost = maintenance;
}
bool ValentinePrimeTime::NormalGirls::setCommitted(bool commit){
  committed = commit;
}
bool ValentinePrimeTime::NormalGirls::getCommitted(){
  return committed;
}
int ValentinePrimeTime::NormalGirls::happiness(int cost,int value){
  return value + cost;
}
