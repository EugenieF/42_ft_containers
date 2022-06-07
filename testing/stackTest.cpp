#include "mainTests.hpp"

/**************************************************************/
/*                     RUN STD::STACK TEST                    */
/**************************************************************/

TEST_F(stdStackTest, initSizeStack)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                      ";
	std::cout << "          [ STD::STACK ] " << RESET << std::endl;

	size_t	expectedEmptyMapSize = (size_t)0;
	size_t	expectedFilledMapSize = (size_t)10;

	EXPECT_EQ(intEmptyStack.size(), expectedEmptyMapSize);
	EXPECT_EQ(intFilledStack.size(), expectedFilledMapSize);

	EXPECT_EQ(floatEmptyStack.size(), expectedEmptyMapSize);
	EXPECT_EQ(floatFilledStack.size(), expectedFilledMapSize);

	EXPECT_EQ(doubleEmptyStack.size(), expectedEmptyMapSize);
	EXPECT_EQ(doubleFilledStack.size(), expectedFilledMapSize);

	EXPECT_EQ(stringEmptyStack.size(), expectedEmptyMapSize);
	EXPECT_EQ(stringFilledStack.size(), expectedFilledMapSize);
}

TEST_F(stdStackTest, pushInEmptyStack)
{
	for (int i = 0; i < 10; i++)
	{
		intEmptyStack.push(intX[i]);
		EXPECT_EQ(intEmptyStack.top(), intX[i]);
	
		floatEmptyStack.push(floatX[i]);
		EXPECT_EQ(floatEmptyStack.top(), floatX[i]);

		doubleEmptyStack.push(doubleX[i]);
		EXPECT_EQ(doubleEmptyStack.top(), doubleX[i]);

		stringEmptyStack.push(stringX[i]);
		EXPECT_EQ(stringEmptyStack.top(), stringX[i]);
	}
}

TEST_F(stdStackTest, popOneInFilledStack)
{
	intFilledStack.pop();
	EXPECT_EQ(intFilledStack.top(), intX[8]);
	EXPECT_EQ(intFilledStack.size(), (size_t)9);

	floatFilledStack.pop();
	EXPECT_EQ(floatFilledStack.top(), floatX[8]);
	EXPECT_EQ(floatFilledStack.size(), (size_t)9);
	
	doubleFilledStack.pop();
	EXPECT_EQ(doubleFilledStack.top(), doubleX[8]);
	EXPECT_EQ(doubleFilledStack.size(), (size_t)9);
	
	stringFilledStack.pop();
	EXPECT_EQ(stringFilledStack.top(), stringX[8]);
	EXPECT_EQ(stringFilledStack.size(), (size_t)9);
}

/**************************************************************/
/*                     RUN FT::STACK TEST                     */
/**************************************************************/

TEST_F(ftStackTest, initSizeStack)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "           [ FT::STACK ] " << RESET << std::endl;

	size_t	expectedEmptyMapSize = (size_t)0;
	size_t	expectedFilledMapSize = (size_t)10;

	EXPECT_EQ(intEmptyStack.size(), expectedEmptyMapSize);
	EXPECT_EQ(intFilledStack.size(), expectedFilledMapSize);

	EXPECT_EQ(floatEmptyStack.size(), expectedEmptyMapSize);
	EXPECT_EQ(floatFilledStack.size(), expectedFilledMapSize);

	EXPECT_EQ(doubleEmptyStack.size(), expectedEmptyMapSize);
	EXPECT_EQ(doubleFilledStack.size(), expectedFilledMapSize);

	EXPECT_EQ(stringEmptyStack.size(), expectedEmptyMapSize);
	EXPECT_EQ(stringFilledStack.size(), expectedFilledMapSize);
}

TEST_F(ftStackTest, pushInEmptyStack)
{
	for (int i = 0; i < 10; i++)
	{
		intEmptyStack.push(intX[i]);
		EXPECT_EQ(intEmptyStack.top(), intX[i]);

		floatEmptyStack.push(floatX[i]);
		EXPECT_EQ(floatEmptyStack.top(), floatX[i]);

		doubleEmptyStack.push(doubleX[i]);
		EXPECT_EQ(doubleEmptyStack.top(), doubleX[i]);

		stringEmptyStack.push(stringX[i]);
		EXPECT_EQ(stringEmptyStack.top(), stringX[i]);
	}
}

TEST_F(ftStackTest, popOneInFilledStack)
{
	intFilledStack.pop();
	EXPECT_EQ(intFilledStack.top(), intX[8]);
	EXPECT_EQ(intFilledStack.size(), (size_t)9);

	floatFilledStack.pop();
	EXPECT_EQ(floatFilledStack.top(), floatX[8]);
	EXPECT_EQ(floatFilledStack.size(), (size_t)9);
	
	doubleFilledStack.pop();
	EXPECT_EQ(doubleFilledStack.top(), doubleX[8]);
	EXPECT_EQ(doubleFilledStack.size(), (size_t)9);
	
	stringFilledStack.pop();
	EXPECT_EQ(stringFilledStack.top(), stringX[8]);
	EXPECT_EQ(stringFilledStack.size(), (size_t)9);
}

/*************    Int test    *************/

// template < class T, class U >
// void	popAndTopTest(T stack, U x, U y)
// {
// 	for (int i = 1; i < 10; i++)
// 	{
// 		x += y;
// 		stack.push(x);
// 	}
// 	EXPECT_EQ(stack.top(), x);
// 	for (int i = 1; i < 5; i++)
// 	{
// 		x -= y;
// 		stack.pop();
// 	}
// 	EXPECT_EQ(stack.top(), x);
// }

// template < class T, class U >
// void	popAndTopStringTest(T stack, U x, U y)
// {
// 	for (int i = 1; i < 10; i++)
// 	{
// 		x += y;
// 		stack.push(x);
// 	}
// 	EXPECT_EQ(stack.top(), x);
// 	for (int i = 1; i < 5; i++)
// 	{
// 		stack.pop();
// 	}
// 	EXPECT_EQ(stack.top(), "Test ! ! ! ! !");
// }

// template < class T, class U >
// void	sizeTest(T stack, U x)
// {
// 	EXPECT_EQ(stack.size(), (unsigned long)0);
// 	stack.push(x);
// 	EXPECT_EQ(stack.size(), (unsigned long)1);
// 	for (int i = 2; i < 6; i++)
// 		stack.push(x);
// 	EXPECT_EQ(stack.size(), (unsigned long)5);
// 	for (int i = 6; i < 21; i++)
// 		stack.push(x);
// 	EXPECT_EQ(stack.size(), (unsigned long)20);
// 	for (int i = 21; i < 101; i++)
// 		stack.push(x);
// 	EXPECT_EQ(stack.size(), (unsigned long)100);
// 	for (int i = 1; i < 101; i++)
// 		stack.pop();
// 	EXPECT_EQ(stack.size(), (unsigned long)0);
// }

// template < class T, class U >
// void	emptyTest(T stack, U x)
// {
// 	EXPECT_EQ(stack.empty(), true);
// 	for (int i = 1; i < 101; i++)
// 		stack.push(x);
// 	EXPECT_EQ(stack.empty(), false);
// 	for (int i = 1; i < 101; i++)
// 		stack.pop();
// 	EXPECT_EQ(stack.empty(), true);
// 	stack.push(x);
// 	EXPECT_EQ(stack.empty(), false);
// }

// template < class T, class U >
// void	constructorTest(T stack, U x)
// {
// 	stack.push(x);
// 	T	copy(stack);
// 	EXPECT_EQ(copy.top(), x);
// 	EXPECT_EQ(copy.size(), (unsigned long)1);
// 	EXPECT_EQ(copy.empty(), false);
// }

// template < class T, class U >
// void	operatorEqualTest(T stack, U x)
// {
// 	for (int i = 0; i < 30; i++)
// 		stack.push(x);
// 	T	copy(stack);
// 	EXPECT_EQ(stack == stack, true);
// 	EXPECT_EQ(stack == copy, true);
// 	copy.push(x);
// 	EXPECT_EQ(stack == copy, false);
// }

// template < class T, class U >
// void	operatorNotEqualTest(T stack, U x)
// {
// 	for (int i = 0; i < 30; i++)
// 		stack.push(x);
// 	T	copy(stack);
// 	EXPECT_EQ(stack != stack, false);
// 	EXPECT_EQ(stack != copy, false);
// 	copy.push(x);
// 	EXPECT_EQ(stack != copy, true);
// }

// template < class T, class U >
// void	operatorSupEqualTest(T stack, U x)
// {
// 	for (int i = 0; i < 30; i++)
// 		stack.push(x);
// 	T	copy(stack);
// 	EXPECT_EQ(stack >= stack, true);
// 	EXPECT_EQ(stack >= copy, true);
// 	copy.push(x);
// 	EXPECT_EQ(stack >= copy, false);
// }

// template < class T, class U >
// void	operatorSupTest(T stack, U x)
// {
// 	for (int i = 0; i < 30; i++)
// 		stack.push(x);
// 	T	copy(stack);
// 	EXPECT_EQ(stack > stack, false);
// 	EXPECT_EQ(stack > copy, false);
// 	copy.push(x);
// 	EXPECT_EQ(stack > copy, false);
// }

// template < class T, class U >
// void	operatorInfEqualTest(T stack, U x)
// {
// 	for (int i = 0; i < 30; i++)
// 		stack.push(x);
// 	T	copy(stack);
// 	EXPECT_EQ(stack <= stack, true);
// 	EXPECT_EQ(stack <= copy, true);
// 	copy.push(x);
// 	EXPECT_EQ(stack <= copy, true);
// }

// template < class T, class U >
// void	operatorInfTest(T stack, U x)
// {
// 	for (int i = 0; i < 30; i++)
// 		stack.push(x);
// 	T	copy(stack);
// 	EXPECT_EQ(stack < stack, false);
// 	EXPECT_EQ(stack < copy, false);
// 	copy.push(x);
// 	EXPECT_EQ(stack < copy, true);
// }

// /*************  Run test   *************/

// template < class T >
// void	runIntTests(T &stack)
// {
// 	pushAndTopTest(stack, 0, 1);
// 	popAndTopTest(stack, 0, 1);
// 	sizeTest(stack, 2);
// 	emptyTest(stack, 3);
// 	constructorTest(stack, 4);
// 	operatorEqualTest(stack, 5);
// 	operatorNotEqualTest(stack, 6);
// 	operatorSupEqualTest(stack, 7);
// 	operatorSupTest(stack, 8);
// 	operatorInfEqualTest(stack, 9);
// 	operatorInfTest(stack, 10);
// }

// template < class T >
// void	runFloatTests(T &stack)
// {
// 	pushAndTopTest(stack, 0.0f, 0.5f);
// 	popAndTopTest(stack, 0.001f, 1.1f);
// 	sizeTest(stack, 2.0f);
// 	emptyTest(stack, 3.000f);
// 	constructorTest(stack, 4.0432f);
// 	operatorEqualTest(stack, 5.0020f);
// 	operatorNotEqualTest(stack, 6.322f);
// 	operatorSupEqualTest(stack, 7.002135f);
// 	operatorSupTest(stack, 8.0f);
// 	operatorInfEqualTest(stack, 9.555f);
// 	operatorInfTest(stack, 10.1f);
// }

// template < class T >
// void	runDoubleTests(T &stack)
// {
// 	pushAndTopTest(stack, 1.0001, 0.0001);
// 	popAndTopTest(stack, 2.00034, 3.3425);
// 	sizeTest(stack, 3.452);
// 	emptyTest(stack, 4.454);
// 	constructorTest(stack, 5.42131);
// 	operatorEqualTest(stack, 6.655342);
// 	operatorNotEqualTest(stack, 7.2342);
// 	operatorSupEqualTest(stack, 8.54);
// 	operatorSupTest(stack, 9.0);
// 	operatorInfEqualTest(stack, 10.234451);
// 	operatorInfTest(stack, 11.01);
// }

// template < class T >
// void	runStringTests(T &stack)
// {
// 	std::string testX = "Test";
// 	std::string testY = " !";

// 	pushAndTopTest(stack, testX, testY);
// 	popAndTopStringTest(stack, testX, testY);
// 	sizeTest(stack, testX);
// 	emptyTest(stack, testX);
// 	constructorTest(stack, testX);
// 	operatorEqualTest(stack, testX);
// 	operatorNotEqualTest(stack, testX);
// 	operatorSupEqualTest(stack, testX);
// 	operatorSupTest(stack, testX);
// 	operatorInfEqualTest(stack, testX);
// 	operatorInfTest(stack, testX);
// }