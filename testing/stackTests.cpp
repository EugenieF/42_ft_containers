#include "gtest/gtest.h"
#include "../containers/main.hpp"
#include <stack>

TEST(StackInt, InitStack)
{
	std::cout << std::endl << BLUE_B << "   TEST STACK   " << RESET << std::endl;
	std::stack<int> stack;
	stack.push(1);
	EXPECT_EQ(stack.top(), 1);
	EXPECT_EQ(stack.size(), (unsigned long)1);
	stack.push(2);
	EXPECT_EQ(stack.top(), 2);
	EXPECT_EQ(stack.size(), (unsigned long)2);

}
