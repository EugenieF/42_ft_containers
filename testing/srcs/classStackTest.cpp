#include "mainTests.hpp"

/**************************************************************/
/*                      CLASS STACK TEST                      */
/**************************************************************/

class stdStackTest: public ::testing::Test, public globalVarTest
{
	protected:
		std::stack<int> intEmptyStack;
		std::stack<int> intFilledStack;

		std::stack<float> floatEmptyStack;
		std::stack<float> floatFilledStack;

		std::stack<double> doubleEmptyStack;
		std::stack<double> doubleFilledStack;

		std::stack<std::string> stringEmptyStack;
		std::stack<std::string> stringFilledStack;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledStack.push(intX[i]);
				floatFilledStack.push(floatX[i]);
				doubleFilledStack.push(doubleX[i]);
				stringFilledStack.push(stringX[i]);
			}
		}
};

class ftStackTest: public ::testing::Test, public globalVarTest
{
	protected:
		ft::stack<int> intEmptyStack;
		ft::stack<int> intFilledStack;

		ft::stack<float> floatEmptyStack;
		ft::stack<float> floatFilledStack;

		ft::stack<double> doubleEmptyStack;
		ft::stack<double> doubleFilledStack;

		ft::stack<std::string> stringEmptyStack;
		ft::stack<std::string> stringFilledStack;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledStack.push(intX[i]);
				floatFilledStack.push(floatX[i]);
				doubleFilledStack.push(doubleX[i]);
				stringFilledStack.push(stringX[i]);
			}
		}	
};
