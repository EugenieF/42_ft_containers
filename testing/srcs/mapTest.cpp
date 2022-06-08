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

TEST_F(stdMapTest, isEmptyMap)
{
	EXPECT_EQ(intIntEmptyMap.empty(), true);
	EXPECT_EQ(intIntFilledMap.empty(), false);

	EXPECT_EQ(intFloatEmptyMap.empty(), true);
	EXPECT_EQ(intFloatFilledMap.empty(), false);

	EXPECT_EQ(intDoubleEmptyMap.empty(), true);
	EXPECT_EQ(intDoubleFilledMap.empty(), false);

	EXPECT_EQ(intStringEmptyMap.empty(), true);
	EXPECT_EQ(intStringFilledMap.empty(), false);
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

TEST_F(stdMapTest, insertExistingKeyInFilledMap)
{
	size_t	expectedSize = (size_t)10;

	for (int i = 0; i < 10; i++)
	{
		intIntFilledMap.insert(std::pair<int, int>(intX[i], 100));
		EXPECT_EQ(intIntFilledMap[intX[i]], intX[i]);

		intFloatFilledMap.insert(std::pair<int, float>(intX[i], 100.5f));
		EXPECT_EQ(intFloatFilledMap[intX[i]], floatX[i]);

		intDoubleFilledMap.insert(std::pair<int, double>(intX[i], 100.00));
		EXPECT_EQ(intDoubleFilledMap[intX[i]], doubleX[i]);

		intStringFilledMap.insert(std::pair<int, std::string>(intX[i], "cent"));
		EXPECT_EQ(intStringFilledMap[intX[i]], stringX[i]);
	}
	EXPECT_EQ(intIntFilledMap.size(), expectedSize);
	EXPECT_EQ(intFloatFilledMap.size(), expectedSize);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedSize);
	EXPECT_EQ(intStringFilledMap.size(), expectedSize);
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

TEST_F(stdMapTest, eraseOneInEmptyMap)
{
	size_t	ret;
	size_t	expectedRet = (size_t)0;

	ret = intIntEmptyMap.erase(intX[0]);	
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intIntEmptyMap.empty(), true);

	ret = intFloatEmptyMap.erase(intX[0]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intFloatEmptyMap.empty(), true);

	ret = intDoubleEmptyMap.erase(intX[0]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intDoubleEmptyMap.empty(), true);

	ret = intStringEmptyMap.erase(intX[0]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intStringEmptyMap.empty(), true);
}

TEST_F(stdMapTest, insertRangeInEmptyMap)
{
	size_t	expectedSize = (size_t)10;

	intIntEmptyMap.insert(intIntFilledMap.begin(), intIntFilledMap.end());
	intFloatEmptyMap.insert(intFloatFilledMap.begin(), intFloatFilledMap.end());
	intDoubleEmptyMap.insert(intDoubleFilledMap.begin(), intDoubleFilledMap.end());
	intStringEmptyMap.insert(intStringFilledMap.begin(), intStringFilledMap.end());

	EXPECT_EQ(intIntFilledMap.size(), expectedSize);
	EXPECT_EQ(intFloatFilledMap.size(), expectedSize);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedSize);
	EXPECT_EQ(intStringFilledMap.size(), expectedSize);

	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(intIntEmptyMap[intX[i]], intX[i]);
		EXPECT_EQ(intFloatEmptyMap[intX[i]], floatX[i]);
		EXPECT_EQ(intDoubleEmptyMap[intX[i]], doubleX[i]);
		EXPECT_EQ(intStringEmptyMap[intX[i]], stringX[i]);
	}
}

TEST_F(stdMapTest, insertRangeInFilledMap)
{
	size_t	expectedSize = (size_t)15;

	intIntFilledMap.insert(intIntToInsertMap.begin(), intIntToInsertMap.end());
	intFloatFilledMap.insert(intFloatToInsertMap.begin(), intFloatToInsertMap.end());
	intDoubleFilledMap.insert(intDoubleToInsertMap.begin(), intDoubleToInsertMap.end());
	intStringFilledMap.insert(intStringToInsertMap.begin(), intStringToInsertMap.end());

	EXPECT_EQ(intIntFilledMap.size(), expectedSize);
	EXPECT_EQ(intFloatFilledMap.size(), expectedSize);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedSize);
	EXPECT_EQ(intStringFilledMap.size(), expectedSize);

	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(intIntFilledMap[intX[i]], intX[i]);
		EXPECT_EQ(intFloatFilledMap[intX[i]], floatX[i]);
		EXPECT_EQ(intDoubleFilledMap[intX[i]], doubleX[i]);
		EXPECT_EQ(intStringFilledMap[intX[i]], stringX[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(intIntFilledMap[intY[i]], intY[i]);
		EXPECT_EQ(intFloatFilledMap[intY[i]], floatY[i]);
		EXPECT_EQ(intDoubleFilledMap[intY[i]], doubleY[i]);
		EXPECT_EQ(intStringFilledMap[intY[i]], stringY[i]);
	}
}

TEST_F(stdMapTest, eraseRangeInFilledMap)
{
	size_t	expectedSize = (size_t)0;

	intIntFilledMap.erase(intIntFilledMap.begin(), intIntFilledMap.end());
	intFloatFilledMap.erase(intFloatFilledMap.begin(), intFloatFilledMap.end());
	intDoubleFilledMap.erase(intDoubleFilledMap.begin(), intDoubleFilledMap.end());
	intStringFilledMap.erase(intStringFilledMap.begin(), intStringFilledMap.end());

	EXPECT_EQ(intIntFilledMap.size(), expectedSize);
	EXPECT_EQ(intFloatFilledMap.size(), expectedSize);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedSize);
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

TEST_F(ftMapTest, isEmptyMap)
{
	EXPECT_EQ(intIntEmptyMap.empty(), true);
	EXPECT_EQ(intIntFilledMap.empty(), false);

	EXPECT_EQ(intFloatEmptyMap.empty(), true);
	EXPECT_EQ(intFloatFilledMap.empty(), false);

	EXPECT_EQ(intDoubleEmptyMap.empty(), true);
	EXPECT_EQ(intDoubleFilledMap.empty(), false);

	EXPECT_EQ(intStringEmptyMap.empty(), true);
	EXPECT_EQ(intStringFilledMap.empty(), false);
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

TEST_F(ftMapTest, insertExistingKeyInFilledMap)
{
	size_t	expectedSize = (size_t)10;

	for (int i = 0; i < 10; i++)
	{
		intIntFilledMap.insert(ft::pair<int, int>(intX[i], 100));
		EXPECT_EQ(intIntFilledMap[intX[i]], intX[i]);

		intFloatFilledMap.insert(ft::pair<int, float>(intX[i], 100.5f));
		EXPECT_EQ(intFloatFilledMap[intX[i]], floatX[i]);

		intDoubleFilledMap.insert(ft::pair<int, double>(intX[i], 100.00));
		EXPECT_EQ(intDoubleFilledMap[intX[i]], doubleX[i]);

		intStringFilledMap.insert(ft::pair<int, std::string>(intX[i], "cent"));
		EXPECT_EQ(intStringFilledMap[intX[i]], stringX[i]);
	}
	EXPECT_EQ(intIntFilledMap.size(), expectedSize);
	EXPECT_EQ(intFloatFilledMap.size(), expectedSize);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedSize);
	EXPECT_EQ(intStringFilledMap.size(), expectedSize);
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

TEST_F(ftMapTest, eraseOneInEmptyMap)
{
	size_t	ret;
	size_t	expectedRet = (size_t)0;

	ret = intIntEmptyMap.erase(intX[0]);	
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intIntEmptyMap.empty(), true);

	ret = intFloatEmptyMap.erase(intX[0]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intFloatEmptyMap.empty(), true);

	ret = intDoubleEmptyMap.erase(intX[0]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intDoubleEmptyMap.empty(), true);

	ret = intStringEmptyMap.erase(intX[0]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intStringEmptyMap.empty(), true);
}

TEST_F(ftMapTest, insertRangeInEmptyMap)
{
	size_t	expectedSize = (size_t)10;

	intIntEmptyMap.insert(intIntFilledMap.begin(), intIntFilledMap.end());
	intFloatEmptyMap.insert(intFloatFilledMap.begin(), intFloatFilledMap.end());
	intDoubleEmptyMap.insert(intDoubleFilledMap.begin(), intDoubleFilledMap.end());
	intStringEmptyMap.insert(intStringFilledMap.begin(), intStringFilledMap.end());

	EXPECT_EQ(intIntFilledMap.size(), expectedSize);
	EXPECT_EQ(intFloatFilledMap.size(), expectedSize);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedSize);
	EXPECT_EQ(intStringFilledMap.size(), expectedSize);

	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(intIntEmptyMap[intX[i]], intX[i]);
		EXPECT_EQ(intFloatEmptyMap[intX[i]], floatX[i]);
		EXPECT_EQ(intDoubleEmptyMap[intX[i]], doubleX[i]);
		EXPECT_EQ(intStringEmptyMap[intX[i]], stringX[i]);
	}
}

TEST_F(ftMapTest, insertRangeInFilledMap)
{
	size_t	expectedSize = (size_t)15;

	intIntFilledMap.insert(intIntToInsertMap.begin(), intIntToInsertMap.end());
	intFloatFilledMap.insert(intFloatToInsertMap.begin(), intFloatToInsertMap.end());
	intDoubleFilledMap.insert(intDoubleToInsertMap.begin(), intDoubleToInsertMap.end());
	intStringFilledMap.insert(intStringToInsertMap.begin(), intStringToInsertMap.end());

	EXPECT_EQ(intIntFilledMap.size(), expectedSize);
	EXPECT_EQ(intFloatFilledMap.size(), expectedSize);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedSize);
	EXPECT_EQ(intStringFilledMap.size(), expectedSize);

	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(intIntFilledMap[intX[i]], intX[i]);
		EXPECT_EQ(intFloatFilledMap[intX[i]], floatX[i]);
		EXPECT_EQ(intDoubleFilledMap[intX[i]], doubleX[i]);
		EXPECT_EQ(intStringFilledMap[intX[i]], stringX[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(intIntFilledMap[intY[i]], intY[i]);
		EXPECT_EQ(intFloatFilledMap[intY[i]], floatY[i]);
		EXPECT_EQ(intDoubleFilledMap[intY[i]], doubleY[i]);
		EXPECT_EQ(intStringFilledMap[intY[i]], stringY[i]);
	}
}

TEST_F(ftMapTest, eraseRangeInFilledMap)
{
	size_t	expectedSize = (size_t)0;

	intIntFilledMap.erase(intIntFilledMap.begin(), intIntFilledMap.end());
	intFloatFilledMap.erase(intFloatFilledMap.begin(), intFloatFilledMap.end());
	intDoubleFilledMap.erase(intDoubleFilledMap.begin(), intDoubleFilledMap.end());
	intStringFilledMap.erase(intStringFilledMap.begin(), intStringFilledMap.end());

	EXPECT_EQ(intIntFilledMap.size(), expectedSize);
	EXPECT_EQ(intFloatFilledMap.size(), expectedSize);
	EXPECT_EQ(intDoubleFilledMap.size(), expectedSize);
	EXPECT_EQ(intStringFilledMap.size(), expectedSize);
}

// TEST_F(ftMapTest, eraseRangeInEmptyMap)
// {
// 	// size_t	expectedSize = (size_t)0;

// 	intIntEmptyMap.erase(intIntFilledMap.begin(), intIntFilledMap.end());
// }
