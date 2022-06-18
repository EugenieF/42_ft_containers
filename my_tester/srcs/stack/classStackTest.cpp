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

		std::stack<int, std::list<int> > intListEmptyStack;
		std::stack<int, std::list<int> > intListFilledStack;
		std::stack<int, std::list<int> > intListToInsertStack;

		ft::stack<std::string, std::list<std::string> > stringListEmptyStack;
		ft::stack<std::string, std::list<std::string> > stringListFilledStack;
		ft::stack<std::string, std::list<std::string> > stringListToInsertStack;

		std::stack<int, std::deque<int> > intDequeEmptyStack;
		std::stack<int, std::deque<int> > intDequeFilledStack;
		std::stack<int, std::deque<int> > intDequeToInsertStack;

		ft::stack<std::string, std::deque<std::string> > stringDequeEmptyStack;
		ft::stack<std::string, std::deque<std::string> > stringDequeFilledStack;
		ft::stack<std::string, std::deque<std::string> > stringDequeToInsertStack;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledStack.push(intX[i]);
				floatFilledStack.push(floatX[i]);
				doubleFilledStack.push(doubleX[i]);
				stringFilledStack.push(stringX[i]);

				intListFilledStack.push(intX[i]);
				stringListFilledStack.push(stringX[i]);

				intDequeFilledStack.push(intX[i]);
				stringDequeFilledStack.push(stringX[i]);
			}
			for (int i = 0; i < 5; i++)
			{
				intToInsertStack.push(intY[i]);
				floatToInsertStack.push(floatY[i]);
				doubleToInsertStack.push(doubleY[i]);
				stringToInsertStack.push(stringY[i]);
				
				intListToInsertStack.push(intY[i]);
				stringListToInsertStack.push(stringY[i]);

				intDequeToInsertStack.push(intY[i]);
				stringDequeToInsertStack.push(stringY[i]);
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

		ft::stack<int, std::list<int> > intListEmptyStack;
		ft::stack<int, std::list<int> > intListFilledStack;
		ft::stack<int, std::list<int> > intListToInsertStack;

		ft::stack<std::string, std::list<std::string> > stringListEmptyStack;
		ft::stack<std::string, std::list<std::string> > stringListFilledStack;
		ft::stack<std::string, std::list<std::string> > stringListToInsertStack;
	
		ft::stack<int, std::deque<int> > intDequeEmptyStack;
		ft::stack<int, std::deque<int> > intDequeFilledStack;
		ft::stack<int, std::deque<int> > intDequeToInsertStack;

		ft::stack<std::string, std::deque<std::string> > stringDequeEmptyStack;
		ft::stack<std::string, std::deque<std::string> > stringDequeFilledStack;
		ft::stack<std::string, std::deque<std::string> > stringDequeToInsertStack;

		void	SetUp() override
		{
			for (int i = 0; i < 10; i++)
			{
				intFilledStack.push(intX[i]);
				floatFilledStack.push(floatX[i]);
				doubleFilledStack.push(doubleX[i]);
				stringFilledStack.push(stringX[i]);

				intListFilledStack.push(intX[i]);
				stringListFilledStack.push(stringX[i]);

				intDequeFilledStack.push(intX[i]);
				stringDequeFilledStack.push(stringX[i]);
			}
			for (int i = 0; i < 5; i++)
			{
				intToInsertStack.push(intY[i]);
				floatToInsertStack.push(floatY[i]);
				doubleToInsertStack.push(doubleY[i]);
				stringToInsertStack.push(stringY[i]);

				intListToInsertStack.push(intY[i]);
				stringListToInsertStack.push(stringY[i]);

				intDequeToInsertStack.push(intY[i]);
				stringDequeToInsertStack.push(stringY[i]);
			}
		}	
};
