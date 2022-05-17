#include "mainTests.hpp"

template < class T >
void	insertTest(T &map)
{
	map.insert(std::pair<int, int>(1, 1));
	EXPECT_EQ(map[1], 1);
	map.insert(std::pair<int, int>(2, 2));
	EXPECT_EQ(map[2], 2);
	map.insert(std::pair<int, int>(3, 3));
	EXPECT_EQ(map[3], 3);
}

template < class T >
void	sizeTest(T &map)
{
	EXPECT_EQ(map.size(), (unsigned long)3);
	for (int i = 4; i < 11; i++)
		map.insert(std::pair<int, int>(i, i));
	EXPECT_EQ(map.size(), (unsigned long)10);
}

template < class T >
void	runTests(T &map)
{
	insertTest(map);
	sizeTest(map);
}

TEST(MapInt, StdMapInt)
{
	std::cout << std::endl << ORANGE_B << "\t\t\t\t\t\t    [ STD::MAP ] " << RESET << std::endl;
	std::map<int, int> map;
	runTests(map);
}

TEST(MapInt, FtMapInt)
{
	std::cout << std::endl << BLUE_B << "\t\t\t\t\t\t     [ FT::MAP ] " << RESET << std::endl;
	// ft::map<int, int> map;
	// runTests(map);
}
