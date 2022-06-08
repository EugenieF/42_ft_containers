#include "mainTests.hpp"

/**************************************************************/
/*                    CLASS STD::SET TEST                     */
/**************************************************************/

class stdSetTest: public ::testing::Test, public globalVarTest
{
	protected:
		std::set<int> intEmptySet;
		std::set<int> intFilledSet;
		std::set<int> intToInsertSet;

		std::set<float> floatEmptySet;
		std::set<float> floatFilledSet;
		std::set<float> floatToInsertSet;

		std::set<double> doubleEmptySet;
		std::set<double> doubleFilledSet;
		std::set<double> doubleToInsertSet;

		std::set<std::string> stringEmptySet;
		std::set<std::string> stringFilledSet;
		std::set<std::string> stringToInsertSet;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledSet.insert(intX[i]);
				floatFilledSet.insert(floatX[i]);
				doubleFilledSet.insert(doubleX[i]);
				stringFilledSet.insert(stringX[i]);
			}
			for (int i = 0; i < 5; i++)
			{
				intToInsertSet.insert(intY[i]);
				floatToInsertSet.insert(floatY[i]);
				doubleToInsertSet.insert(doubleY[i]);
				stringToInsertSet.insert(stringY[i]);
			}
		}
};

/**************************************************************/
/*                     CLASS FT::SET TEST                     */
/**************************************************************/

class ftSetTest: public ::testing::Test, public globalVarTest
{
	protected:
		ft::set<int> intEmptySet;
		ft::set<int> intFilledSet;
		ft::set<int> intToInsertSet;

		ft::set<float> floatEmptySet;
		ft::set<float> floatFilledSet;
		ft::set<float> floatToInsertSet;

		ft::set<double> doubleEmptySet;
		ft::set<double> doubleFilledSet;
		ft::set<double> doubleToInsertSet;

		ft::set<std::string> stringEmptySet;
		ft::set<std::string> stringFilledSet;
		ft::set<std::string> stringToInsertSet;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledSet.insert(intX[i]);
				floatFilledSet.insert(floatX[i]);
				doubleFilledSet.insert(doubleX[i]);
				stringFilledSet.insert(stringX[i]);
			}
			for (int i = 0; i < 5; i++)
			{
				intToInsertSet.insert(intY[i]);
				floatToInsertSet.insert(floatY[i]);
				doubleToInsertSet.insert(doubleY[i]);
				stringToInsertSet.insert(stringY[i]);
			}
		}
};
