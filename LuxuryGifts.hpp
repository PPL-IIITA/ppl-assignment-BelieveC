#include<string>
namespace ValentinePrimeTime{
  class LuxuryGifts
  {
    std::string name;
    int luxuryRating;
    int difficultyRating;
    int price;
    int value;
    public:
        std::string getName();
        void setName(std::string name);
        int getLuxuryRating();
        int getDifficultyRating();
        int getPrice();
        int getValue();
        void setLuxuryRating(int luxuryRating);
        void setDifficultyRating(int difficultyRating);
        void setPrice(int price);
        void setValue(int value);
  };
}
