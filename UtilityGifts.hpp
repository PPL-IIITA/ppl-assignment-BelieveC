#include<string>

namespace ValentinePrimeTime{
  class UtilityGifts
  {
    std::string name;
    int price;
    int value;
    int utilityValue;
    public:
      std::string getName();
      void setName(std::string name);
      int getPrice();
      int getValue();
      int getUtilityValue();
      void setPrice(int price);
      void setValue(int value);
      void setUtilityValue(int utilityValue);
  };
}
