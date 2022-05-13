#include "gtest/gtest.h"
#include <iostream>
#include <vector>

TEST(Vector, InitVector)
{
	std::vector<int> vector;
	vector.push_back(1);
	EXPECT_EQ(vector.size(), 1);
}
