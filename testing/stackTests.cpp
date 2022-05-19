#include "mainTests.hpp"

/*************    Int test    *************/

template < class T, class U >
void	pushAndTopTest(T stack, U x, U y)
{
	for (int i = 1; i < 6; i++)
	{
		x += y;
		stack.push(x);
		EXPECT_EQ(stack.top(), x);
	}
}

template < class T, class U >
void	popAndTopTest(T stack, U x, U y)
{
	for (int i = 1; i < 10; i++)
	{
		x += y;
		stack.push(x);
	}
	EXPECT_EQ(stack.top(), x);
	for (int i = 1; i < 5; i++)
	{
		x -= y;
		stack.pop();
	}
	EXPECT_EQ(stack.top(), x);
}

template < class T, class U >
void	popAndTopStringTest(T stack, U x, U y)
{
	for (int i = 1; i < 10; i++)
	{
		x += y;
		stack.push(x);
	}
	EXPECT_EQ(stack.top(), x);
	for (int i = 1; i < 5; i++)
	{
		stack.pop();
	}
	EXPECT_EQ(stack.top(), "Test ! ! ! ! !");
}

template < class T, class U >
void	sizeTest(T stack, U x)
{
	EXPECT_EQ(stack.size(), (unsigned long)0);
	stack.push(x);
	EXPECT_EQ(stack.size(), (unsigned long)1);
	for (int i = 2; i < 6; i++)
		stack.push(x);
	EXPECT_EQ(stack.size(), (unsigned long)5);
	for (int i = 6; i < 21; i++)
		stack.push(x);
	EXPECT_EQ(stack.size(), (unsigned long)20);
	for (int i = 21; i < 101; i++)
		stack.push(x);
	EXPECT_EQ(stack.size(), (unsigned long)100);
	for (int i = 1; i < 101; i++)
		stack.pop();
	EXPECT_EQ(stack.size(), (unsigned long)0);
}

template < class T, class U >
void	emptyTest(T stack, U x)
{
	EXPECT_EQ(stack.empty(), true);
	for (int i = 1; i < 101; i++)
		stack.push(x);
	EXPECT_EQ(stack.empty(), false);
	for (int i = 1; i < 101; i++)
		stack.pop();
	EXPECT_EQ(stack.empty(), true);
	stack.push(x);
	EXPECT_EQ(stack.empty(), false);
}

template < class T, class U >
void	constructorTest(T stack, U x)
{
	stack.push(x);
	T	copy(stack);
	EXPECT_EQ(copy.top(), x);
	EXPECT_EQ(copy.size(), (unsigned long)1);
	EXPECT_EQ(copy.empty(), false);
}

template < class T, class U >
void	operatorEqualTest(T stack, U x)
{
	for (int i = 0; i < 30; i++)
		stack.push(x);
	T	copy(stack);
	EXPECT_EQ(stack == stack, true);
	EXPECT_EQ(stack == copy, true);
	copy.push(x);
	EXPECT_EQ(stack == copy, false);
}

template < class T, class U >
void	operatorNotEqualTest(T stack, U x)
{
	for (int i = 0; i < 30; i++)
		stack.push(x);
	T	copy(stack);
	EXPECT_EQ(stack != stack, false);
	EXPECT_EQ(stack != copy, false);
	copy.push(x);
	EXPECT_EQ(stack != copy, true);
}

template < class T, class U >
void	operatorSupEqualTest(T stack, U x)
{
	for (int i = 0; i < 30; i++)
		stack.push(x);
	T	copy(stack);
	EXPECT_EQ(stack >= stack, true);
	EXPECT_EQ(stack >= copy, true);
	copy.push(x);
	EXPECT_EQ(stack >= copy, false);
}

template < class T, class U >
void	operatorSupTest(T stack, U x)
{
	for (int i = 0; i < 30; i++)
		stack.push(x);
	T	copy(stack);
	EXPECT_EQ(stack > stack, false);
	EXPECT_EQ(stack > copy, false);
	copy.push(x);
	EXPECT_EQ(stack > copy, false);
}

template < class T, class U >
void	operatorInfEqualTest(T stack, U x)
{
	for (int i = 0; i < 30; i++)
		stack.push(x);
	T	copy(stack);
	EXPECT_EQ(stack <= stack, true);
	EXPECT_EQ(stack <= copy, true);
	copy.push(x);
	EXPECT_EQ(stack <= copy, true);
}

template < class T, class U >
void	operatorInfTest(T stack, U x)
{
	for (int i = 0; i < 30; i++)
		stack.push(x);
	T	copy(stack);
	EXPECT_EQ(stack < stack, false);
	EXPECT_EQ(stack < copy, false);
	copy.push(x);
	EXPECT_EQ(stack < copy, true);
}

/*************  Run test   *************/

template < class T >
void	runIntTests(T &stack)
{
	pushAndTopTest(stack, 0, 1);
	popAndTopTest(stack, 0, 1);
	sizeTest(stack, 2);
	emptyTest(stack, 3);
	constructorTest(stack, 4);
	operatorEqualTest(stack, 5);
	operatorNotEqualTest(stack, 6);
	operatorSupEqualTest(stack, 7);
	operatorSupTest(stack, 8);
	operatorInfEqualTest(stack, 9);
	operatorInfTest(stack, 10);
}

template < class T >
void	runFloatTests(T &stack)
{
	pushAndTopTest(stack, 0.0f, 0.5f);
	popAndTopTest(stack, 0.001f, 1.1f);
	sizeTest(stack, 2.0f);
	emptyTest(stack, 3.000f);
	constructorTest(stack, 4.0432f);
	operatorEqualTest(stack, 5.0020f);
	operatorNotEqualTest(stack, 6.322f);
	operatorSupEqualTest(stack, 7.002135f);
	operatorSupTest(stack, 8.0f);
	operatorInfEqualTest(stack, 9.555f);
	operatorInfTest(stack, 10.1f);
}

template < class T >
void	runDoubleTests(T &stack)
{
	pushAndTopTest(stack, 1.0001, 0.0001);
	popAndTopTest(stack, 2.00034, 3.3425);
	sizeTest(stack, 3.452);
	emptyTest(stack, 4.454);
	constructorTest(stack, 5.42131);
	operatorEqualTest(stack, 6.655342);
	operatorNotEqualTest(stack, 7.2342);
	operatorSupEqualTest(stack, 8.54);
	operatorSupTest(stack, 9.0);
	operatorInfEqualTest(stack, 10.234451);
	operatorInfTest(stack, 11.01);
}

template < class T >
void	runStringTests(T &stack)
{
	std::string testX = "Test";
	std::string testY = " !";

	pushAndTopTest(stack, testX, testY);
	popAndTopStringTest(stack, testX, testY);
	sizeTest(stack, testX);
	emptyTest(stack, testX);
	constructorTest(stack, testX);
	operatorEqualTest(stack, testX);
	operatorNotEqualTest(stack, testX);
	operatorSupEqualTest(stack, testX);
	operatorSupTest(stack, testX);
	operatorInfEqualTest(stack, testX);
	operatorInfTest(stack, testX);
}

TEST(Stack, StdStack)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                      ";
	std::cout << "          [ STD::STACK ] " << RESET << std::endl;

	std::stack<int> intStack;
	runIntTests(intStack);

	std::stack<float> floatStack;
	runFloatTests(floatStack);

	std::stack<double> doubleStack;
	runDoubleTests(doubleStack);

	std::stack<std::string> stringStack;
	runStringTests(stringStack);
}


TEST(Stack, FtStack)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "           [ FT::STACK ] " << RESET << std::endl;

	ft::stack<int> intStack;
	runIntTests(intStack);

	ft::stack<float> floatStack;
	runFloatTests(floatStack);

	ft::stack<double> doubleStack;
	runDoubleTests(doubleStack);

	ft::stack<std::string> stringStack;
	runStringTests(stringStack);
}
