#include "mainTests.hpp"

template < class T >
void	insertTest(T map)
{
	map.insert(ft::pair<int, int>(1, 1));
	EXPECT_EQ(map[1], 1);
	map.insert(ft::pair<int, int>(2, 2));
	EXPECT_EQ(map[2], 2);
	map.insert(ft::pair<int, int>(3, 3));
	EXPECT_EQ(map[3], 3);
}

template < class T >
void	sizeTest(T map)
{
	EXPECT_EQ(map.size(), (unsigned long)0);
	for (int i = 0; i < 10; i++)
		map.insert(ft::pair<int, int>(i, i));
	EXPECT_EQ(map.size(), (unsigned long)10);
}

/*****************************************************************/
/*       				     RUN TEST           			     */
/*****************************************************************/

template < class T >
void	runIntIntTests(T &map)
{
	insertTest(map);
	sizeTest(map);
}

// TEST(Map, StdMap)
// {
// 	std::cout << std::endl << ORANGE_B;
// 	std::cout << "                                      ";
// 	std::cout << "          [ STD::MAP ] " << RESET << std::endl;

// 	std::map<int,int> intIntMap;
// 	runIntIntTests(intIntMap);
// }

// template < class T, class U >
// void	debugTest(T &map, U x)
// {
// 	std::cout << " >>>> DEBUG TEST <<<< " << std::endl;
// 	map.push_back(x);
// 	EXPECT_EQ(map.back(), x);
// 	EXPECT_EQ(map.front(), x);
// 	x++;
// 	map.insert(x);
// 	EXPECT_EQ(map.back(), x);
// 	EXPECT_EQ(map.front(), x - 1);
// }

TEST(Map, FtMap)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "           [ FT::MAP ] " << RESET << std::endl;

	ft::map<int,int> intIntMap;
	// debugTest(intVector, 1);
	runIntIntTests(intIntMap);
}
