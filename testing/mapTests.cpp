#include "mainTests.hpp"

/**************************************************************/
/*                         CLASS TEST                         */
/**************************************************************/

class stdMapTest: public ::testing::Test
{
	protected:
		std::map<int, int> intIntEmptyMap;
		std::map<int, int> intIntFilledMap;

		std::map<int, float> intFloatEmptyMap;
		std::map<int, float> intFloatFilledMap;

		std::map<int, double> intDoubleEmptyMap;
		std::map<int, double> intDoubleFilledMap;

		std::map<int, std::string> intStringEmptyMap;
		std::map<int, std::string> intStringFilledMap;

		void	SetUp() override
		{
			int		intX;
			float 	floatX;
			double 	doubleX;

			intX = 0;
			for (int i = 0; i < 10; i++, intX++)
				intIntFilledMap.insert(std::pair<int, int>(intX, intX));

			intX = 0;
			floatX = 0.0f;
			for (int i = 0; i < 10; i++, intX++, floatX += 1.0f)
				intFloatFilledMap.insert(std::pair<int, float>(intX, floatX));

			intX = 0;
			doubleX = 0.00;
			for (int i = 0; i < 10; i++, intX++, doubleX += 1.00)
				intDoubleFilledMap.insert(std::pair<int, double>(intX, doubleX));
		}
};

class ftMapTest: public ::testing::Test
{
	protected:
		ft::map<int, int> intIntEmptyMap;
		ft::map<int, int> intIntFilledMap;

		ft::map<int, float> intFloatEmptyMap;
		ft::map<int, float> intFloatFilledMap;

		ft::map<int, double> intDoubleEmptyMap;
		ft::map<int, double> intDoubleFilledMap;

		ft::map<int, std::string> intStringEmptyMap;
		ft::map<int, std::string> intStringFilledMap;

		void	SetUp() override
		{
			int		intX;
			float 	floatX;
			double 	doubleX;

			intX = 0;
			for (int i = 0; i < 10; i++, intX++)
				intIntFilledMap.insert(ft::pair<int, int>(intX, intX));

			intX = 0;
			floatX = 0.0f;
			for (int i = 0; i < 10; i++, intX++, floatX += 1.0f)
				intFloatFilledMap.insert(ft::pair<int, float>(intX, floatX));

			intX = 0;
			doubleX = 0.00;
			for (int i = 0; i < 10; i++, intX++, doubleX += 1.00)
				intDoubleFilledMap.insert(ft::pair<int, double>(intX, doubleX));
		}
};


/*****************************************************************/
/*       				     RUN TEST           			     */
/*****************************************************************/

TEST_F(stdMapTest, initSizeStack)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "          [ STD::MAP ] " << RESET << std::endl;

	EXPECT_EQ(intIntEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intIntFilledMap.size(), (unsigned long)10);

	EXPECT_EQ(intFloatEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intFloatFilledMap.size(), (unsigned long)10);

	EXPECT_EQ(intDoubleEmptyMap.size(), (unsigned long)0);
	EXPECT_EQ(intDoubleFilledMap.size(), (unsigned long)10);
}

TEST_F(stdMapTest, insertInEmptyMap)
{
	int		intX;
	float 	floatX;
	double 	doubleX;

	intX = 0;
	for (int i = 0; i < 10; i++, intX++)
	{
		intIntEmptyMap.insert(std::pair<int, int>(intX, intX));
		EXPECT_EQ(intIntEmptyMap[intX], intX);
	}

	intX = 0;
	floatX = 0.0f;
	for (int i = 0; i < 10; i++, intX++, floatX += 1.0f)
	{
		intFloatEmptyMap.insert(std::pair<int, float>(intX, floatX));
		EXPECT_EQ(intFloatEmptyMap[intX], floatX);
	}

	intX = 0;
	doubleX = 0.00;
	for (int i = 0; i < 10; i++, intX++, doubleX += 1.00)
	{
		intDoubleEmptyMap.insert(std::pair<int, double>(intX, doubleX));
		EXPECT_EQ(intDoubleEmptyMap[intX], doubleX);
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
}

TEST_F(ftMapTest, insertInEmptyMap)
{
	int		intX;
	float 	floatX;
	double 	doubleX;

	intX = 0;
	for (int i = 0; i < 10; i++, intX++)
	{
		intIntEmptyMap.insert(ft::pair<int, int>(intX, intX));
		EXPECT_EQ(intIntEmptyMap[intX], intX);
	}

	intX = 0;
	floatX = 0.0f;
	for (int i = 0; i < 10; i++, intX++, floatX += 1.0f)
	{
		intFloatEmptyMap.insert(ft::pair<int, float>(intX, floatX));
		EXPECT_EQ(intFloatEmptyMap[intX], floatX);
	}

	intX = 0;
	doubleX = 0.00;
	for (int i = 0; i < 10; i++, intX++, doubleX += 1.00)
	{
		intDoubleEmptyMap.insert(ft::pair<int, double>(intX, doubleX));
		EXPECT_EQ(intDoubleEmptyMap[intX], doubleX);
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
