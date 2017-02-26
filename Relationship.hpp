#include<string>

namespace ValentinePrimeTime{
  class Relationship
  {
    std::string boyName;
    std::string girlName;
    double compatibleRating;
    double happinessRating;
    public:
    void setBoyName(std::string boyName);
    void setGirlName(std::string girlName);
    void setCompatibleRating(double compatibleRating);
    void setHappinessRating(double happinessRating);
    std::string getBoyName();
    std::string getGirlName();
    double getCompatibleRating();
    double getHappinessRating();
  };
}
