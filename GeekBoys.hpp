#include<string>

namespace ValentinePrimeTime{
  class GeekBoys
  {
    std::string name;
    double attractiveness;
    double intelligenceLevel;
    int budget;
    int reqAttraction;
    bool committed;
    public:
        std::string getName();
        void setName(std::string name);
        double getAttractiveness();
        void setAttractiveness(double attractiveness);
        double getIntelligenceLevel();
        void setIntelligenceLevel(double intelligenceLevel);
        int getBudget();
        void setBudget(int budget);
        bool setCommitted(bool b);
        bool getCommitted();
        int happiness();
        int getReqAttraction();
        void setReqAttraction(int at);
  };
}
