#include "../mainTests.hpp"

/*****************************************************************/
/*       			         MAP TEST      		        	     */
/*****************************************************************/

template <typename T>
void	initSizeMap(T emptyMap, T filledMap, T toInsertMap)
{
	EXPECT_EQ(emptyMap.size(), (size_t)0);
	EXPECT_EQ(filledMap.size(), (size_t)10);
	EXPECT_EQ(toInsertMap.size(), (size_t)5);
}

template <typename T>
void	isEmptyMap(T emptyMap, T filledMap, T toInsertMap)
{
	EXPECT_EQ(emptyMap.empty(), true);
	EXPECT_EQ(filledMap.empty(), false);
	EXPECT_EQ(toInsertMap.empty(), false);
}

template <typename T, typename U, typename V, typename W>
void	insertInEmptyMap(T emptyMap, U varX1, V varX2, W pairType)
{
	(void)pairType;
	for (int i = 0; i < 10; i++)
	{
		emptyMap.insert(W(varX1[i], varX2[i]));
		EXPECT_EQ(emptyMap[varX1[i]], varX2[i]);
	}
}

template <typename T, typename U, typename V, typename W>
void	insertExistingKeyInFilledMap(T filledMap, U varX1, V varX2, W pairType)
{
	(void)pairType;
	size_t	expectedSize = (size_t)10;

	for (int i = 0; i < 10; i++)
	{
		filledMap.insert(W(varX1[i], varX2[5]));
		EXPECT_EQ(filledMap[varX1[i]], varX2[i]);
	}
	EXPECT_EQ(filledMap.size(), expectedSize);
}

template <typename T, typename U>
void	eraseOneInFilledMap(T filledMap, U varX)
{
	size_t	ret;
	size_t	expectedRet = (size_t)1;
	size_t	expectedSize = (size_t)9;

	ret = filledMap.erase(varX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(filledMap.size(), expectedSize);
}

template <typename T, typename U>
void	eraseOneInEmptyMap(T emptyMap, U varX)
{
	size_t	ret;
	size_t	expectedRet = (size_t)0;

	ret = emptyMap.erase(varX[0]);	
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(emptyMap.empty(), true);
}

template <typename T, typename U, typename V>
void	insertRangeInEmptyMap(T emptyMap, T filledMap, U varX1, V varX2)
{
	size_t	expectedSize = (size_t)10;

	emptyMap.insert(filledMap.begin(), filledMap.end());
	EXPECT_EQ(filledMap.size(), expectedSize);

	for (int i = 0; i < 10; i++)
		EXPECT_EQ(emptyMap[varX1[i]], varX2[i]);
}

template <typename T, typename U, typename V>
void	insertRangeInFilledMap(
	T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	size_t	expectedSize = (size_t)15;

	filledMap.insert(toInsertMap.begin(), toInsertMap.end());
	EXPECT_EQ(filledMap.size(), expectedSize);

	for (int i = 0; i < 10; i++)
		EXPECT_EQ(filledMap[varX1[i]], varX2[i]);

	for (int i = 0; i < 5; i++)
		EXPECT_EQ(filledMap[varY1[i]], varY2[i]);
}

template <typename T>
void	eraseRangeInFilledMap(T filledMap)
{
	size_t	expectedSize = (size_t)0;

	filledMap.erase(filledMap.begin(), filledMap.end());
	EXPECT_EQ(filledMap.size(), expectedSize);
}

template <typename T>
void	clearMap(T emptyMap, T filledMap)
{
	emptyMap.clear();
	EXPECT_EQ(emptyMap.size(), (size_t)0);

	filledMap.clear();
	EXPECT_EQ(filledMap.size(), (size_t)0);
}

template <typename T, typename U, typename V>
void	swapMap(T emptyMap, T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	emptyMap.swap(filledMap);
	for (int i = 0; i < 10; i++)
		EXPECT_EQ(emptyMap[varX1[i]], varX2[i]);
	EXPECT_EQ(emptyMap.size(), (size_t)10);
	EXPECT_EQ(filledMap.size(), (size_t)0);

	filledMap.swap(toInsertMap);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(filledMap[varY1[i]], varY2[i]);
	EXPECT_EQ(filledMap.size(), (size_t)5);
	EXPECT_EQ(toInsertMap.size(), (size_t)0);
}

template <typename T>
void	maxSizeMap(T emptyMap, T filledMap, T toInsertMap, size_t expectedSize)
{
	EXPECT_EQ(emptyMap.max_size(), expectedSize);
	EXPECT_EQ(filledMap.max_size(), expectedSize);
	EXPECT_EQ(toInsertMap.max_size(), expectedSize);
}

template <typename T, typename U, typename V>
void	findMap(T emptyMap, T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	(void)emptyMap;

	typename T::iterator	it;

	for (int i = 0; i < 10; i++)
	{
		it = filledMap.find(varX1[i]);
		EXPECT_EQ(it->first, varX1[i]);
		EXPECT_EQ(it->second, varX2[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		it = filledMap.find(varY1[i]);
		EXPECT_EQ(it, filledMap.end());
	}

	for (int i = 0; i < 5; i++)
	{
		it = toInsertMap.find(varY1[i]);
		EXPECT_EQ(it->first, varY1[i]);
		EXPECT_EQ(it->second, varY2[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		it = toInsertMap.find(varX1[i]);
		EXPECT_EQ(it, toInsertMap.end());
	}
}

template <typename T, typename U, typename V>
void	constFindMap(T emptyMap, T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	(void)emptyMap;

	typename T::const_iterator	const_it;

	for (int i = 0; i < 10; i++)
	{
		const_it = filledMap.find(varX1[i]);
		EXPECT_EQ(const_it->first, varX1[i]);
		EXPECT_EQ(const_it->second, varX2[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		const_it = filledMap.find(varY1[i]);
		EXPECT_EQ(const_it, filledMap.end());
	}

	for (int i = 0; i < 5; i++)
	{
		const_it = toInsertMap.find(varY1[i]);
		EXPECT_EQ(const_it->first, varY1[i]);
		EXPECT_EQ(const_it->second, varY2[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		const_it = toInsertMap.find(varX1[i]);
		EXPECT_EQ(const_it, toInsertMap.end());
	}
}

template <typename T, typename U>
void	countMap(T emptyMap, T filledMap, T toInsertMap, U varX, U varY)
{
	for (int i = 0; i < 10; i++)
		EXPECT_EQ(emptyMap.count(varX[i]), (size_t)0);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(emptyMap.count(varY[i]), (size_t)0);

	for (int i = 0; i < 10; i++)
		EXPECT_EQ(filledMap.count(varX[i]), (size_t)1);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(filledMap.count(varY[i]), (size_t)0);

	for (int i = 0; i < 10; i++)
		EXPECT_EQ(toInsertMap.count(varX[i]), (size_t)0);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(toInsertMap.count(varY[i]), (size_t)1);
}

template <typename T, typename U, typename V>
void	lowerBoundMap(T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	typename T::iterator	it;

	for (int i = 0; i < 10; i++)
	{
		it = filledMap.lower_bound(varX1[i]);
		EXPECT_EQ(it->first, varX1[i]);
		EXPECT_EQ(it->second, varX2[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		it = filledMap.lower_bound(varY1[i]);
		EXPECT_EQ(it, filledMap.end());
	}

	for (int i = 0; i < 5; i++)
	{
		it = toInsertMap.lower_bound(varY1[i]);
		EXPECT_EQ(it->first, varY1[i]);
		EXPECT_EQ(it->second, varY2[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		it = toInsertMap.lower_bound(varX1[i]);
		EXPECT_EQ(it->first, varY1[0]);
		EXPECT_EQ(it->second, varY2[0]);
	}
}

template <typename T, typename U, typename V>
void	constLowerBoundMap(T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	typename T::const_iterator	const_it;

	for (int i = 0; i < 10; i++)
	{
		const_it = filledMap.lower_bound(varX1[i]);
		EXPECT_EQ(const_it->first, varX1[i]);
		EXPECT_EQ(const_it->second, varX2[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		const_it = filledMap.lower_bound(varY1[i]);
		EXPECT_EQ(const_it, filledMap.end());
	}

	for (int i = 0; i < 5; i++)
	{
		const_it = toInsertMap.lower_bound(varY1[i]);
		EXPECT_EQ(const_it->first, varY1[i]);
		EXPECT_EQ(const_it->second, varY2[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		const_it = toInsertMap.lower_bound(varX1[i]);
		EXPECT_EQ(const_it->first, varY1[0]);
		EXPECT_EQ(const_it->second, varY2[0]);
	}
}

template <typename T, typename U, typename V>
void	upperBoundMap(T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	typename T::iterator	it;

	for (int i = 0; i < 9; i++)
	{
		it = filledMap.upper_bound(varX1[i]);
		EXPECT_EQ(it->first, varX1[i + 1]);
		EXPECT_EQ(it->second, varX2[i + 1]);
	}
	it = filledMap.upper_bound(varX1[9]);
	EXPECT_EQ(it, filledMap.end());
	for (int i = 0; i < 5; i++)
	{
		it = filledMap.upper_bound(varY1[i]);
		EXPECT_EQ(it, filledMap.end());
	}

	for (int i = 0; i < 4; i++)
	{
		it = toInsertMap.upper_bound(varY1[i]);
		EXPECT_EQ(it->first, varY1[i + 1]);
		EXPECT_EQ(it->second, varY2[i + 1]);
	}
	it = toInsertMap.upper_bound(varY1[4]);
	EXPECT_EQ(it, toInsertMap.end());
	for (int i = 0; i < 5; i++)
	{
		it = toInsertMap.upper_bound(varX1[i]);
		EXPECT_EQ(it->first, varY1[0]);
		EXPECT_EQ(it->second, varY2[0]);
	}
}

template <typename T, typename U, typename V>
void	constUpperBoundMap(T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	typename T::const_iterator	const_it;

	for (int i = 0; i < 9; i++)
	{
		const_it = filledMap.upper_bound(varX1[i]);
		EXPECT_EQ(const_it->first, varX1[i + 1]);
		EXPECT_EQ(const_it->second, varX2[i + 1]);
	}
	const_it = filledMap.upper_bound(varX1[9]);
	EXPECT_EQ(const_it, filledMap.end());
	EXPECT_EQ(const_it, filledMap.end());
	for (int i = 0; i < 5; i++)
	{
		const_it = filledMap.upper_bound(varY1[i]);
		EXPECT_EQ(const_it, filledMap.end());
	}

	for (int i = 0; i < 4; i++)
	{
		const_it = toInsertMap.upper_bound(varY1[i]);
		EXPECT_EQ(const_it->first, varY1[i + 1]);
		EXPECT_EQ(const_it->second, varY2[i + 1]);
	}
	const_it = toInsertMap.upper_bound(varY1[4]);
	EXPECT_EQ(const_it, toInsertMap.end());
	for (int i = 0; i < 5; i++)
	{
		const_it = toInsertMap.upper_bound(varX1[i]);
		EXPECT_EQ(const_it->first, varY1[0]);
		EXPECT_EQ(const_it->second, varY2[0]);
	}
}

template <typename T, typename U, typename V>
void	equalRangeMap(T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	typename T::iterator	itLower;
	typename T::iterator	itUpper;

	for (int i = 0; i < 10; i++)
	{
		itLower = filledMap.equal_range(varX1[i]).first;
		itUpper = filledMap.equal_range(varX1[i]).second;
		EXPECT_EQ(itLower->first, varX1[i]);
		EXPECT_EQ(itLower->second, varX2[i]);
		if (i < 9)
		{
			EXPECT_EQ(itUpper->first, varX1[i + 1]);
			EXPECT_EQ(itUpper->second, varX2[i + 1]);
		}
		else
			EXPECT_EQ(itUpper, filledMap.end());
	}
	for (int i = 0; i < 5; i++)
	{
		itLower = filledMap.equal_range(varY1[i]).first;
		itUpper = filledMap.equal_range(varY1[i]).second;
		EXPECT_EQ(itLower, filledMap.end());
		EXPECT_EQ(itUpper, filledMap.end());
	}

	for (int i = 0; i < 5; i++)
	{
		itLower = toInsertMap.equal_range(varY1[i]).first;
		itUpper = toInsertMap.equal_range(varY1[i]).second;
		EXPECT_EQ(itLower->first, varY1[i]);
		EXPECT_EQ(itLower->second, varY2[i]);
		if (i < 4)
		{
			EXPECT_EQ(itUpper->first, varY1[i + 1]);
			EXPECT_EQ(itUpper->second, varY2[i + 1]);
		}
		else
			EXPECT_EQ(itUpper, toInsertMap.end());
	}
	for (int i = 0; i < 10; i++)
	{
		itLower = toInsertMap.equal_range(varX1[i]).first;
		itUpper = toInsertMap.equal_range(varX1[i]).second;
		EXPECT_EQ(itLower->first, varY1[0]);
		EXPECT_EQ(itLower->second, varY2[0]);
		EXPECT_EQ(itUpper->first, varY1[0]);
		EXPECT_EQ(itUpper->second, varY2[0]);
	}
}

template <typename T, typename U, typename V>
void	constEqualRangeMap(T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	typename T::const_iterator	constItLower;
	typename T::const_iterator	constItUpper;

	for (int i = 0; i < 10; i++)
	{
		constItLower = filledMap.equal_range(varX1[i]).first;
		constItUpper = filledMap.equal_range(varX1[i]).second;
		EXPECT_EQ(constItLower->first, varX1[i]);
		EXPECT_EQ(constItLower->second, varX2[i]);
		if (i < 9)
		{
			EXPECT_EQ(constItUpper->first, varX1[i + 1]);
			EXPECT_EQ(constItUpper->second, varX2[i + 1]);
		}
		else
			EXPECT_EQ(constItUpper, filledMap.end());
	}
	for (int i = 0; i < 5; i++)
	{
		constItLower = filledMap.equal_range(varY1[i]).first;
		constItUpper = filledMap.equal_range(varY1[i]).second;
		EXPECT_EQ(constItLower, filledMap.end());
		EXPECT_EQ(constItUpper, filledMap.end());
	}

	for (int i = 0; i < 5; i++)
	{
		constItLower = toInsertMap.equal_range(varY1[i]).first;
		constItUpper = toInsertMap.equal_range(varY1[i]).second;
		EXPECT_EQ(constItLower->first, varY1[i]);
		EXPECT_EQ(constItLower->second, varY2[i]);
		if (i < 4)
		{
			EXPECT_EQ(constItUpper->first, varY1[i + 1]);
			EXPECT_EQ(constItUpper->second, varY2[i + 1]);
		}
		else
			EXPECT_EQ(constItUpper, toInsertMap.end());
	}
	for (int i = 0; i < 10; i++)
	{
		constItLower = toInsertMap.equal_range(varX1[i]).first;
		constItUpper = toInsertMap.equal_range(varX1[i]).second;
		EXPECT_EQ(constItLower->first, varY1[0]);
		EXPECT_EQ(constItLower->second, varY2[0]);
		EXPECT_EQ(constItUpper->first, varY1[0]);
		EXPECT_EQ(constItUpper->second, varY2[0]);
	}
}

template <typename T, typename U, typename V>
void	iteratorMap(T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	typename T::iterator			it;
	typename T::reverse_iterator	rev_it;

	it = filledMap.begin();
	for (int i = 0; i < 10; i++, it++)
	{
		EXPECT_EQ(it->first, varX1[i]);
		EXPECT_EQ(it->second, varX2[i]);
	}
	it = filledMap.end();
	it--;
	for (int i = 9; i <= 0; i--, it--)
	{
		EXPECT_EQ(it->first, varX1[i]);
		EXPECT_EQ(it->second, varX2[i]);
	}

	rev_it = filledMap.rbegin();
	for (int i = 9; i <= 0; i--, rev_it++)
	{
		EXPECT_EQ(rev_it->first, varX1[i]);
		EXPECT_EQ(rev_it->second, varX2[i]);
	}
	rev_it = filledMap.rend();
	rev_it--;
	for (int i = 0; i < 9; i++, rev_it--)
	{
		EXPECT_EQ(rev_it->first, varX1[i]);
		EXPECT_EQ(rev_it->second, varX2[i]);
	}
	it = toInsertMap.begin();
	for (int i = 0; i < 5; i++, it++)
	{
		EXPECT_EQ(it->first, varY1[i]);
		EXPECT_EQ(it->second, varY2[i]);
	}
	it = toInsertMap.end();
	it--;
	for (int i = 4; i <= 0; i++, it--)
	{
		EXPECT_EQ(it->first, varY1[i]);
		EXPECT_EQ(it->second, varY2[i]);
	}

	rev_it = toInsertMap.rbegin();
	for (int i = 4; i <= 0; i--, rev_it++)
	{
		EXPECT_EQ(rev_it->first, varY1[i]);
		EXPECT_EQ(rev_it->second, varY2[i]);
	}
	rev_it = toInsertMap.rend();
	rev_it--;
	for (int i = 0; i < 4; i++, rev_it--)
	{
		EXPECT_EQ(rev_it->first, varY1[i]);
		EXPECT_EQ(rev_it->second, varY2[i]);
	}
}

template <typename T, typename U, typename V>
void	constIteratorMap(T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	typename T::const_iterator			const_it;
	typename T::const_reverse_iterator	const_rev_it;

	const_it = filledMap.begin();
	for (int i = 0; i < 10; i++, const_it++)
	{
		EXPECT_EQ(const_it->first, varX1[i]);
		EXPECT_EQ(const_it->second, varX2[i]);
	}
	const_it = filledMap.end();
	const_it--;
	for (int i = 9; i <= 0; i--, const_it--)
	{
		EXPECT_EQ(const_it->first, varX1[i]);
		EXPECT_EQ(const_it->second, varX2[i]);
	}

	const_rev_it = filledMap.rbegin();
	for (int i = 9; i <= 0; i--, const_rev_it++)
	{
		EXPECT_EQ(const_rev_it->first, varX1[i]);
		EXPECT_EQ(const_rev_it->second, varX2[i]);
	}
	const_rev_it = filledMap.rend();
	const_rev_it--;
	for (int i = 0; i < 9; i++, const_rev_it--)
	{
		EXPECT_EQ(const_rev_it->first, varX1[i]);
		EXPECT_EQ(const_rev_it->second, varX2[i]);
	}
	const_it = toInsertMap.begin();
	for (int i = 0; i < 5; i++, const_it++)
	{
		EXPECT_EQ(const_it->first, varY1[i]);
		EXPECT_EQ(const_it->second, varY2[i]);
	}
	const_it = toInsertMap.end();
	const_it--;
	for (int i = 4; i <= 0; i++, const_it--)
	{
		EXPECT_EQ(const_it->first, varY1[i]);
		EXPECT_EQ(const_it->second, varY2[i]);
	}

	const_rev_it = toInsertMap.rbegin();
	for (int i = 4; i <= 0; i--, const_rev_it++)
	{
		EXPECT_EQ(const_rev_it->first, varY1[i]);
		EXPECT_EQ(const_rev_it->second, varY2[i]);
	}
	const_rev_it = toInsertMap.rend();
	const_rev_it--;
	for (int i = 0; i < 4; i++, const_rev_it--)
	{
		EXPECT_EQ(const_rev_it->first, varY1[i]);
		EXPECT_EQ(const_rev_it->second, varY2[i]);
	}
}

template <typename T>
void	operatorEqualMap(T emptyMap, T filledMap, T toInsertMap)
{
	T	copyFilledMap(filledMap);

	EXPECT_EQ(emptyMap == emptyMap, true);
	EXPECT_EQ(emptyMap == filledMap, false);
	EXPECT_EQ(emptyMap == toInsertMap, false);
	EXPECT_EQ(filledMap == toInsertMap, false);

	EXPECT_EQ(filledMap == copyFilledMap, true);
	EXPECT_EQ(copyFilledMap == filledMap, true);
	copyFilledMap.erase(copyFilledMap.begin());
	EXPECT_EQ(filledMap == copyFilledMap, false);
	EXPECT_EQ(copyFilledMap == filledMap, false);
}

template <typename T>
void	operatorNotEqualMap(T emptyMap, T filledMap, T toInsertMap)
{
	T	copyFilledMap(filledMap);

	EXPECT_EQ(emptyMap != emptyMap, false);
	EXPECT_EQ(emptyMap != filledMap, true);
	EXPECT_EQ(emptyMap != toInsertMap, true);
	EXPECT_EQ(filledMap != toInsertMap, true);

	EXPECT_EQ(filledMap != copyFilledMap, false);
	EXPECT_EQ(copyFilledMap != filledMap, false);
	copyFilledMap.erase(copyFilledMap.begin());
	EXPECT_EQ(filledMap != copyFilledMap, true);
	EXPECT_EQ(copyFilledMap != filledMap, true);
}

template <typename T>
void	operatorSupEqualMap(T emptyMap, T filledMap, T toInsertMap)
{
	T	copyFilledMap(filledMap);
	T	copyBisFilledMap(filledMap);

	EXPECT_EQ(emptyMap >= emptyMap, true);
	EXPECT_EQ(emptyMap >= filledMap, false);
	EXPECT_EQ(emptyMap >= toInsertMap, false);
	EXPECT_EQ(filledMap >= toInsertMap, false);
	EXPECT_EQ(filledMap >= emptyMap, true);
	EXPECT_EQ(toInsertMap >= emptyMap, true);
	EXPECT_EQ(toInsertMap >= filledMap, true);

	EXPECT_EQ(filledMap >= copyFilledMap, true);
	EXPECT_EQ(copyFilledMap >= filledMap, true);
	copyFilledMap.erase(copyFilledMap.begin());
	EXPECT_EQ(filledMap >= copyFilledMap, false);
	EXPECT_EQ(copyFilledMap >= filledMap, true);
	copyBisFilledMap.erase(--copyBisFilledMap.end());
	EXPECT_EQ(filledMap >= copyBisFilledMap, true);
	EXPECT_EQ(copyBisFilledMap >= filledMap, false);
}

template <typename T>
void	operatorSupMap(T emptyMap, T filledMap, T toInsertMap)
{
	T	copyFilledMap(filledMap);
	T	copyBisFilledMap(filledMap);

	EXPECT_EQ(emptyMap > emptyMap, false);
	EXPECT_EQ(emptyMap > filledMap, false);
	EXPECT_EQ(emptyMap > toInsertMap, false);
	EXPECT_EQ(filledMap > toInsertMap, false);
	EXPECT_EQ(filledMap > emptyMap, true);
	EXPECT_EQ(toInsertMap > emptyMap, true);
	EXPECT_EQ(toInsertMap > filledMap, true);

	EXPECT_EQ(filledMap > copyFilledMap, false);
	EXPECT_EQ(copyFilledMap > filledMap, false);
	copyFilledMap.erase(copyFilledMap.begin());
	EXPECT_EQ(filledMap > copyFilledMap, false);
	EXPECT_EQ(copyFilledMap > filledMap, true);
	copyBisFilledMap.erase(--copyBisFilledMap.end());
	EXPECT_EQ(filledMap > copyBisFilledMap, true);
	EXPECT_EQ(copyBisFilledMap > filledMap, false);
}

template <typename T>
void	operatorInfEqualMap(T emptyMap, T filledMap, T toInsertMap)
{
	T	copyFilledMap(filledMap);
	T	copyBisFilledMap(filledMap);

	EXPECT_EQ(emptyMap <= emptyMap, true);
	EXPECT_EQ(emptyMap <= filledMap, true);
	EXPECT_EQ(emptyMap <= toInsertMap, true);
	EXPECT_EQ(filledMap <= toInsertMap, true);
	EXPECT_EQ(filledMap <= emptyMap, false);
	EXPECT_EQ(toInsertMap <= emptyMap, false);
	EXPECT_EQ(toInsertMap <= filledMap, false);

	EXPECT_EQ(filledMap <= copyFilledMap, true);
	EXPECT_EQ(copyFilledMap <= filledMap, true);
	copyFilledMap.erase(copyFilledMap.begin());
	EXPECT_EQ(filledMap <= copyFilledMap, true);
	EXPECT_EQ(copyFilledMap <= filledMap, false);
	copyBisFilledMap.erase(--copyBisFilledMap.end());
	EXPECT_EQ(filledMap <= copyBisFilledMap, false);
	EXPECT_EQ(copyBisFilledMap <= filledMap, true);
}

template <typename T>
void	operatorInfMap(T emptyMap, T filledMap, T toInsertMap)
{
	T	copyFilledMap(filledMap);
	T	copyBisFilledMap(filledMap);

	EXPECT_EQ(emptyMap < emptyMap, false);
	EXPECT_EQ(emptyMap < filledMap, true);
	EXPECT_EQ(emptyMap < toInsertMap, true);
	EXPECT_EQ(filledMap < toInsertMap, true);
	EXPECT_EQ(filledMap < emptyMap, false);
	EXPECT_EQ(toInsertMap < emptyMap, false);
	EXPECT_EQ(toInsertMap < filledMap, false);

	EXPECT_EQ(filledMap < copyFilledMap, false);
	EXPECT_EQ(copyFilledMap < filledMap, false);
	copyFilledMap.erase(copyFilledMap.begin());
	EXPECT_EQ(filledMap < copyFilledMap, true);
	EXPECT_EQ(copyFilledMap < filledMap, false);
	copyBisFilledMap.erase(--copyBisFilledMap.end());
	EXPECT_EQ(filledMap < copyBisFilledMap, false);
	EXPECT_EQ(copyBisFilledMap < filledMap, true);
}

template <typename T, typename U, typename V>
void	constructorMap(T emptyMap, T filledMap, T toInsertMap, U varX1, V varX2)
{
	T	newEmptyMap;
	EXPECT_EQ(newEmptyMap.empty(), true);
	EXPECT_EQ(emptyMap == newEmptyMap, true);

	T	copyEmptyMap(emptyMap);
	EXPECT_EQ(copyEmptyMap.empty(), true);
	EXPECT_EQ(emptyMap == copyEmptyMap, true);

	T	copyToInsertMap(toInsertMap);
	EXPECT_EQ(copyToInsertMap.empty(), false);
	EXPECT_EQ(toInsertMap == copyToInsertMap, true);

	T	newFilledMap(filledMap.begin(), filledMap.end());
	EXPECT_EQ(newFilledMap.size(), (size_t)10);
	EXPECT_EQ(filledMap == newFilledMap, true);

	T	otherFilledMap(++filledMap.begin(), --filledMap.end());
	EXPECT_EQ(otherFilledMap.size(), (size_t)8);
	for (int i = 1; i < 9; i++)
		EXPECT_EQ(otherFilledMap[varX1[i]], varX2[i]);
}

template <typename T>
void	operatorEgalMap(T emptyMap, T filledMap, T toInsertMap)
{
	T newMap;

	newMap = filledMap;
	EXPECT_EQ(newMap.empty(), false);
	EXPECT_EQ(newMap == filledMap, true);

	newMap = emptyMap;
	EXPECT_EQ(newMap.empty(), true);
	EXPECT_EQ(newMap == filledMap, false);
	EXPECT_EQ(newMap == emptyMap, true);

	newMap = toInsertMap;
	EXPECT_EQ(newMap.empty(), false);
	EXPECT_EQ(newMap == emptyMap, false);
	EXPECT_EQ(newMap == toInsertMap, true);
}

template <typename T, typename U, typename V>
void	nonMemberSwapMap(
	T emptyMap, T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2, void (*swap)(T& x, T& y))
{
	swap(emptyMap, filledMap);
	EXPECT_EQ(emptyMap.empty(), false);
	EXPECT_EQ(filledMap.empty(), true);
	for (int i = 0; i < 10; i++)
		EXPECT_EQ(emptyMap[varX1[i]], varX2[i]);

	swap(emptyMap, toInsertMap);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(emptyMap[varY1[i]], varY2[i]);
}

template <typename T, typename U, typename V, typename W>
void	insertHintMap(T emptyMap, U varX1, V varX2, W pairType)
{
	(void)pairType;

	emptyMap.insert(W(varX1[0], varX2[0]));
	emptyMap.insert(emptyMap.end(), W(varX1[4], varX2[4]));

	emptyMap.insert(emptyMap.begin(), W(varX1[1], varX2[1]));
	emptyMap.insert(emptyMap.begin(), W(varX1[2], varX2[2]));
	emptyMap.insert(emptyMap.begin(), W(varX1[3], varX2[3]));
	
	typename T::iterator it;
	int i;
	for (it = emptyMap.begin(), i = 0; it != emptyMap.end(); ++it, i++)
	{
		EXPECT_EQ(it->first, varX1[i]);
		EXPECT_EQ(it->second, varX2[i]);
	}
}

template <typename T, typename U, typename V, typename W>
void	insertHintTrickyMap(T emptyMap, U varX1, V varX2, W pairType)
{
	(void)pairType;
	emptyMap[varX1[4]];

	emptyMap.insert(W(varX1[0], varX2[0]));
	emptyMap.insert(emptyMap.end(), W(varX1[3], varX2[3]));

	emptyMap.insert(emptyMap.begin(), W(varX1[3], varX2[1]));
	emptyMap.insert(emptyMap.begin(), W(varX1[1], varX2[1]));
	emptyMap.insert(emptyMap.begin(), W(varX1[2], varX2[2]));
	
	typename T::iterator it;
	int i;
	for (it = emptyMap.begin(), i = 0; i < 5; ++it, i++)
	{
		EXPECT_EQ(it->first, varX1[i]);
		if (i < 4)
			EXPECT_EQ(it->second, varX2[i]);
	}
}
