#include "mainTests.hpp"

/*****************************************************************/
/*       			           TEST      		        	     */
/*****************************************************************/

template <typename T>
void	initSizeSet(T emptySet, T filledSet, T toInsertSet)
{
	EXPECT_EQ(emptySet.size(), (size_t)0);
	EXPECT_EQ(filledSet.size(), (size_t)10);
	EXPECT_EQ(toInsertSet.size(), (size_t)5);
}

template <typename T>
void	isEmptySet(T emptySet, T filledSet, T toInsertSet)
{
	EXPECT_EQ(emptySet.empty(), true);
	EXPECT_EQ(filledSet.empty(), false);
	EXPECT_EQ(toInsertSet.empty(), false);
}

template <typename T, typename U>
void	insertInEmptySet(T emptySet, U varX)
{
	size_t	expectedSize = 1;

	for (int i = 0; i < 10; i++, expectedSize++)
	{
		emptySet.insert(varX[i]);
		EXPECT_EQ(emptySet.size(), expectedSize);
	}
}

template <typename T, typename U>
void	insertExistingKeyInFilledSet(T filledSet, U varX)
{
	size_t	expectedSize = (size_t)10;

	for (int i = 0; i < 10; i++)
	{
		filledSet.insert(varX[i]);
		EXPECT_EQ(filledSet.size(), expectedSize);
	}
}

template <typename T, typename U>
void	eraseOneInFilledSet(T filledSet, U varX)
{
	size_t	ret;
	size_t	expectedRet = (size_t)1;
	size_t	expectedSize = (size_t)9;

	ret = filledSet.erase(varX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(filledSet.size(), expectedSize);
}

template <typename T, typename U>
void	eraseOneInEmptySet(T emptySet, U varX)
{
	size_t	ret;
	size_t	expectedRet = (size_t)0;

	ret = emptySet.erase(varX[0]);	
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(emptySet.empty(), true);
}

template <typename T>
void	insertRangeInEmptySet(T emptySet, T filledSet)
{
	size_t	expectedSize = (size_t)10;

	emptySet.insert(filledSet.begin(), filledSet.end());
	EXPECT_EQ(filledSet.size(), expectedSize);
}

template <typename T>
void	insertRangeInFilledSet(T filledSet, T toInsertSet)
{
	size_t	expectedSize = (size_t)15;

	filledSet.insert(toInsertSet.begin(), toInsertSet.end());
	EXPECT_EQ(filledSet.size(), expectedSize);
}

template <typename T>
void	eraseRangeInFilledSet(T filledSet)
{
	size_t	expectedSize = (size_t)0;

	filledSet.erase(filledSet.begin(), filledSet.end());
	EXPECT_EQ(filledSet.size(), expectedSize);
}

template <typename T>
void	clearSet(T emptySet, T filledSet)
{
	emptySet.clear();
	EXPECT_EQ(emptySet.size(), (size_t)0);

	filledSet.clear();
	EXPECT_EQ(filledSet.size(), (size_t)0);
}

template <typename T>
void	swapSet(T emptySet, T filledSet, T toInsertSet)
{
	emptySet.swap(filledSet);
	EXPECT_EQ(emptySet.size(), (size_t)10);
	EXPECT_EQ(filledSet.size(), (size_t)0);

	filledSet.swap(toInsertSet);
	EXPECT_EQ(filledSet.size(), (size_t)5);
	EXPECT_EQ(toInsertSet.size(), (size_t)0);
}

template <typename T>
void	maxSizeSet(T emptySet, T filledSet, T toInsertSet, size_t expectedSize)
{
	EXPECT_EQ(emptySet.max_size(), expectedSize);
	EXPECT_EQ(filledSet.max_size(), expectedSize);
	EXPECT_EQ(toInsertSet.max_size(), expectedSize);
}

/*****************************************************************/
/*       			     RUN STD::SET TEST      			     */
/*****************************************************************/

TEST_F(stdSetTest, initSizeSet)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                        ";
	std::cout << "          [ STD::SET ] " << RESET << std::endl;

	initSizeSet(intEmptySet, intFilledSet, intToInsertSet);
	initSizeSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	initSizeSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	initSizeSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(stdSetTest, isEmptySet)
{
	isEmptySet(intEmptySet, intFilledSet, intToInsertSet);
	isEmptySet(floatEmptySet, floatFilledSet, floatToInsertSet);
	isEmptySet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	isEmptySet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(stdSetTest, insertInEmptySet)
{
	insertInEmptySet(intEmptySet, intX);
	insertInEmptySet(floatEmptySet, floatX);
	insertInEmptySet(doubleEmptySet, doubleX);
	insertInEmptySet(stringEmptySet, stringX);
}

TEST_F(stdSetTest, insertExistingKeyInFilledSet)
{
	insertExistingKeyInFilledSet(intFilledSet, intX);
	insertExistingKeyInFilledSet(floatFilledSet, floatX);
	insertExistingKeyInFilledSet(doubleFilledSet, doubleX);
	insertExistingKeyInFilledSet(stringFilledSet, stringX);
}

TEST_F(stdSetTest, eraseOneInFilledSet)
{
	eraseOneInFilledSet(intFilledSet, intX);
	eraseOneInFilledSet(floatFilledSet,floatX);
	eraseOneInFilledSet(doubleFilledSet, doubleX);
	eraseOneInFilledSet(stringFilledSet, stringX);
}

TEST_F(stdSetTest, eraseOneInEmptySet)
{
	eraseOneInEmptySet(intEmptySet, intX);
	eraseOneInEmptySet(floatEmptySet, floatX);
	eraseOneInEmptySet(doubleEmptySet, doubleX);
	eraseOneInEmptySet(stringEmptySet, stringX);
}

TEST_F(stdSetTest, insertRangeInEmptySet)
{
	insertRangeInEmptySet(intEmptySet, intFilledSet);
	insertRangeInEmptySet(floatEmptySet, floatFilledSet);
	insertRangeInEmptySet(doubleEmptySet, doubleFilledSet);
	insertRangeInEmptySet(stringEmptySet, stringFilledSet);
}

TEST_F(stdSetTest, insertRangeInFilledSet)
{
	insertRangeInFilledSet(intFilledSet, intToInsertSet);
	insertRangeInFilledSet(floatFilledSet, floatToInsertSet);
	insertRangeInFilledSet(doubleFilledSet, doubleToInsertSet);
	insertRangeInFilledSet(stringFilledSet, stringToInsertSet);
}

TEST_F(stdSetTest, eraseRangeInFilledSet)
{
	eraseRangeInFilledSet(intFilledSet);
	eraseRangeInFilledSet(floatFilledSet);
	eraseRangeInFilledSet(doubleFilledSet);
	eraseRangeInFilledSet(stringFilledSet);
}

TEST_F(stdSetTest, clearSet)
{
	clearSet(intEmptySet, intFilledSet);
	clearSet(floatEmptySet, floatFilledSet);
	clearSet(doubleEmptySet, doubleFilledSet);
	clearSet(stringEmptySet, stringFilledSet);
}

TEST_F(stdSetTest, swapSet)
{
	swapSet(intEmptySet, intFilledSet, intToInsertSet);
	swapSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	swapSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	swapSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(stdSetTest, maxSizeTest)
{
	maxSizeSet(intEmptySet, intFilledSet, intToInsertSet, MAX_SIZE_INT_SET);
	maxSizeSet(floatEmptySet, floatFilledSet, floatToInsertSet, MAX_SIZE_FLOAT_SET);
	maxSizeSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, MAX_SIZE_DOUBLE_SET);
	maxSizeSet(stringEmptySet, stringFilledSet, stringToInsertSet, MAX_SIZE_STRING_SET);
}

/*****************************************************************/
/*       			      RUN FT::SET TEST      			     */
/*****************************************************************/

TEST_F(ftSetTest, initSizeSet)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                        ";
	std::cout << "           [ FT::SET ] " << RESET << std::endl;

	initSizeSet(intEmptySet, intFilledSet, intToInsertSet);
	initSizeSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	initSizeSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	initSizeSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, isEmptySet)
{
	isEmptySet(intEmptySet, intFilledSet, intToInsertSet);
	isEmptySet(floatEmptySet, floatFilledSet, floatToInsertSet);
	isEmptySet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	isEmptySet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, insertInEmptySet)
{
	insertInEmptySet(intEmptySet, intX);
	insertInEmptySet(floatEmptySet, floatX);
	insertInEmptySet(doubleEmptySet, doubleX);
	insertInEmptySet(stringEmptySet, stringX);
}

TEST_F(ftSetTest, insertExistingKeyInFilledSet)
{
	insertExistingKeyInFilledSet(intFilledSet, intX);
	insertExistingKeyInFilledSet(floatFilledSet, floatX);
	insertExistingKeyInFilledSet(doubleFilledSet, doubleX);
	insertExistingKeyInFilledSet(stringFilledSet, stringX);
}

TEST_F(ftSetTest, eraseOneInFilledSet)
{
	eraseOneInFilledSet(intFilledSet, intX);
	eraseOneInFilledSet(floatFilledSet,floatX);
	eraseOneInFilledSet(doubleFilledSet, doubleX);
	eraseOneInFilledSet(stringFilledSet, stringX);
}

TEST_F(ftSetTest, eraseOneInEmptySet)
{
	eraseOneInEmptySet(intEmptySet, intX);
	eraseOneInEmptySet(floatEmptySet, floatX);
	eraseOneInEmptySet(doubleEmptySet, doubleX);
	eraseOneInEmptySet(stringEmptySet, stringX);
}

TEST_F(ftSetTest, insertRangeInEmptySet)
{
	insertRangeInEmptySet(intEmptySet, intFilledSet);
	insertRangeInEmptySet(floatEmptySet, floatFilledSet);
	insertRangeInEmptySet(doubleEmptySet, doubleFilledSet);
	insertRangeInEmptySet(stringEmptySet, stringFilledSet);
}

TEST_F(ftSetTest, insertRangeInFilledSet)
{
	insertRangeInFilledSet(intFilledSet, intToInsertSet);
	insertRangeInFilledSet(floatFilledSet, floatToInsertSet);
	insertRangeInFilledSet(doubleFilledSet, doubleToInsertSet);
	insertRangeInFilledSet(stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, eraseRangeInFilledSet)
{
	eraseRangeInFilledSet(intFilledSet);
	eraseRangeInFilledSet(floatFilledSet);
	eraseRangeInFilledSet(doubleFilledSet);
	eraseRangeInFilledSet(stringFilledSet);
}

TEST_F(ftSetTest, clearSet)
{
	clearSet(intEmptySet, intFilledSet);
	clearSet(floatEmptySet, floatFilledSet);
	clearSet(doubleEmptySet, doubleFilledSet);
	clearSet(stringEmptySet, stringFilledSet);
}

TEST_F(ftSetTest, swapSet)
{
	swapSet(intEmptySet, intFilledSet, intToInsertSet);
	swapSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	swapSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	swapSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, maxSizeTest)
{
	// maxSizeSet(intEmptySet, intFilledSet, intToInsertSet, MAX_SIZE_INT_SET);
	// maxSizeSet(floatEmptySet, floatFilledSet, floatToInsertSet, MAX_SIZE_FLOAT_SET);
	maxSizeSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, MAX_SIZE_DOUBLE_SET);
	maxSizeSet(stringEmptySet, stringFilledSet, stringToInsertSet, MAX_SIZE_STRING_SET);
}
