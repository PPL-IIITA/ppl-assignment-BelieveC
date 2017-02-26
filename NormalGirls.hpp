#include<string>

namespace ValentinePrimeTime{
  class NormalGirls
  {
    std::string name;          
    double attractiveness;   
    double intelligenceLevel;
    int maintenanceCost;     
    bool committed;          
    public:
    std::string getName();
    void setName(std::string name);
    double getAttractiveness();
    void setAttractiveness(double attractiveness);
    double getIntelligenceLevel();
    void setIntelligenceLevel(double intelligenceLevel);
    int getMaintenanceCost();
    void setMaintenanceCost(int maintenanceCost);
    bool setCommitted(bool committed);
    bool getCommitted();
    int happiness(int cost,int value);
  };
}
