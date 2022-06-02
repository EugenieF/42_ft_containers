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

template < class T >
void	debugTest(T &map)
{
	std::cout << " >>>> DEBUG TEST <<<< " << std::endl << std::endl;
	map.insert(ft::pair<int, int>(1, 1));
	EXPECT_EQ(map[1], 1);
	// std::cout << " map[1] = " << map[1] << std::endl << std::endl;
	map.insert(ft::pair<int, int>(2, 2));
	EXPECT_EQ(map[2], 2);
	// std::cout << " map[2] = " << map[2] << std::endl << std::endl;
	map.insert(ft::pair<int, int>(3, 3));
	EXPECT_EQ(map[3], 3);
	// std::cout << " size : " << map.size() << std::endl;
	// std::cout << "map[3] = " << map[3] << std::endl << std::endl;
	// std::cout << " size : " << map.size() << std::endl;
	// std::cout << "END DEBUG" << std::endl;
}

TEST(Map, FtMap)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "           [ FT::MAP ] " << RESET << std::endl;

	ft::map<int, int> intIntMap;
	debugTest(intIntMap);
	// runIntIntTests(intIntMap);
}
