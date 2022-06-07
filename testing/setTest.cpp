#include "mainTests.hpp"

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
