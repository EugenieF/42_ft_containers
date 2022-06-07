#include "mainTests.hpp"

/*****************************************************************/
/*       			     RUN STD::MAP TEST      			     */
/*****************************************************************/

TEST_F(stdMapTest, initSizeMap)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                        ";
	std::cout << "          [ STD::MAP ] " << RESET << std::endl;

	size_t	expectedEmptyMapSize = (size_t)0;
	size_t	expectedFilledMapSize = (size_t)10;

	EXPECT_EQ(intIntEmptyMap.size(), expectedEmptyMapSize);
	EXPECT_EQ(intIntFilledMap.size(), expectedFilledMapSize);

	EXPECT_EQ(intFloatEmptyMap.size(), expectedEmptyMapSize);
	EXPECT_EQ(intFloatFilledMap.size(), expectedFilledMapSize);

	EXPECT_EQ(intDoubleEmptyMap.size(), expectedEmptyMapSize);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedFilledMapSize);

	EXPECT_EQ(intStringEmptyMap.size(), expectedEmptyMapSize);
	EXPECT_EQ(intStringFilledMap.size(), expectedFilledMapSize);
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

TEST_F(stdMapTest, eraseOneInFilledMap)
{
	size_t	ret;
	size_t	expectedRet = (size_t)1;
	size_t	expectedSize = (size_t)9;


	ret = intIntFilledMap.erase(intX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intIntFilledMap.size(), expectedSize);

	ret = intFloatFilledMap.erase(intX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intFloatFilledMap.size(), expectedSize);

	ret = intDoubleFilledMap.erase(intX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedSize);

	ret = intStringFilledMap.erase(intX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intStringFilledMap.size(), expectedSize);
}

/*****************************************************************/
/*       			      RUN FT::MAP TEST      			     */
/*****************************************************************/

TEST_F(ftMapTest, initSizeMap)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                        ";
	std::cout << "           [ FT::MAP ] " << RESET << std::endl;

	size_t	expectedEmptyMapSize = (size_t)0;
	size_t	expectedFilledMapSize = (size_t)10;

	EXPECT_EQ(intIntEmptyMap.size(), expectedEmptyMapSize);
	EXPECT_EQ(intIntFilledMap.size(), expectedFilledMapSize);

	EXPECT_EQ(intFloatEmptyMap.size(), expectedEmptyMapSize);
	EXPECT_EQ(intFloatFilledMap.size(), expectedFilledMapSize);

	EXPECT_EQ(intDoubleEmptyMap.size(), expectedEmptyMapSize);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedFilledMapSize);

	EXPECT_EQ(intStringEmptyMap.size(), expectedEmptyMapSize);
	EXPECT_EQ(intStringFilledMap.size(), expectedFilledMapSize);
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

TEST_F(ftMapTest, eraseOneInFilledMap)
{
	size_t	ret;
	size_t	expectedRet = (size_t)1;
	size_t	expectedSize = (size_t)9;


	ret = intIntFilledMap.erase(intX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intIntFilledMap.size(), expectedSize);

	ret = intFloatFilledMap.erase(intX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intFloatFilledMap.size(), expectedSize);

	ret = intDoubleFilledMap.erase(intX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedSize);

	ret = intStringFilledMap.erase(intX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intStringFilledMap.size(), expectedSize);
}
