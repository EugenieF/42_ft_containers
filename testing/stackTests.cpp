#include "mainTests.hpp"

/*************    Int test    *************/

template < class T >
void	pushAndTopIntTest(T &stack)
{
	for (int i = 1; i < 6; i++)
	{
		stack.push(i);
		EXPECT_EQ(stack.top(), i);
	}
}

template < class T >
void	popAndTopIntTest(T &stack)
{
	for (int i = 1; i < 5; i++)
		stack.pop();
	EXPECT_EQ(stack.top(), 1);
	for (int i = 1; i < 10; i++)
		stack.push(i);
	for (int i = 1; i < 6; i++)
		stack.pop();
	EXPECT_EQ(stack.top(), 4);
	for (int i = 1; i < 6; i++)
		stack.pop();
}

template < class T >
void	sizeTest(T &stack)
{
	EXPECT_EQ(stack.size(), (unsigned long)0);
	stack.push(1);
	EXPECT_EQ(stack.size(), (unsigned long)1);
	for (int i = 2; i < 6; i++)
		stack.push(i);
	EXPECT_EQ(stack.size(), (unsigned long)5);
	for (int i = 6; i < 21; i++)
		stack.push(i);
	EXPECT_EQ(stack.size(), (unsigned long)20);
	for (int i = 21; i < 101; i++)
		stack.push(i);
	EXPECT_EQ(stack.size(), (unsigned long)100);
}

template < class T >
void	emptyIntTest(T &stack)
{
	EXPECT_EQ(stack.empty(), false);
	for (int i = 1; i < 101; i++)
		stack.pop();
	EXPECT_EQ(stack.empty(), true);
	stack.push(1);
	EXPECT_EQ(stack.empty(), false);
}


template < class T >
void	constructorIntTest(T &stack)
{
	T	copy(stack);
	EXPECT_EQ(copy.top(), 1);
	EXPECT_EQ(copy.size(), (unsigned long)1);
	EXPECT_EQ(copy.empty(), false);
}

template < class T >
void	operatorEqualTest(T &stack)
{
	T	copy(stack);
	EXPECT_EQ(stack == stack, true);
	EXPECT_EQ(stack == copy, true);
	copy.push(10);
	EXPECT_EQ(stack == copy, false);
}

template < class T >
void	operatorNotEqualTest(T &stack)
{
	T	copy(stack);
	EXPECT_EQ(stack != stack, false);
	EXPECT_EQ(stack != copy, false);
	copy.push(10);
	EXPECT_EQ(stack != copy, true);
}

template < class T >
void	operatorSupEqualTest(T &stack)
{
	T	copy(stack);
	EXPECT_EQ(stack >= stack, true);
	EXPECT_EQ(stack >= copy, true);
	copy.push(10);
	EXPECT_EQ(stack >= copy, false);
}

template < class T >
void	operatorSupTest(T &stack)
{
	T	copy(stack);
	EXPECT_EQ(stack > stack, false);
	EXPECT_EQ(stack > copy, false);
	copy.push(10);
	EXPECT_EQ(stack > copy, false);
}

template < class T >
void	operatorInfEqualTest(T &stack)
{
	T	copy(stack);
	EXPECT_EQ(stack <= stack, true);
	EXPECT_EQ(stack <= copy, true);
	copy.push(10);
	EXPECT_EQ(stack <= copy, true);
}

template < class T >
void	operatorInfTest(T &stack)
{
	T	copy(stack);
	EXPECT_EQ(stack < stack, false);
	EXPECT_EQ(stack < copy, false);
	copy.push(10);
	EXPECT_EQ(stack < copy, true);
}

/*************   Float test   *************/

template < class T >
void	pushAndTopFloatTest(T &stack)
{
	float x = 1.0f;

	for (int i = 1; i < 6; i++)
	{
		stack.push(x + 0.5f);
		EXPECT_EQ(stack.top(), x + 0.5f);
	}
}

template < class T >
void	popAndTopFloatTest(T &stack)
{
	float x = 1.0f;

	for (int i = 1; i < 5; i++)
		stack.pop();
	EXPECT_EQ(stack.top(), x);
	for (int i = 1; i < 10; i++)
		stack.push(x + 0.5f);
	for (int i = 1; i < 6; i++)
		stack.pop();
	EXPECT_EQ(stack.top(), 3.5f);
	for (int i = 1; i < 6; i++)
		stack.pop();
}

/*************  Global test   *************/

template < class T >
void	intTests(T &stack)
{
	pushAndTopIntTest(stack);
	popAndTopIntTest(stack);
	sizeTest(stack);
	emptyIntTest(stack);
	constructorIntTest(stack);
	operatorEqualTest(stack);
	operatorNotEqualTest(stack);
	operatorSupEqualTest(stack);
	operatorSupTest(stack);
	operatorInfEqualTest(stack);
	operatorInfTest(stack);
}

template < class T >
void	floatTests(T &stack)
{
	pushAndTopFloatTest(stack);
}

template < class T >
void	runTests(T &stack)
{
	intTests(stack);
	floatTests(stack);
}

TEST(StackInt, StdStackInt)
{
	std::cout << std::endl << ORANGE_B << "\t\t\t\t\t\t  [ STD::STACK ] " << RESET << std::endl;
	std::stack<int> stack;
	runTests(stack);
}

TEST(StackFloat, StdStackFloat)
{
	std::cout << std::endl << ORANGE_B << "\t\t\t\t\t\t  [ STD::STACK ] " << RESET << std::endl;
	std::stack<float> stack;
	runTests(stack);
}

TEST(StackInt, FtStackInt)
{
	std::cout << std::endl << BLUE_B << "\t\t\t\t\t\t   [ FT::STACK ] " << RESET << std::endl;
	ft::stack<int> stack;
	runTests(stack);
}

TEST(StackFloat, FtStackFloat)
{
	std::cout << std::endl << BLUE_B << "\t\t\t\t\t\t   [ FT::STACK ] " << RESET << std::endl;
	ft::stack<float> stack;
	runTests(stack);
}
