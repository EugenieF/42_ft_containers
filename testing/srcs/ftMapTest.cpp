#include "mainTests.hpp"

/*****************************************************************/
/*       			           TEST      		        	     */
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
void	maxSizeMap(T emptyMap, T filledMap, T toInsertMap)
{
	(void)filledMap;
	(void)toInsertMap;
	std::cout << "MaxSize: " << emptyMap.max_size() << std::endl;
	// EXPECT_EQ(emptyMap.max_size(), (size_t)(115292150460684697 * sizeof(int)));
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
	(void)emptyMap;	// test with emptyMap

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

/*****************************************************************/
/*       			     RUN STD::MAP TEST      			     */
/*****************************************************************/

TEST_F(stdMapTest, initSizeMap)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                        ";
	std::cout << "          [ STD::MAP ] " << RESET << std::endl;

	initSizeMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	initSizeMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	initSizeMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	initSizeMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	initSizeMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(stdMapTest, isEmptyMap)
{
	isEmptyMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	isEmptyMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	isEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	isEmptyMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	isEmptyMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(stdMapTest, insertInEmptyMap)
{
	insertInEmptyMap(intIntEmptyMap, intX, intX, std::pair<int, int>(0,0));
	insertInEmptyMap(intFloatEmptyMap, intX, floatX, std::pair<int, float>(0,0.0f));
	insertInEmptyMap(intDoubleEmptyMap, intX, doubleX, std::pair<int, double>(0,0.0));
	insertInEmptyMap(intStringEmptyMap, intX, stringX, std::pair<int, std::string>(0,""));
	insertInEmptyMap(stringStringEmptyMap, stringX, stringX, std::pair<std::string, std::string>("",""));
}

TEST_F(stdMapTest, insertExistingKeyInFilledMap)
{
	insertExistingKeyInFilledMap(intIntFilledMap, intX, intX, std::pair<int, int>(0,0));
	insertExistingKeyInFilledMap(intFloatFilledMap, intX, floatX, std::pair<int, float>(0,0.0f));
	insertExistingKeyInFilledMap(intDoubleFilledMap, intX, doubleX, std::pair<int, double>(0,0.0));
	insertExistingKeyInFilledMap(intStringFilledMap, intX, stringX, std::pair<int, std::string>(0,""));
	insertExistingKeyInFilledMap(stringStringFilledMap, stringX, stringX, std::pair<std::string, std::string>("",""));
}

TEST_F(stdMapTest, eraseOneInFilledMap)
{
	eraseOneInFilledMap(intIntFilledMap, intX);
	eraseOneInFilledMap(intFloatFilledMap,intX);
	eraseOneInFilledMap(intDoubleFilledMap, intX);
	eraseOneInFilledMap(intStringFilledMap, intX);
	eraseOneInFilledMap(stringStringFilledMap, stringX);
}

TEST_F(stdMapTest, eraseOneInEmptyMap)
{
	eraseOneInEmptyMap(intIntEmptyMap, intX);
	eraseOneInEmptyMap(intFloatEmptyMap, intX);
	eraseOneInEmptyMap(intDoubleEmptyMap, intX);
	eraseOneInEmptyMap(intStringEmptyMap, intX);
	eraseOneInEmptyMap(stringStringEmptyMap, stringX);
}

TEST_F(stdMapTest, insertRangeInEmptyMap)
{
	insertRangeInEmptyMap(intIntEmptyMap, intIntFilledMap, intX, intX);
	insertRangeInEmptyMap(intFloatEmptyMap, intFloatFilledMap, intX, floatX);
	insertRangeInEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intX, doubleX);
	insertRangeInEmptyMap(intStringEmptyMap, intStringFilledMap, intX, stringX);
	insertRangeInEmptyMap(stringStringEmptyMap, stringStringFilledMap, stringX, stringX);
}

TEST_F(stdMapTest, insertRangeInFilledMap)
{
	insertRangeInFilledMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	insertRangeInFilledMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	insertRangeInFilledMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	insertRangeInFilledMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	insertRangeInFilledMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, eraseRangeInFilledMap)
{
	eraseRangeInFilledMap(intIntFilledMap);
	eraseRangeInFilledMap(intFloatFilledMap);
	eraseRangeInFilledMap(intDoubleFilledMap);
	eraseRangeInFilledMap(intStringFilledMap);
	eraseRangeInFilledMap(stringStringFilledMap);
}

TEST_F(stdMapTest, clearMap)
{
	clearMap(intIntEmptyMap, intIntFilledMap);
	clearMap(intFloatEmptyMap, intFloatFilledMap);
	clearMap(intDoubleEmptyMap, intDoubleFilledMap);
	clearMap(intStringEmptyMap, intStringFilledMap);
	clearMap(stringStringEmptyMap, stringStringFilledMap);
}

TEST_F(stdMapTest, swapMap)
{
	swapMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	swapMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	swapMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	swapMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	swapMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

// TEST_F(stdMapTest, maxSizeMap)
// {
// 	maxSizeMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
// 	maxSizeMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
// 	maxSizeMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
// 	maxSizeMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
// }

TEST_F(stdMapTest, findMap)
{
	findMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	findMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	findMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	findMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	findMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, constFindMap)
{
	constFindMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constFindMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constFindMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constFindMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constFindMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, countMap)
{
	countMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY);
	countMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY);
	countMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY);
	countMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY);
	countMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY);
}

TEST_F(stdMapTest, lowerBoundMap)
{
	lowerBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	lowerBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	lowerBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	lowerBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	lowerBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, constLowerBoundMap)
{
	constLowerBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constLowerBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constLowerBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constLowerBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constLowerBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, upperBoundMap)
{
	upperBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	upperBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	upperBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	upperBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	upperBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, constUpperBoundMap)
{
	constUpperBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constUpperBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constUpperBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constUpperBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constUpperBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, equalRangeMap)
{
	equalRangeMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	equalRangeMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	equalRangeMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	equalRangeMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	equalRangeMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, constEqualRangeMap)
{
	constEqualRangeMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constEqualRangeMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constEqualRangeMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constEqualRangeMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constEqualRangeMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, iteratorMap)
{
	iteratorMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	iteratorMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	iteratorMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	iteratorMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	iteratorMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, constIteratorMap)
{
	constIteratorMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constIteratorMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constIteratorMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constIteratorMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constIteratorMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(stdMapTest, operatorEqualMap)
{
	operatorEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(stdMapTest, operatorNotEqualMap)
{
	operatorNotEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorNotEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorNotEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorNotEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorNotEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(stdMapTest, operatorSupEqualMap)
{
	operatorSupEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorSupEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorSupEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorSupEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorSupEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(stdMapTest, operatorSupMap)
{
	operatorSupMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorSupMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorSupMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorSupMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorSupMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(stdMapTest, operatorInfEqualMap)
{
	operatorInfEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorInfEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorInfEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorInfEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorInfEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(stdMapTest, operatorInfMap)
{
	operatorInfMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorInfMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorInfMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorInfMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorInfMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(stdMapTest, constructorMap)
{
	constructorMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intX);
	constructorMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, floatX);
	constructorMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, doubleX);
	constructorMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, stringX);
	constructorMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringX);
}

TEST_F(stdMapTest, operatorEgalMap)
{
	operatorEgalMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorEgalMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorEgalMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorEgalMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorEgalMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(stdMapTest, nonMemberSwapMap)
{
	nonMemberSwapMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY, &std::swap);
	nonMemberSwapMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY, &std::swap);
	nonMemberSwapMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY, &std::swap);
	nonMemberSwapMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY, &std::swap);
	nonMemberSwapMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY, &std::swap);
}

/*****************************************************************/
/*       			      RUN FT::MAP TEST      			     */
/*****************************************************************/

TEST_F(ftMapTest, initSizeMap)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                        ";
	std::cout << "           [ FT::MAP ] " << RESET << std::endl;

	initSizeMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	initSizeMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	initSizeMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	initSizeMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	initSizeMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(ftMapTest, isEmptyMap)
{
	isEmptyMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	isEmptyMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	isEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	isEmptyMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	isEmptyMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(ftMapTest, insertInEmptyMap)
{
	insertInEmptyMap(intIntEmptyMap, intX, intX, ft::pair<int, int>(0,0));
	insertInEmptyMap(intFloatEmptyMap, intX, floatX, ft::pair<int, float>(0,0.0f));
	insertInEmptyMap(intDoubleEmptyMap, intX, doubleX, ft::pair<int, double>(0,0.0));
	insertInEmptyMap(intStringEmptyMap, intX, stringX, ft::pair<int, std::string>(0,""));
	insertInEmptyMap(stringStringEmptyMap, stringX, stringX, ft::pair<std::string, std::string>("",""));
}

TEST_F(ftMapTest, insertExistingKeyInFilledMap)
{
	insertExistingKeyInFilledMap(intIntFilledMap, intX, intX, ft::pair<int, int>(0,0));
	insertExistingKeyInFilledMap(intFloatFilledMap, intX, floatX, ft::pair<int, float>(0,0.0f));
	insertExistingKeyInFilledMap(intDoubleFilledMap, intX, doubleX, ft::pair<int, double>(0,0.0));
	insertExistingKeyInFilledMap(intStringFilledMap, intX, stringX, ft::pair<int, std::string>(0,""));
	insertExistingKeyInFilledMap(stringStringFilledMap, stringX, stringX, ft::pair<std::string, std::string>("",""));
}

TEST_F(ftMapTest, eraseOneInFilledMap)
{
	eraseOneInFilledMap(intIntFilledMap, intX);
	eraseOneInFilledMap(intFloatFilledMap, intX);
	eraseOneInFilledMap(intDoubleFilledMap, intX);
	eraseOneInFilledMap(intStringFilledMap, intX);
	eraseOneInFilledMap(stringStringFilledMap, stringX);
}

TEST_F(ftMapTest, eraseOneInEmptyMap)
{
	eraseOneInEmptyMap(intIntEmptyMap, intX);
	eraseOneInEmptyMap(intFloatEmptyMap, intX);
	eraseOneInEmptyMap(intDoubleEmptyMap, intX);
	eraseOneInEmptyMap(intStringEmptyMap, intX);
	eraseOneInEmptyMap(stringStringEmptyMap, stringX);
}

TEST_F(ftMapTest, insertRangeInEmptyMap)
{
	insertRangeInEmptyMap(intIntEmptyMap, intIntFilledMap, intX, intX);
	insertRangeInEmptyMap(intFloatEmptyMap, intFloatFilledMap, intX, floatX);
	insertRangeInEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intX, doubleX);
	insertRangeInEmptyMap(intStringEmptyMap, intStringFilledMap, intX, stringX);
	insertRangeInEmptyMap(stringStringEmptyMap, stringStringFilledMap, stringX, stringX);
}

TEST_F(ftMapTest, insertRangeInFilledMap)
{
	insertRangeInFilledMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	insertRangeInFilledMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	insertRangeInFilledMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	insertRangeInFilledMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	insertRangeInFilledMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, eraseRangeInFilledMap)
{
	eraseRangeInFilledMap(intIntFilledMap);
	eraseRangeInFilledMap(intFloatFilledMap);
	eraseRangeInFilledMap(intDoubleFilledMap);
	eraseRangeInFilledMap(intStringFilledMap);
	eraseRangeInFilledMap(stringStringFilledMap);
}


TEST_F(ftMapTest, clearMap)
{
	clearMap(intIntEmptyMap, intIntFilledMap);
	clearMap(intFloatEmptyMap, intFloatFilledMap);
	clearMap(intDoubleEmptyMap, intDoubleFilledMap);
	clearMap(intStringEmptyMap, intStringFilledMap);
	clearMap(stringStringEmptyMap, stringStringFilledMap);
}

TEST_F(ftMapTest, swapMap)
{
	swapMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	swapMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	swapMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	swapMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	swapMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

// TEST_F(ftMapTest, maxSizeMap)
// {
// 	maxSizeMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
// 	maxSizeMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
// 	maxSizeMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
// 	maxSizeMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
// }

TEST_F(ftMapTest, findMap)
{
	findMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	findMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	findMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	findMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	findMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, constFindMap)
{
	constFindMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constFindMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constFindMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constFindMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constFindMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, countMap)
{
	countMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY);
	countMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY);
	countMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY);
	countMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY);
	countMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY);
}

TEST_F(ftMapTest, lowerBoundMap)
{
	lowerBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	lowerBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	lowerBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	lowerBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	lowerBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, constLowerBoundMap)
{
	constLowerBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constLowerBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constLowerBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constLowerBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constLowerBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, upperBoundMap)
{
	upperBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	upperBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	upperBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	upperBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	upperBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, constUpperBoundMap)
{
	constUpperBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constUpperBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constUpperBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constUpperBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constUpperBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, equalRangeMap)
{
	equalRangeMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	equalRangeMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	equalRangeMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	equalRangeMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	equalRangeMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, constEqualRangeMap)
{
	constEqualRangeMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constEqualRangeMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constEqualRangeMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constEqualRangeMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constEqualRangeMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, iteratorMap)
{
	iteratorMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	iteratorMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	iteratorMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	iteratorMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	iteratorMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, constIteratorMap)
{
	constIteratorMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constIteratorMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constIteratorMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constIteratorMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constIteratorMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
}

TEST_F(ftMapTest, operatorEqualMap)
{
	operatorEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(ftMapTest, operatorNotEqualMap)
{
	operatorNotEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorNotEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorNotEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorNotEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorNotEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(ftMapTest, operatorSupEqualMap)
{
	operatorSupEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorSupEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorSupEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorSupEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorSupEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(ftMapTest, operatorSupMap)
{
	operatorSupMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorSupMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorSupMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorSupMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorSupMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(ftMapTest, operatorInfEqualMap)
{
	operatorInfEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorInfEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorInfEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorInfEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorInfEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(ftMapTest, operatorInfMap)
{
	operatorInfMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorInfMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorInfMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorInfMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorInfMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(ftMapTest, constructorMap)
{
	constructorMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intX);
	constructorMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, floatX);
	constructorMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, doubleX);
	constructorMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, stringX);
	constructorMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringX);
}

TEST_F(ftMapTest, operatorEgalMap)
{
	operatorEgalMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorEgalMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorEgalMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorEgalMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorEgalMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
}

TEST_F(ftMapTest, nonMemberSwapMap)
{
	nonMemberSwapMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY, &ft::swap);
	nonMemberSwapMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY, &ft::swap);
	nonMemberSwapMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY, &ft::swap);
	nonMemberSwapMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY, &ft::swap);
	nonMemberSwapMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY, &ft::swap);
}
