#include<string>

namespace ValentinePrimeTime{
  class EssentialGifts
  {
    std::string name;
    int price;
    int value;

    public:
      std::string getName();
      void setName(std::string name);
      int getPrice();
      int getValue();
      void setPrice(int price);
      void setValue(int value);
  };
}
