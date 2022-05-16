#include "gtest/gtest.h"
#include "../containers/main.hpp"
#include <stack>

TEST(StackInt, PushStack)
{
	std::cout << std::endl << BLUE_B << "   TEST STACK   " << RESET << std::endl;
	ft::stack<int> stack;
	stack.push(1);
	EXPECT_EQ(stack.top(), 1);
	stack.push(2);
	EXPECT_EQ(stack.top(), 2);
	stack.push(3);
	EXPECT_EQ(stack.top(), 3);
	stack.push(4);
	EXPECT_EQ(stack.top(), 4);
	stack.push(5);
	EXPECT_EQ(stack.top(), 5);
}

TEST(StackInt, SizeStack)
{
	std::cout << std::endl << BLUE_B << "   TEST STACK   " << RESET << std::endl;
	std::stack<int> stack;
	stack.push(1);
	EXPECT_EQ(stack.size(), (unsigned long)1);
	for (int i = 2; i < 6; i++)
		stack.push(i);
	EXPECT_EQ(stack.size(), (unsigned long)5);
	for (int i = 6; i < 21; i++)
		stack.push(i);
	EXPECT_EQ(stack.size(), (unsigned long)20);
}
