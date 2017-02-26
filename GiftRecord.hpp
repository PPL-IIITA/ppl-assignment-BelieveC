#include<string>
namespace ValentinePrimeTime{
	class GiftRecord
	{
		std::string name;
		std::string boyName;
		std::string girlName;
	public:
		void setName(std::string name);
		void setBoyName(std::string boyName);
    	void setGirlName(std::string girlName);
    	std::string getName();
    	std::string getBoyName();
    	std::string getGirlName();
	};
}