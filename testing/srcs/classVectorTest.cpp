#include "mainTests.hpp"

/**************************************************************/
/*                      CLASS VECTOR TEST                     */
/**************************************************************/

class stdVectorTest: public ::testing::Test, public globalVarTest
{
	protected:
		std::vector<int> intEmptyVector;
		std::vector<int> intFilledVector;

		std::vector<float> floatEmptyVector;
		std::vector<float> floatFilledVector;

		std::vector<double> doubleEmptyVector;
		std::vector<double> doubleFilledVector;

		std::vector<std::string> stringEmptyVector;
		std::vector<std::string> stringFilledVector;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledVector.push_back(intX[i]);
				floatFilledVector.push_back(floatX[i]);
				doubleFilledVector.push_back(doubleX[i]);
				stringFilledVector.push_back(stringX[i]);
			}
		}
};

class ftVectorTest: public ::testing::Test, public globalVarTest
{
	protected:
		ft::vector<int> intEmptyVector;
		ft::vector<int> intFilledVector;

		ft::vector<float> floatEmptyVector;
		ft::vector<float> floatFilledVector;

		ft::vector<double> doubleEmptyVector;
		ft::vector<double> doubleFilledVector;

		ft::vector<std::string> stringEmptyVector;
		ft::vector<std::string> stringFilledVector;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledVector.push_back(intX[i]);
				floatFilledVector.push_back(floatX[i]);
				doubleFilledVector.push_back(doubleX[i]);
				stringFilledVector.push_back(stringX[i]);
			}
		}	
};
