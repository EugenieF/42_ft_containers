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

template <typename T, typename U>
void	findSet(T emptySet, T filledSet, T toInsertSet, U varX, U varY)
{
	(void)emptySet;

	typename T::iterator	it;

	for (int i = 0; i < 10; i++)
	{
		it = filledSet.find(varX[i]);
		EXPECT_EQ(*it, varX[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		it = filledSet.find(varY[i]);
		EXPECT_EQ(it, filledSet.end());
	}

	for (int i = 0; i < 5; i++)
	{
		it = toInsertSet.find(varY[i]);
		EXPECT_EQ(*it, varY[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		it = toInsertSet.find(varX[i]);
		EXPECT_EQ(it, toInsertSet.end());
	}
}

template <typename T, typename U>
void	constFindSet(T emptySet, T filledSet, T toInsertSet, U varX, U varY)
{
	(void)emptySet;	// test with emptySet

	typename T::const_iterator	const_it;

	for (int i = 0; i < 10; i++)
	{
		const_it = filledSet.find(varX[i]);
		EXPECT_EQ(*const_it, varX[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		const_it = filledSet.find(varY[i]);
		EXPECT_EQ(const_it, filledSet.end());
	}

	for (int i = 0; i < 5; i++)
	{
		const_it = toInsertSet.find(varY[i]);
		EXPECT_EQ(*const_it, varY[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		const_it = toInsertSet.find(varX[i]);
		EXPECT_EQ(const_it, toInsertSet.end());
	}
}

template <typename T, typename U>
void	countSet(T emptySet, T filledSet, T toInsertSet, U varX, U varY)
{
	for (int i = 0; i < 10; i++)
		EXPECT_EQ(emptySet.count(varX[i]), (size_t)0);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(emptySet.count(varY[i]), (size_t)0);

	for (int i = 0; i < 10; i++)
		EXPECT_EQ(filledSet.count(varX[i]), (size_t)1);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(filledSet.count(varY[i]), (size_t)0);

	for (int i = 0; i < 10; i++)
		EXPECT_EQ(toInsertSet.count(varX[i]), (size_t)0);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(toInsertSet.count(varY[i]), (size_t)1);
}

template <typename T, typename U>
void	lowerBoundSet(T filledSet, T toInsertSet, U varX, U varY)
{
	typename T::iterator	it;

	for (int i = 0; i < 10; i++)
	{
		it = filledSet.lower_bound(varX[i]);
		EXPECT_EQ(*it, varX[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		it = filledSet.lower_bound(varY[i]);
		EXPECT_EQ(it, filledSet.end());
	}

	for (int i = 0; i < 5; i++)
	{
		it = toInsertSet.lower_bound(varY[i]);
		EXPECT_EQ(*it, varY[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		it = toInsertSet.lower_bound(varX[i]);
		EXPECT_EQ(*it, varY[0]);
	}
}

template <typename T, typename U>
void	constLowerBoundSet(T filledSet, T toInsertSet, U varX, U varY)
{
	typename T::const_iterator	const_it;

	for (int i = 0; i < 10; i++)
	{
		const_it = filledSet.lower_bound(varX[i]);
		EXPECT_EQ(*const_it, varX[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		const_it = filledSet.lower_bound(varY[i]);
		EXPECT_EQ(const_it, filledSet.end());
	}

	for (int i = 0; i < 5; i++)
	{
		const_it = toInsertSet.lower_bound(varY[i]);
		EXPECT_EQ(*const_it, varY[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		const_it = toInsertSet.lower_bound(varX[i]);
		EXPECT_EQ(*const_it, varY[0]);
	}
}

template <typename T, typename U>
void	upperBoundSet(T filledSet, T toInsertSet, U varX, U varY)
{
	typename T::iterator	it;

	for (int i = 0; i < 9; i++)
	{
		it = filledSet.upper_bound(varX[i]);
		EXPECT_EQ(*it, varX[i + 1]);
	}
	it = filledSet.upper_bound(varX[9]);
	EXPECT_EQ(it, filledSet.end());
	for (int i = 0; i < 5; i++)
	{
		it = filledSet.upper_bound(varY[i]);
		EXPECT_EQ(it, filledSet.end());
	}

	for (int i = 0; i < 4; i++)
	{
		it = toInsertSet.upper_bound(varY[i]);
		EXPECT_EQ(*it, varY[i + 1]);
	}
	it = toInsertSet.upper_bound(varY[4]);
	EXPECT_EQ(it, toInsertSet.end());
	for (int i = 0; i < 5; i++)
	{
		it = toInsertSet.upper_bound(varX[i]);
		EXPECT_EQ(*it, varY[0]);
	}
}

template <typename T, typename U>
void	constUpperBoundSet(T filledSet, T toInsertSet, U varX, U varY)
{
	typename T::const_iterator	const_it;

	for (int i = 0; i < 9; i++)
	{
		const_it = filledSet.upper_bound(varX[i]);
		EXPECT_EQ(*const_it, varX[i + 1]);
	}
	const_it = filledSet.upper_bound(varX[9]);
	EXPECT_EQ(const_it, filledSet.end());
	for (int i = 0; i < 5; i++)
	{
		const_it = filledSet.upper_bound(varY[i]);
		EXPECT_EQ(const_it, filledSet.end());
	}

	for (int i = 0; i < 4; i++)
	{
		const_it = toInsertSet.upper_bound(varY[i]);
		EXPECT_EQ(*const_it, varY[i + 1]);
	}
	const_it = toInsertSet.upper_bound(varY[4]);
	EXPECT_EQ(const_it, toInsertSet.end());
	for (int i = 0; i < 5; i++)
	{
		const_it = toInsertSet.upper_bound(varX[i]);
		EXPECT_EQ(*const_it, varY[0]);
	}
}

template <typename T, typename U>
void	equalRangeSet(T filledSet, T toInsertSet, U varX, U varY)
{
	typename T::iterator	itLower;
	typename T::iterator	itUpper;

	for (int i = 0; i < 10; i++)
	{
		itLower = filledSet.equal_range(varX[i]).first;
		itUpper = filledSet.equal_range(varX[i]).second;
		EXPECT_EQ(*itLower, varX[i]);
		if (i < 9)
			EXPECT_EQ(*itUpper, varX[i + 1]);
		else
			EXPECT_EQ(itUpper, filledSet.end());
	}
	for (int i = 0; i < 5; i++)
	{
		itLower = filledSet.equal_range(varY[i]).first;
		itUpper = filledSet.equal_range(varY[i]).second;
		EXPECT_EQ(itLower, filledSet.end());
		EXPECT_EQ(itUpper, filledSet.end());
	}

	for (int i = 0; i < 5; i++)
	{
		itLower = toInsertSet.equal_range(varY[i]).first;
		itUpper = toInsertSet.equal_range(varY[i]).second;
		EXPECT_EQ(*itLower, varY[i]);
		if (i < 4)
			EXPECT_EQ(*itUpper, varY[i + 1]);
		else
			EXPECT_EQ(itUpper, toInsertSet.end());
	}
	for (int i = 0; i < 10; i++)
	{
		itLower = toInsertSet.equal_range(varX[i]).first;
		itUpper = toInsertSet.equal_range(varX[i]).second;
		EXPECT_EQ(*itLower, varY[0]);
		EXPECT_EQ(*itUpper, varY[0]);
	}
}

template <typename T, typename U>
void	constEqualRangeSet(T filledSet, T toInsertSet, U varX, U varY)
{
	typename T::const_iterator	constItLower;
	typename T::const_iterator	constItUpper;

	for (int i = 0; i < 10; i++)
	{
		constItLower = filledSet.equal_range(varX[i]).first;
		constItUpper = filledSet.equal_range(varX[i]).second;
		EXPECT_EQ(*constItLower, varX[i]);
		if (i < 9)
			EXPECT_EQ(*constItUpper, varX[i + 1]);
		else
			EXPECT_EQ(constItUpper, filledSet.end());
	}
	for (int i = 0; i < 5; i++)
	{
		constItLower = filledSet.equal_range(varY[i]).first;
		constItUpper = filledSet.equal_range(varY[i]).second;
		EXPECT_EQ(constItLower, filledSet.end());
		EXPECT_EQ(constItUpper, filledSet.end());
	}

	for (int i = 0; i < 5; i++)
	{
		constItLower = toInsertSet.equal_range(varY[i]).first;
		constItUpper = toInsertSet.equal_range(varY[i]).second;
		EXPECT_EQ(*constItLower, varY[i]);
		if (i < 4)
			EXPECT_EQ(*constItUpper, varY[i + 1]);
		else
			EXPECT_EQ(constItUpper, toInsertSet.end());
	}
	for (int i = 0; i < 10; i++)
	{
		constItLower = toInsertSet.equal_range(varX[i]).first;
		constItUpper = toInsertSet.equal_range(varX[i]).second;
		EXPECT_EQ(*constItLower, varY[0]);
		EXPECT_EQ(*constItUpper, varY[0]);
	}
}

template <typename T, typename U>
void	iteratorSet(T filledSet, T toInsertSet, U varX, U varY)
{
	typename T::iterator			it;
	typename T::reverse_iterator	rev_it;

	it = filledSet.begin();
	for (int i = 0; i < 10; i++, it++)
		EXPECT_EQ(*it, varX[i]);
	it = filledSet.end();
	it--;
	for (int i = 9; i <= 0; i--, it--)
		EXPECT_EQ(*it, varX[i]);

	rev_it = filledSet.rbegin();
	for (int i = 9; i <= 0; i--, rev_it++)
		EXPECT_EQ(*rev_it, varX[i]);
	rev_it = filledSet.rend();
	rev_it--;
	for (int i = 0; i < 9; i++, rev_it--)
		EXPECT_EQ(*rev_it, varX[i]);

	it = toInsertSet.begin();
	for (int i = 0; i < 5; i++, it++)
		EXPECT_EQ(*it, varY[i]);
	it = toInsertSet.end();
	it--;
	for (int i = 4; i <= 0; i++, it--)
		EXPECT_EQ(*it, varY[i]);

	rev_it = toInsertSet.rbegin();
	for (int i = 4; i <= 0; i--, rev_it++)
		EXPECT_EQ(*rev_it, varY[i]);
	rev_it = toInsertSet.rend();
	rev_it--;
	for (int i = 0; i < 4; i++, rev_it--)
		EXPECT_EQ(*rev_it, varY[i]);
}

template <typename T, typename U>
void	constIteratorsSet(T filledSet, T toInsertSet, U varX, U varY)
{
	typename T::const_iterator			const_it;
	typename T::const_reverse_iterator	const_rev_it;

	const_it = filledSet.begin();
	for (int i = 0; i < 10; i++, const_it++)
		EXPECT_EQ(*const_it, varX[i]);
	const_it = filledSet.end();
	const_it--;
	for (int i = 9; i <= 0; i--, const_it--)
		EXPECT_EQ(*const_it, varX[i]);

	const_rev_it = filledSet.rbegin();
	for (int i = 9; i <= 0; i--, const_rev_it++)
		EXPECT_EQ(*const_rev_it, varX[i]);
	const_rev_it = filledSet.rend();
	const_rev_it--;
	for (int i = 0; i < 9; i++, const_rev_it--)
		EXPECT_EQ(*const_rev_it, varX[i]);

	const_it = toInsertSet.begin();
	for (int i = 0; i < 5; i++, const_it++)
		EXPECT_EQ(*const_it, varY[i]);
	const_it = toInsertSet.end();
	const_it--;
	for (int i = 4; i <= 0; i++, const_it--)
		EXPECT_EQ(*const_it, varY[i]);

	const_rev_it = toInsertSet.rbegin();
	for (int i = 4; i <= 0; i--, const_rev_it++)
		EXPECT_EQ(*const_rev_it, varY[i]);
	const_rev_it = toInsertSet.rend();
	const_rev_it--;
	for (int i = 0; i < 4; i++, const_rev_it--)
		EXPECT_EQ(*const_rev_it, varY[i]);
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

// TEST_F(stdSetTest, maxSizeTest)
// {
// 	maxSizeSet(intEmptySet, intFilledSet, intToInsertSet, MAX_SIZE_INT_SET);
// 	maxSizeSet(floatEmptySet, floatFilledSet, floatToInsertSet, MAX_SIZE_FLOAT_SET);
// 	maxSizeSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, MAX_SIZE_DOUBLE_SET);
// 	maxSizeSet(stringEmptySet, stringFilledSet, stringToInsertSet, MAX_SIZE_STRING_SET);
// }

TEST_F(stdSetTest, findSet)
{
	findSet(intEmptySet, intFilledSet, intToInsertSet, intX, intY);
	findSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX, floatY);
	findSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	findSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(stdSetTest, constFindSet)
{
	constFindSet(intEmptySet, intFilledSet, intToInsertSet, intX, intY);
	constFindSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX, floatY);
	constFindSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	constFindSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(stdSetTest, countSet)
{
	countSet(intEmptySet, intFilledSet, intToInsertSet, intX, intY);
	countSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX, floatY);
	countSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	countSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(stdSetTest, lowerBoundSet)
{
	lowerBoundSet(intFilledSet, intToInsertSet, intX, intY);
	lowerBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	lowerBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	lowerBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(stdSetTest, constLowerBoundSet)
{
	lowerBoundSet(intFilledSet, intToInsertSet, intX, intY);
	lowerBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	lowerBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	lowerBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(stdSetTest, upperBoundSet)
{
	upperBoundSet(intFilledSet, intToInsertSet, intX, intY);
	upperBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	upperBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	upperBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(stdSetTest, constUpperBoundSet)
{
	constUpperBoundSet(intFilledSet, intToInsertSet, intX, intY);
	constUpperBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	constUpperBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	constUpperBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(stdSetTest, equalRangeSet)
{
	equalRangeSet(intFilledSet, intToInsertSet, intX, intY);
	equalRangeSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	equalRangeSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	equalRangeSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(stdSetTest, constEqualRangeSet)
{
	constEqualRangeSet(intFilledSet, intToInsertSet, intX, intY);
	constEqualRangeSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	constEqualRangeSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	constEqualRangeSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(stdSetTest, iteratorSet)
{
	iteratorSet(intFilledSet, intToInsertSet, intX, intY);
	iteratorSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	iteratorSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	iteratorSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(stdSetTest, constIteratorSet)
{
	iteratorSet(intFilledSet, intToInsertSet, intX, intY);
	iteratorSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	iteratorSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	iteratorSet(stringFilledSet, stringToInsertSet, stringX, stringY);
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

// TEST_F(ftSetTest, maxSizeTest)
// {
// 	// maxSizeSet(intEmptySet, intFilledSet, intToInsertSet, MAX_SIZE_INT_SET);
// 	// maxSizeSet(floatEmptySet, floatFilledSet, floatToInsertSet, MAX_SIZE_FLOAT_SET);
// 	maxSizeSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, MAX_SIZE_DOUBLE_SET);
// 	maxSizeSet(stringEmptySet, stringFilledSet, stringToInsertSet, MAX_SIZE_STRING_SET);
// }

TEST_F(ftSetTest, findSet)
{
	findSet(intEmptySet, intFilledSet, intToInsertSet, intX, intY);
	findSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX, floatY);
	findSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	findSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, constFindSet)
{
	constFindSet(intEmptySet, intFilledSet, intToInsertSet, intX, intY);
	constFindSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX, floatY);
	constFindSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	constFindSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, countSet)
{
	countSet(intEmptySet, intFilledSet, intToInsertSet, intX, intY);
	countSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX, floatY);
	countSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	countSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, lowerBoundSet)
{
	lowerBoundSet(intFilledSet, intToInsertSet, intX, intY);
	lowerBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	lowerBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	lowerBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, constLowerBoundSet)
{
	lowerBoundSet(intFilledSet, intToInsertSet, intX, intY);
	lowerBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	lowerBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	lowerBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, upperBoundSet)
{
	upperBoundSet(intFilledSet, intToInsertSet, intX, intY);
	upperBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	upperBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	upperBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, constUpperBoundSet)
{
	constUpperBoundSet(intFilledSet, intToInsertSet, intX, intY);
	constUpperBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	constUpperBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	constUpperBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, equalRangeSet)
{
	equalRangeSet(intFilledSet, intToInsertSet, intX, intY);
	equalRangeSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	equalRangeSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	equalRangeSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, constEqualRangeSet)
{
	constEqualRangeSet(intFilledSet, intToInsertSet, intX, intY);
	constEqualRangeSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	constEqualRangeSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	constEqualRangeSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

// TEST_F(ftSetTest, iteratorSet)
// {
// 	iteratorSet(intFilledSet, intToInsertSet, intX, intY);
// 	iteratorSet(floatFilledSet, floatToInsertSet, floatX, floatY);
// 	iteratorSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
// 	iteratorSet(stringFilledSet, stringToInsertSet, stringX, stringY);
// }

// TEST_F(ftSetTest, constIteratorSet)
// {
// 	iteratorSet(intFilledSet, intToInsertSet, intX, intY);
// 	iteratorSet(floatFilledSet, floatToInsertSet, floatX, floatY);
// 	iteratorSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
// 	iteratorSet(stringFilledSet, stringToInsertSet, stringX, stringY);
// }
