#include "mainTests.hpp"

/**************************************************************/
/*                       CLASS MAP TEST                       */
/**************************************************************/

class stdMapTest: public ::testing::Test, public globalVarTest
{
	protected:
		std::map<int, int> intIntEmptyMap;
		std::map<int, int> intIntFilledMap;

		std::map<int, float> intFloatEmptyMap;
		std::map<int, float> intFloatFilledMap;

		std::map<int, double> intDoubleEmptyMap;
		std::map<int, double> intDoubleFilledMap;

		std::map<int, std::string> intStringEmptyMap;
		std::map<int, std::string> intStringFilledMap;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intIntFilledMap.insert(std::pair<int, int>(intX[i], intX[i]));
				intFloatFilledMap.insert(std::pair<int, float>(intX[i], floatX[i]));
				intDoubleFilledMap.insert(std::pair<int, double>(intX[i], doubleX[i]));
				intStringFilledMap.insert(std::pair<int, std::string>(intX[i], stringX[i]));
			}	
		}
};

class ftMapTest: public ::testing::Test, public globalVarTest
{
	protected:
		ft::map<int, int> intIntEmptyMap;
		ft::map<int, int> intIntFilledMap;

		ft::map<int, float> intFloatEmptyMap;
		ft::map<int, float> intFloatFilledMap;

		ft::map<int, double> intDoubleEmptyMap;
		ft::map<int, double> intDoubleFilledMap;

		ft::map<int, std::string> intStringEmptyMap;
		ft::map<int, std::string> intStringFilledMap;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intIntFilledMap.insert(ft::pair<int, int>(intX[i], intX[i]));
				intFloatFilledMap.insert(ft::pair<int, float>(intX[i], floatX[i]));
				intDoubleFilledMap.insert(ft::pair<int, double>(intX[i], doubleX[i]));
				intStringFilledMap.insert(ft::pair<int, std::string>(intX[i], stringX[i]));
			}
		}
};
