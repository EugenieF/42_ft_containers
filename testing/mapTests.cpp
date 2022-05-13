#include "gtest/gtest.h"
#include "../containers/main.hpp"
#include <map>

TEST(MapIntInt, InitMap)
{
	std::cout << std::endl << BLUE_B << "   TEST MAP    " << RESET << std::endl;
	std::map<int, int>	map;
	map.insert(std::pair<int, int>(1, 1));
	EXPECT_EQ(map[1], 1);
	EXPECT_EQ(map.size(), (unsigned long)1);
	map.insert(std::pair<int, int>(2, 2));
	EXPECT_EQ(map[2], 2);
	EXPECT_EQ(map.size(), (unsigned long)2);

}
