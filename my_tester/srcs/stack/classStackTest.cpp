#include "../mainTests.hpp"

/**************************************************************/
/*                    CLASS STD::STACK TEST                   */
/**************************************************************/

class stdStackTest: public ::testing::Test, public globalVarTest
{
	protected:
		std::stack<int> intEmptyStack;
		std::stack<int> intFilledStack;
		std::stack<int> intToInsertStack;

		std::stack<float> floatEmptyStack;
		std::stack<float> floatFilledStack;
		std::stack<float> floatToInsertStack;

		std::stack<double> doubleEmptyStack;
		std::stack<double> doubleFilledStack;
		std::stack<double> doubleToInsertStack;

		std::stack<std::string> stringEmptyStack;
		std::stack<std::string> stringFilledStack;
		std::stack<std::string> stringToInsertStack;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledStack.push(intX[i]);
				floatFilledStack.push(floatX[i]);
				doubleFilledStack.push(doubleX[i]);
				stringFilledStack.push(stringX[i]);
			}
			for (int i = 0; i < 5; i++)
			{
				intToInsertStack.push(intY[i]);
				floatToInsertStack.push(floatY[i]);
				doubleToInsertStack.push(doubleY[i]);
				stringToInsertStack.push(stringY[i]);
			}
		}
};

/**************************************************************/
/*                    CLASS FT::STACK TEST                    */
/**************************************************************/

class ftStackTest: public ::testing::Test, public globalVarTest
{
	protected:
		ft::stack<int> intEmptyStack;
		ft::stack<int> intFilledStack;
		ft::stack<int> intToInsertStack;

		ft::stack<float> floatEmptyStack;
		ft::stack<float> floatFilledStack;
		ft::stack<float> floatToInsertStack;

		ft::stack<double> doubleEmptyStack;
		ft::stack<double> doubleFilledStack;
		ft::stack<double> doubleToInsertStack;

		ft::stack<std::string> stringEmptyStack;
		ft::stack<std::string> stringFilledStack;
		ft::stack<std::string> stringToInsertStack;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledStack.push(intX[i]);
				floatFilledStack.push(floatX[i]);
				doubleFilledStack.push(doubleX[i]);
				stringFilledStack.push(stringX[i]);
			}
			for (int i = 0; i < 5; i++)
			{
				intToInsertStack.push(intY[i]);
				floatToInsertStack.push(floatY[i]);
				doubleToInsertStack.push(doubleY[i]);
				stringToInsertStack.push(stringY[i]);
			}
		}	
};
