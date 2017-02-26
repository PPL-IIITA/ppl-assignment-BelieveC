#include "DesperateGirls.hpp"

std::string ValentinePrimeTime::DesperateGirls::getName(){
  return name;
}
void ValentinePrimeTime::DesperateGirls::setName(std::string nam){
  name = nam;
}
double ValentinePrimeTime::DesperateGirls::getAttractiveness(){
  return attractiveness;
}
void ValentinePrimeTime::DesperateGirls::setAttractiveness(double attractive){
  attractiveness = attractive;
}
double ValentinePrimeTime::DesperateGirls::getIntelligenceLevel(){
  return intelligenceLevel;
}
void ValentinePrimeTime::DesperateGirls::setIntelligenceLevel(double intelligence){
  intelligenceLevel = intelligence; 
}
int ValentinePrimeTime::DesperateGirls::getMaintenanceCost(){
  return maintenanceCost;
}
void ValentinePrimeTime::DesperateGirls::setMaintenanceCost(int maintenance){
  maintenanceCost = maintenance;
}
bool ValentinePrimeTime::DesperateGirls::setCommitted(bool commit){
  committed = commit;
}
bool ValentinePrimeTime::DesperateGirls::getCommitted(){
  return committed;
}
int ValentinePrimeTime::DesperateGirls::happiness(int cost){
  return cost*cost*cost;
}
