#include "../mainTests.hpp"

/*****************************************************************/
/*       			          SET TEST    		        	     */
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
void	constIteratorSet(T filledSet, T toInsertSet, U varX, U varY)
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

template <typename T>
void	operatorEqualSet(T emptySet, T filledSet, T toInsertSet)
{
	T	copyFilledSet(filledSet);

	EXPECT_EQ(emptySet == emptySet, true);
	EXPECT_EQ(emptySet == filledSet, false);
	EXPECT_EQ(emptySet == toInsertSet, false);
	EXPECT_EQ(filledSet == toInsertSet, false);

	EXPECT_EQ(filledSet == copyFilledSet, true);
	EXPECT_EQ(copyFilledSet == filledSet, true);
	copyFilledSet.erase(copyFilledSet.begin());
	EXPECT_EQ(filledSet == copyFilledSet, false);
	EXPECT_EQ(copyFilledSet == filledSet, false);
}

template <typename T>
void	operatorNotEqualSet(T emptySet, T filledSet, T toInsertSet)
{
	T	copyFilledSet(filledSet);

	EXPECT_EQ(emptySet != emptySet, false);
	EXPECT_EQ(emptySet != filledSet, true);
	EXPECT_EQ(emptySet != toInsertSet, true);
	EXPECT_EQ(filledSet != toInsertSet, true);

	EXPECT_EQ(filledSet != copyFilledSet, false);
	EXPECT_EQ(copyFilledSet != filledSet, false);
	copyFilledSet.erase(copyFilledSet.begin());
	EXPECT_EQ(filledSet != copyFilledSet, true);
	EXPECT_EQ(copyFilledSet != filledSet, true);
}

template <typename T>
void	operatorSupEqualSet(T emptySet, T filledSet, T toInsertSet)
{
	T	copyFilledSet(filledSet);
	T	copyBisFilledSet(filledSet);

	EXPECT_EQ(emptySet >= emptySet, true);
	EXPECT_EQ(emptySet >= filledSet, false);
	EXPECT_EQ(emptySet >= toInsertSet, false);
	EXPECT_EQ(filledSet >= toInsertSet, false);
	EXPECT_EQ(filledSet >= emptySet, true);
	EXPECT_EQ(toInsertSet >= emptySet, true);
	EXPECT_EQ(toInsertSet >= filledSet, true);

	EXPECT_EQ(filledSet >= copyFilledSet, true);
	EXPECT_EQ(copyFilledSet >= filledSet, true);
	copyFilledSet.erase(copyFilledSet.begin());
	EXPECT_EQ(filledSet >= copyFilledSet, false);
	EXPECT_EQ(copyFilledSet >= filledSet, true);
	copyBisFilledSet.erase(--copyBisFilledSet.end());
	EXPECT_EQ(filledSet >= copyBisFilledSet, true);
	EXPECT_EQ(copyBisFilledSet >= filledSet, false);
}

template <typename T>
void	operatorSupSet(T emptySet, T filledSet, T toInsertSet)
{
	T	copyFilledSet(filledSet);
	T	copyBisFilledSet(filledSet);

	EXPECT_EQ(emptySet > emptySet, false);
	EXPECT_EQ(emptySet > filledSet, false);
	EXPECT_EQ(emptySet > toInsertSet, false);
	EXPECT_EQ(filledSet > toInsertSet, false);
	EXPECT_EQ(filledSet > emptySet, true);
	EXPECT_EQ(toInsertSet > emptySet, true);
	EXPECT_EQ(toInsertSet > filledSet, true);

	EXPECT_EQ(filledSet > copyFilledSet, false);
	EXPECT_EQ(copyFilledSet > filledSet, false);
	copyFilledSet.erase(copyFilledSet.begin());
	EXPECT_EQ(filledSet > copyFilledSet, false);
	EXPECT_EQ(copyFilledSet > filledSet, true);
	copyBisFilledSet.erase(--copyBisFilledSet.end());
	EXPECT_EQ(filledSet > copyBisFilledSet, true);
	EXPECT_EQ(copyBisFilledSet > filledSet, false);
}

template <typename T>
void	operatorInfEqualSet(T emptySet, T filledSet, T toInsertSet)
{
	T	copyFilledSet(filledSet);
	T	copyBisFilledSet(filledSet);

	EXPECT_EQ(emptySet <= emptySet, true);
	EXPECT_EQ(emptySet <= filledSet, true);
	EXPECT_EQ(emptySet <= toInsertSet, true);
	EXPECT_EQ(filledSet <= toInsertSet, true);
	EXPECT_EQ(filledSet <= emptySet, false);
	EXPECT_EQ(toInsertSet <= emptySet, false);
	EXPECT_EQ(toInsertSet <= filledSet, false);

	EXPECT_EQ(filledSet <= copyFilledSet, true);
	EXPECT_EQ(copyFilledSet <= filledSet, true);
	copyFilledSet.erase(copyFilledSet.begin());
	EXPECT_EQ(filledSet <= copyFilledSet, true);
	EXPECT_EQ(copyFilledSet <= filledSet, false);
	copyBisFilledSet.erase(--copyBisFilledSet.end());
	EXPECT_EQ(filledSet <= copyBisFilledSet, false);
	EXPECT_EQ(copyBisFilledSet <= filledSet, true);
}

template <typename T>
void	operatorInfSet(T emptySet, T filledSet, T toInsertSet)
{
	T	copyFilledSet(filledSet);
	T	copyBisFilledSet(filledSet);

	EXPECT_EQ(emptySet < emptySet, false);
	EXPECT_EQ(emptySet < filledSet, true);
	EXPECT_EQ(emptySet < toInsertSet, true);
	EXPECT_EQ(filledSet < toInsertSet, true);
	EXPECT_EQ(filledSet < emptySet, false);
	EXPECT_EQ(toInsertSet < emptySet, false);
	EXPECT_EQ(toInsertSet < filledSet, false);

	EXPECT_EQ(filledSet < copyFilledSet, false);
	EXPECT_EQ(copyFilledSet < filledSet, false);
	copyFilledSet.erase(copyFilledSet.begin());
	EXPECT_EQ(filledSet < copyFilledSet, true);
	EXPECT_EQ(copyFilledSet < filledSet, false);
	copyBisFilledSet.erase(--copyBisFilledSet.end());
	EXPECT_EQ(filledSet < copyBisFilledSet, false);
	EXPECT_EQ(copyBisFilledSet < filledSet, true);
}

template <typename T, typename U>
void	constructorSet(T emptySet, T filledSet, T toInsertSet, U varX)
{
	typename T::iterator	it;

	T	newEmptySet;
	EXPECT_EQ(newEmptySet.empty(), true);
	EXPECT_EQ(emptySet == newEmptySet, true);

	T	copyEmptySet(emptySet);
	EXPECT_EQ(copyEmptySet.empty(), true);
	EXPECT_EQ(emptySet == copyEmptySet, true);

	T	copyToInsertSet(toInsertSet);
	EXPECT_EQ(copyToInsertSet.empty(), false);
	EXPECT_EQ(toInsertSet == copyToInsertSet, true);

	T	newFilledSet(filledSet.begin(), filledSet.end());
	EXPECT_EQ(newFilledSet.size(), (size_t)10);
	EXPECT_EQ(filledSet == newFilledSet, true);

	T	otherFilledSet(++filledSet.begin(), --filledSet.end());
	EXPECT_EQ(otherFilledSet.size(), (size_t)8);
	it = otherFilledSet.begin();
	for (int i = 1; it != otherFilledSet.end(); it++, i++)
		EXPECT_EQ(*it, varX[i]);
}

template <typename T>
void	operatorEgalSet(T emptySet, T filledSet, T toInsertSet)
{
	T newSet;

	newSet = filledSet;
	EXPECT_EQ(newSet.empty(), false);
	EXPECT_EQ(newSet == filledSet, true);

	newSet = emptySet;
	EXPECT_EQ(newSet.empty(), true);
	EXPECT_EQ(newSet == filledSet, false);
	EXPECT_EQ(newSet == emptySet, true);

	newSet = toInsertSet;
	EXPECT_EQ(newSet.empty(), false);
	EXPECT_EQ(newSet == emptySet, false);
	EXPECT_EQ(newSet == toInsertSet, true);
}

template <typename T, typename U>
void	nonMemberSwapSet(
	T emptySet, T filledSet, T toInsertSet, U varX, U varY, void (*swap)(T& x, T& y))
{
	typename T::iterator	it;

	swap(emptySet, filledSet);
	EXPECT_EQ(emptySet.empty(), false);
	EXPECT_EQ(filledSet.empty(), true);
	it = emptySet.begin();
	for (int i = 0; it != emptySet.end(); it++, i++)
		EXPECT_EQ(*it, varX[i]);

	swap(emptySet, toInsertSet);
	it = emptySet.begin();
	for (int i = 0; it != emptySet.end(); it++, i++)
		EXPECT_EQ(*it, varY[i]);
}
