#include "gtest/gtest.h"
#include "../containers/main.hpp"
#include <vector>

TEST(VectorInt, InitVector)
{
	std::cout << std::endl << BLUE_B << "   TEST VECTOR   " << RESET << std::endl;
	std::vector<int> vector;
	vector.push_back(1);
	EXPECT_EQ(vector[0], 1);
	EXPECT_EQ(vector.size(), (unsigned long)1);
	vector.push_back(2);
	EXPECT_EQ(vector[1], 2);
	EXPECT_EQ(vector.size(), (unsigned long)2);

}
