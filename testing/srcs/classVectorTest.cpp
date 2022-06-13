#include "mainTests.hpp"

/**************************************************************/
/*                    CLASS STD::VECTOR TEST                  */
/**************************************************************/

class stdVectorTest: public ::testing::Test, public globalVarTest
{
	protected:
		std::vector<int> 				intEmptyVector;
		std::vector<int> 				intFilledVector;
		std::vector<int> 				intToInsertVector;

		std::vector<float> 				floatEmptyVector;
		std::vector<float> 				floatFilledVector;
		std::vector<float> 				floatToInsertVector;

		std::vector<double> 			doubleEmptyVector;
		std::vector<double> 			doubleFilledVector;
		std::vector<double> 			doubleToInsertVector;

		std::vector<std::string> 		stringEmptyVector;
		std::vector<std::string> 		stringFilledVector;
		std::vector<std::string> 		stringToInsertVector;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledVector.push_back(intX[i]);
				floatFilledVector.push_back(floatX[i]);
				doubleFilledVector.push_back(doubleX[i]);
				stringFilledVector.push_back(stringX[i]);
			}
			for (int i = 0; i < 5; i++)
			{
				intToInsertVector.push_back(intY[i]);
				floatToInsertVector.push_back(floatY[i]);
				doubleToInsertVector.push_back(doubleY[i]);
				stringToInsertVector.push_back(stringY[i]);
			}
		}
};

/**************************************************************/
/*                    CLASS FT::VECTOR TEST                   */
/**************************************************************/

class ftVectorTest: public ::testing::Test, public globalVarTest
{
	protected:
		ft::vector<int> intEmptyVector;
		ft::vector<int> intFilledVector;
		ft::vector<int> intToInsertVector;

		ft::vector<float> floatEmptyVector;
		ft::vector<float> floatFilledVector;
		ft::vector<float> floatToInsertVector;

		ft::vector<double> doubleEmptyVector;
		ft::vector<double> doubleFilledVector;
		ft::vector<double> doubleToInsertVector;

		ft::vector<std::string> stringEmptyVector;
		ft::vector<std::string> stringFilledVector;
		ft::vector<std::string> stringToInsertVector;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledVector.push_back(intX[i]);
				floatFilledVector.push_back(floatX[i]);
				doubleFilledVector.push_back(doubleX[i]);
				stringFilledVector.push_back(stringX[i]);
			}
			for (int i = 0; i < 5; i++)
			{
				intToInsertVector.push_back(intY[i]);
				floatToInsertVector.push_back(floatY[i]);
				doubleToInsertVector.push_back(doubleY[i]);
				stringToInsertVector.push_back(stringY[i]);
			}
		}

};
