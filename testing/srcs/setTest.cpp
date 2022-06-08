#include "mainTests.hpp"

/*****************************************************************/
/*       			           TEST      		        	     */
/*****************************************************************/



/*****************************************************************/
/*       			     RUN STD::SET TEST      			     */
/*****************************************************************/

TEST_F(stdSetTest, initSizeSet)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                        ";
	std::cout << "          [ STD::SET ] " << RESET << std::endl;

	size_t	expectedEmptySetSize = (size_t)0;
	size_t	expectedFilledSetSize = (size_t)10;

	EXPECT_EQ(intEmptySet.size(), expectedEmptySetSize);
	EXPECT_EQ(intFilledSet.size(), expectedFilledSetSize);

	EXPECT_EQ(floatEmptySet.size(), expectedEmptySetSize);
	EXPECT_EQ(floatFilledSet.size(), expectedFilledSetSize);

	EXPECT_EQ(doubleEmptySet.size(), expectedEmptySetSize);
	EXPECT_EQ(doubleFilledSet.size(), expectedFilledSetSize);

	EXPECT_EQ(stringEmptySet.size(), expectedEmptySetSize);
	EXPECT_EQ(stringFilledSet.size(), expectedFilledSetSize);
}

TEST_F(stdSetTest, isEmptySet)
{
	EXPECT_EQ(intEmptySet.empty(), true);
	EXPECT_EQ(intFilledSet.empty(), false);

	EXPECT_EQ(floatEmptySet.empty(), true);
	EXPECT_EQ(floatFilledSet.empty(), false);

	EXPECT_EQ(doubleEmptySet.empty(), true);
	EXPECT_EQ(doubleFilledSet.empty(), false);

	EXPECT_EQ(stringEmptySet.empty(), true);
	EXPECT_EQ(stringFilledSet.empty(), false);
}

TEST_F(stdSetTest, insertInEmptySet)
{
	// typedef typename ft::set<Key, Compare, Allocator>::iterator	iterator;
	size_t	expectedSize = 1;

	for (int i = 0; i < 10; i++, expectedSize++)
	{
		intEmptySet.insert(intX[i]);
		EXPECT_EQ(intEmptySet.size(), expectedSize);

		floatEmptySet.insert(floatX[i]);
		EXPECT_EQ(floatEmptySet.size(), expectedSize);

		doubleEmptySet.insert(doubleX[i]);
		EXPECT_EQ(doubleEmptySet.size(), expectedSize);

		stringEmptySet.insert(stringX[i]);
		EXPECT_EQ(stringEmptySet.size(), expectedSize);
	}
}

TEST_F(stdSetTest, insertExistingKeyInFilledSet)
{
	size_t	expectedSize = (size_t)10;

	for (int i = 0; i < 10; i++)
	{
		intFilledSet.insert(intX[i]);
		EXPECT_EQ(intFilledSet.size(), expectedSize);

		floatFilledSet.insert(floatX[i]);
		EXPECT_EQ(floatFilledSet.size(), expectedSize);

		doubleFilledSet.insert(doubleX[i]);
		EXPECT_EQ(doubleFilledSet.size(), expectedSize);

		stringFilledSet.insert(stringX[i]);
		EXPECT_EQ(stringFilledSet.size(), expectedSize);
	}
}

TEST_F(stdSetTest, eraseOneInFilledSet)
{
	size_t	ret;
	size_t	expectedRet = (size_t)1;
	size_t	expectedSize = (size_t)9;


	ret = intFilledSet.erase(intX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intFilledSet.size(), expectedSize);

	ret = floatFilledSet.erase(floatX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(floatFilledSet.size(), expectedSize);

	ret = doubleFilledSet.erase(doubleX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(doubleFilledSet.size(), expectedSize);

	ret = stringFilledSet.erase(stringX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(stringFilledSet.size(), expectedSize);
}

TEST_F(stdSetTest, insertRangeInEmptySet)
{
	size_t	expectedSize = (size_t)10;

	intEmptySet.insert(intFilledSet.begin(), intFilledSet.end());
	floatEmptySet.insert(floatFilledSet.begin(), floatFilledSet.end());
	doubleEmptySet.insert(doubleFilledSet.begin(), doubleFilledSet.end());
	stringEmptySet.insert(stringFilledSet.begin(), stringFilledSet.end());

	EXPECT_EQ(intFilledSet.size(), expectedSize);
	EXPECT_EQ(floatFilledSet.size(), expectedSize);
	EXPECT_EQ(doubleFilledSet.size(), expectedSize);
	EXPECT_EQ(stringFilledSet.size(), expectedSize);
}

TEST_F(stdSetTest, insertRangeInFilledSet)
{
	size_t	expectedSize = (size_t)15;

	intFilledSet.insert(intToInsertSet.begin(), intToInsertSet.end());
	floatFilledSet.insert(floatToInsertSet.begin(), floatToInsertSet.end());
	doubleFilledSet.insert(doubleToInsertSet.begin(), doubleToInsertSet.end());
	stringFilledSet.insert(stringToInsertSet.begin(), stringToInsertSet.end());

	EXPECT_EQ(intFilledSet.size(), expectedSize);
	EXPECT_EQ(floatFilledSet.size(), expectedSize);
	EXPECT_EQ(doubleFilledSet.size(), expectedSize);
	EXPECT_EQ(stringFilledSet.size(), expectedSize);
}

TEST_F(stdSetTest, eraseRangeInFilledSet)
{
	size_t	expectedSize = (size_t)0;

	intFilledSet.erase(intFilledSet.begin(), intFilledSet.end());
	floatFilledSet.erase(floatFilledSet.begin(), floatFilledSet.end());
	doubleFilledSet.erase(doubleFilledSet.begin(), doubleFilledSet.end());
	stringFilledSet.erase(stringFilledSet.begin(), stringFilledSet.end());

	EXPECT_EQ(intFilledSet.size(), expectedSize);
	EXPECT_EQ(floatFilledSet.size(), expectedSize);
	EXPECT_EQ(doubleFilledSet.size(), expectedSize);
	EXPECT_EQ(stringFilledSet.size(), expectedSize);
}

/*****************************************************************/
/*       			      RUN FT::SET TEST      			     */
/*****************************************************************/

TEST_F(ftSetTest, initSizeSet)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                        ";
	std::cout << "           [ FT::SET ] " << RESET << std::endl;

	size_t	expectedEmptySetSize = (size_t)0;
	size_t	expectedFilledSetSize = (size_t)10;

	EXPECT_EQ(intEmptySet.size(), expectedEmptySetSize);
	EXPECT_EQ(intFilledSet.size(), expectedFilledSetSize);

	EXPECT_EQ(floatEmptySet.size(), expectedEmptySetSize);
	EXPECT_EQ(floatFilledSet.size(), expectedFilledSetSize);

	EXPECT_EQ(doubleEmptySet.size(), expectedEmptySetSize);
	EXPECT_EQ(doubleFilledSet.size(), expectedFilledSetSize);

	EXPECT_EQ(stringEmptySet.size(), expectedEmptySetSize);
	EXPECT_EQ(stringFilledSet.size(), expectedFilledSetSize);
}

TEST_F(ftSetTest, isEmptySet)
{
	EXPECT_EQ(intEmptySet.empty(), true);
	EXPECT_EQ(intFilledSet.empty(), false);

	EXPECT_EQ(floatEmptySet.empty(), true);
	EXPECT_EQ(floatFilledSet.empty(), false);

	EXPECT_EQ(doubleEmptySet.empty(), true);
	EXPECT_EQ(doubleFilledSet.empty(), false);

	EXPECT_EQ(stringEmptySet.empty(), true);
	EXPECT_EQ(stringFilledSet.empty(), false);
}

TEST_F(ftSetTest, insertInEmptySet)
{
	size_t	expectedSize = 1;

	for (int i = 0; i < 10; i++, expectedSize++)
	{
		intEmptySet.insert(intX[i]);
		EXPECT_EQ(intEmptySet.size(), expectedSize);

		floatEmptySet.insert(floatX[i]);
		EXPECT_EQ(floatEmptySet.size(), expectedSize);

		doubleEmptySet.insert(doubleX[i]);
		EXPECT_EQ(doubleEmptySet.size(), expectedSize);

		stringEmptySet.insert(stringX[i]);
		EXPECT_EQ(stringEmptySet.size(), expectedSize);
	}
}

TEST_F(ftSetTest, insertExistingKeyInFilledSet)
{
	size_t	expectedSize = (size_t)10;

	for (int i = 0; i < 10; i++)
	{
		intFilledSet.insert(intX[i]);
		EXPECT_EQ(intFilledSet.size(), expectedSize);

		floatFilledSet.insert(floatX[i]);
		EXPECT_EQ(floatFilledSet.size(), expectedSize);

		doubleFilledSet.insert(doubleX[i]);
		EXPECT_EQ(doubleFilledSet.size(), expectedSize);

		stringFilledSet.insert(stringX[i]);
		EXPECT_EQ(stringFilledSet.size(), expectedSize);
	}
}

TEST_F(ftSetTest, eraseOneInFilledSet)
{
	size_t	ret;
	size_t	expectedRet = (size_t)1;
	size_t	expectedSize = (size_t)9;

	ret = intFilledSet.erase(intX[5]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(intFilledSet.size(), expectedSize);

	ret = floatFilledSet.erase(floatX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(floatFilledSet.size(), expectedSize);

	ret = doubleFilledSet.erase(doubleX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(doubleFilledSet.size(), expectedSize);

	// stringFilledSet.print();
	ret = stringFilledSet.erase(stringX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(stringFilledSet.size(), expectedSize);
}

TEST_F(ftSetTest, insertRangeInEmptySet)
{
	size_t	expectedSize = (size_t)10;

	intEmptySet.insert(intFilledSet.begin(), intFilledSet.end());
	floatEmptySet.insert(floatFilledSet.begin(), floatFilledSet.end());
	doubleEmptySet.insert(doubleFilledSet.begin(), doubleFilledSet.end());
	stringEmptySet.insert(stringFilledSet.begin(), stringFilledSet.end());

	EXPECT_EQ(intFilledSet.size(), expectedSize);
	EXPECT_EQ(floatFilledSet.size(), expectedSize);
	EXPECT_EQ(doubleFilledSet.size(), expectedSize);
	EXPECT_EQ(stringFilledSet.size(), expectedSize);
}

TEST_F(ftSetTest, insertRangeInFilledSet)
{
	size_t	expectedSize = (size_t)15;

	intFilledSet.insert(intToInsertSet.begin(), intToInsertSet.end());
	floatFilledSet.insert(floatToInsertSet.begin(), floatToInsertSet.end());
	doubleFilledSet.insert(doubleToInsertSet.begin(), doubleToInsertSet.end());
	stringFilledSet.insert(stringToInsertSet.begin(), stringToInsertSet.end());

	EXPECT_EQ(intFilledSet.size(), expectedSize);
	EXPECT_EQ(floatFilledSet.size(), expectedSize);
	EXPECT_EQ(doubleFilledSet.size(), expectedSize);
	EXPECT_EQ(stringFilledSet.size(), expectedSize);
}

TEST_F(ftSetTest, eraseRangeInFilledSet)
{
	size_t	expectedSize = (size_t)0;

	intFilledSet.erase(intFilledSet.begin(), intFilledSet.end());
	floatFilledSet.erase(floatFilledSet.begin(), floatFilledSet.end());
	doubleFilledSet.erase(doubleFilledSet.begin(), doubleFilledSet.end());
	stringFilledSet.erase(stringFilledSet.begin(), stringFilledSet.end());

	EXPECT_EQ(intFilledSet.size(), expectedSize);
	EXPECT_EQ(floatFilledSet.size(), expectedSize);
	EXPECT_EQ(doubleFilledSet.size(), expectedSize);
	EXPECT_EQ(stringFilledSet.size(), expectedSize);
}
