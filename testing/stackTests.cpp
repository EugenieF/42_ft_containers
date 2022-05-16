#include "gtest/gtest.h"
#include "mainTests.hpp"
#include "../containers/main.hpp"

template < class T >
void	pushAndTopTest(T &stack)
{
	for (int i = 1; i < 6; i++)
	{
		stack.push(i);
		EXPECT_EQ(stack.top(), i);
	}
}

template < class T >
void	popAndTopTest(T &stack)
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
void	emptyTest(T &stack)
{
	EXPECT_EQ(stack.empty(), false);
	for (int i = 1; i < 101; i++)
		stack.pop();
	EXPECT_EQ(stack.empty(), true);
	stack.push(1);
	EXPECT_EQ(stack.empty(), false);
}


template < class T >
void	constructorTest(T &stack)
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

template < class T >
void	runTests(T &stack)
{
	pushAndTopTest(stack);
	popAndTopTest(stack);
	sizeTest(stack);
	emptyTest(stack);
	constructorTest(stack);
	operatorEqualTest(stack);
	operatorNotEqualTest(stack);
	operatorSupEqualTest(stack);
	operatorSupTest(stack);
	operatorInfEqualTest(stack);
	operatorInfTest(stack);
}

TEST(StackInt, StdStackInt)
{
	std::cout << std::endl << ORANGE_B << "\t\t\t\t\t\t  [ STD::STACK ] " << RESET << std::endl;
	std::stack<int> stack;
	runTests(stack);
}

TEST(FtStackInt, FtStackInt)
{
	std::cout << std::endl << BLUE_B << "\t\t\t\t\t\t   [ FT::STACK ] " << RESET << std::endl;
	ft::stack<int> stack;
	runTests(stack);
}
