#include "mainTests.hpp"

/*****************************************************************/
/*       				     RUN TEST           			     */
/*****************************************************************/

TEST_F(stdMapTest, initSizeStack)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                      ";
	std::cout << "          [ STD::MAP ] " << RESET << std::endl;

	EXPECT_EQ(intIntEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intIntFilledMap.size(), (unsigned long)10);

	EXPECT_EQ(intFloatEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intFloatFilledMap.size(), (unsigned long)10);

	EXPECT_EQ(intDoubleEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intDoubleFilledMap.size(), (unsigned long)10);

	EXPECT_EQ(intStringEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intStringFilledMap.size(), (unsigned long)10);
}

TEST_F(stdMapTest, insertInEmptyMap)
{
	for (int i = 0; i < 10; i++)
	{
		intIntEmptyMap.insert(std::pair<int, int>(intX[i], intX[i]));
		EXPECT_EQ(intIntEmptyMap[intX[i]], intX[i]);

		intFloatEmptyMap.insert(std::pair<int, float>(intX[i], floatX[i]));
		EXPECT_EQ(intFloatEmptyMap[intX[i]], floatX[i]);

		intDoubleEmptyMap.insert(std::pair<int, double>(intX[i], doubleX[i]));
		EXPECT_EQ(intDoubleEmptyMap[intX[i]], doubleX[i]);

		intStringEmptyMap.insert(std::pair<int, std::string>(intX[i], stringX[i]));
		EXPECT_EQ(intStringEmptyMap[intX[i]], stringX[i]);
	}
}

TEST_F(ftMapTest, initSizeStack)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "           [ FT::MAP ] " << RESET << std::endl;

	EXPECT_EQ(intIntEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intIntFilledMap.size(), (unsigned long)10);

	EXPECT_EQ(intFloatEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intFloatFilledMap.size(), (unsigned long)10);

	EXPECT_EQ(intDoubleEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intDoubleFilledMap.size(), (unsigned long)10);

	EXPECT_EQ(intStringEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intStringFilledMap.size(), (unsigned long)10);
}

TEST_F(ftMapTest, insertInEmptyMap)
{
	for (int i = 0; i < 10; i++)
	{
		intIntEmptyMap.insert(ft::pair<int, int>(intX[i], intX[i]));
		EXPECT_EQ(intIntEmptyMap[intX[i]], intX[i]);

		intFloatEmptyMap.insert(ft::pair<int, float>(intX[i], floatX[i]));
		EXPECT_EQ(intFloatEmptyMap[intX[i]], floatX[i]);

		intDoubleEmptyMap.insert(ft::pair<int, double>(intX[i], doubleX[i]));
		EXPECT_EQ(intDoubleEmptyMap[intX[i]], doubleX[i]);

		intStringEmptyMap.insert(ft::pair<int, std::string>(intX[i], stringX[i]));
		EXPECT_EQ(intStringEmptyMap[intX[i]], stringX[i]);
	}
}

// template < class T >
// void	debugTest(T &map)
// {
// 	std::cout << " >>>> DEBUG TEST <<<< " << std::endl << std::endl;
// 	map.insert(ft::pair<int, int>(1, 1));
// 	EXPECT_EQ(map[1], 1);
// 	std::cout << " map[1] = " << map[1] << std::endl << std::endl;
// 	map.insert(ft::pair<int, int>(2, 2));
// 	EXPECT_EQ(map[2], 2);
// 	std::cout << " map[2] = " << map[2] << std::endl << std::endl;
// 	map.insert(ft::pair<int, int>(3, 3));
// 	EXPECT_EQ(map[3], 3);
// 	std::cout << "map[3] = " << map[3] << std::endl << std::endl;
// 	map.insert(ft::pair<int, int>(4, 4));
// 	EXPECT_EQ(map[4], 4);
// 	std::cout << "map[4] = " << map[4] << std::endl << std::endl;
// 	map.erase(2);
// 	map.print();
// 	std::cout << " size : " << map.size() << std::endl;
// 	std::cout << " >>>> END DEBUG <<<<" << std::endl;
// }
