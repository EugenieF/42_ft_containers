#include "mainTests.hpp"

/**************************************************************/
/*                     CLASS STD::MAP TEST                    */
/**************************************************************/

class stdMapTest: public ::testing::Test, public globalVarTest
{
	protected:
		std::map<int, int> intIntEmptyMap;
		std::map<int, int> intIntFilledMap;
		std::map<int, int> intIntToInsertMap;

		std::map<int, float> intFloatEmptyMap;
		std::map<int, float> intFloatFilledMap;
		std::map<int, float> intFloatToInsertMap;

		std::map<int, double> intDoubleEmptyMap;
		std::map<int, double> intDoubleFilledMap;
		std::map<int, double> intDoubleToInsertMap;

		std::map<int, std::string> intStringEmptyMap;
		std::map<int, std::string> intStringFilledMap;
		std::map<int, std::string> intStringToInsertMap;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intIntFilledMap.insert(std::pair<int, int>(intX[i], intX[i]));
				intFloatFilledMap.insert(std::pair<int, float>(intX[i], floatX[i]));
				intDoubleFilledMap.insert(std::pair<int, double>(intX[i], doubleX[i]));
				intStringFilledMap.insert(std::pair<int, std::string>(intX[i], stringX[i]));
			}	
			for (int i = 0; i < 5; i++)
			{
				intIntToInsertMap.insert(std::pair<int, int>(intY[i], intY[i]));
				intFloatToInsertMap.insert(std::pair<int, float>(intY[i], floatY[i]));
				intDoubleToInsertMap.insert(std::pair<int, double>(intY[i], doubleY[i]));
				intStringToInsertMap.insert(std::pair<int, std::string>(intY[i], stringY[i]));
			}
		}
};

/**************************************************************/
/*                     CLASS FT::MAP TEST                     */
/**************************************************************/

class ftMapTest: public ::testing::Test, public globalVarTest
{
	protected:
		ft::map<int, int> intIntEmptyMap;
		ft::map<int, int> intIntFilledMap;
		ft::map<int, int> intIntToInsertMap;

		ft::map<int, float> intFloatEmptyMap;
		ft::map<int, float> intFloatFilledMap;
		ft::map<int, float> intFloatToInsertMap;

		ft::map<int, double> intDoubleEmptyMap;
		ft::map<int, double> intDoubleFilledMap;
		ft::map<int, double> intDoubleToInsertMap;

		ft::map<int, std::string> intStringEmptyMap;
		ft::map<int, std::string> intStringFilledMap;
		ft::map<int, std::string> intStringToInsertMap;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intIntFilledMap.insert(ft::pair<int, int>(intX[i], intX[i]));
				intFloatFilledMap.insert(ft::pair<int, float>(intX[i], floatX[i]));
				intDoubleFilledMap.insert(ft::pair<int, double>(intX[i], doubleX[i]));
				intStringFilledMap.insert(ft::pair<int, std::string>(intX[i], stringX[i]));
			}
			for (int i = 0; i < 5; i++)
			{
				intIntToInsertMap.insert(ft::pair<int, int>(intY[i], intY[i]));
				intFloatToInsertMap.insert(ft::pair<int, float>(intY[i], floatY[i]));
				intDoubleToInsertMap.insert(ft::pair<int, double>(intY[i], doubleY[i]));
				intStringToInsertMap.insert(ft::pair<int, std::string>(intY[i], stringY[i]));
			}
		}
};
