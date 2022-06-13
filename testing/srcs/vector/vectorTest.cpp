#include "../mainTests.hpp"

/**************************************************************/
/*                 		   VECTOR TEST                        */
/**************************************************************/

template <typename T>
void	initSizeVector(T emptyVector, T filledVector, T toInsertVector)
{
	EXPECT_EQ(emptyVector.size(), (size_t)0);
	EXPECT_EQ(filledVector.size(), (size_t)10);
	EXPECT_EQ(toInsertVector.size(), (size_t)5);
}

template <typename T>
void	isEmptyVector(T emptyVector, T filledVector, T toInsertVector)
{
	EXPECT_EQ(emptyVector.empty(), true);
	EXPECT_EQ(filledVector.empty(), false);
	EXPECT_EQ(toInsertVector.empty(), false);
}

template <typename T, typename U>
void	pushBackInEmptyVector(T emptyVector, U varX)
{
	for (int i = 0; i < 10; i++)
	{
		emptyVector.push_back(varX[i]);
		EXPECT_EQ(emptyVector.back(), varX[i]);
	}
	EXPECT_EQ(emptyVector.front(), varX[0]);
}

template <typename T, typename U>
void	popBackOneInFilledVector(T filledVector, U varX)
{
	filledVector.pop_back();
	EXPECT_EQ(filledVector.back(), varX[8]);
	EXPECT_EQ(filledVector.size(), (size_t)9);
}

template <typename T, typename U>
void	insertInEmptyVector(T emptyVector, U varX)
{
	size_t	expectedSize = (size_t)10;

	for (int i = 0; i < 10; i++)
	{
		emptyVector.insert(emptyVector.end(), varX[i]);
		EXPECT_EQ(emptyVector.back(), varX[i]);
	}
	EXPECT_EQ(emptyVector.size(), expectedSize);
}

template <typename T, typename U>
void	insertWithSizeInEmptyVector(T emptyVector, U varX)
{
	size_t	expectedSize = (size_t)6;

	emptyVector.insert(emptyVector.end(), 6, varX[3]);
	EXPECT_EQ(emptyVector.back(), varX[3]);
	EXPECT_EQ(emptyVector.front(), varX[3]);
	EXPECT_EQ(emptyVector.size(), expectedSize);
}

template <typename T, typename U>
void	insertRangeInEmptyVector(T emptyVector, T filledVector, U varX)
{
	size_t	expectedSize = (size_t)10;

	emptyVector.insert(emptyVector.begin(), filledVector.begin(), filledVector.end());
	EXPECT_EQ(emptyVector.size(), expectedSize);
	EXPECT_EQ(emptyVector.front(), varX[0]);
	EXPECT_EQ(emptyVector.back(), varX[9]);
}

template <typename T, typename U>
void	insertRangeInFilledVector(T filledVector, T toInsertVector, U varX, U varY)
{
	size_t	expectedSize = (size_t)15;

	filledVector.insert(filledVector.end(), toInsertVector.begin(), toInsertVector.end());
	EXPECT_EQ(filledVector.size(), expectedSize);
	EXPECT_EQ(filledVector.front(), varX[0]);
	EXPECT_EQ(filledVector.back(), varY[4]);
}

template <typename T, typename U>
void	eraseInFilledVector(T filledVector, U varX)
{
	filledVector.erase(filledVector.begin() + 3);
	EXPECT_EQ(filledVector.size(), (size_t)9);

	for (int i = 0; i < 3; i++)
		filledVector.erase(filledVector.begin());

	EXPECT_EQ(filledVector.size(), (size_t)6);
	EXPECT_EQ(filledVector.front(), varX[4]);
	EXPECT_EQ(filledVector.back(), varX[9]);
}

template <typename T, typename U>
void	eraseRangeInFilledVector(T filledVector, T toInsertVector, U varX)
{
	filledVector.erase(filledVector.begin(), filledVector.begin() + 2);
	EXPECT_EQ(filledVector.size(), (size_t)8);
	EXPECT_EQ(filledVector.front(), varX[2]);

	filledVector.erase(filledVector.begin() + 4, filledVector.end());
	EXPECT_EQ(filledVector.size(), (size_t)4);
	EXPECT_EQ(filledVector.back(), varX[5]);

	filledVector.erase(filledVector.begin(), filledVector.begin() + 4);
	EXPECT_EQ(filledVector.size(), (size_t)0);

	toInsertVector.erase(toInsertVector.begin(), toInsertVector.end());
	EXPECT_EQ(toInsertVector.size(), (size_t)0);
}

template <typename T>
void	clearVector(T emptyVector, T filledVector)
{
	emptyVector.clear();
	EXPECT_EQ(emptyVector.size(), (size_t)0);

	filledVector.clear();
	EXPECT_EQ(filledVector.size(), (size_t)0);
}

template <typename T, typename U>
void	swapVector(T emptyVector, T filledVector, T toInsertVector, U varX, U varY)
{
	emptyVector.swap(filledVector);
	for (int i = 0; i < 10; i++)
		EXPECT_EQ(emptyVector[i], varX[i]);
	EXPECT_EQ(emptyVector.size(), (size_t)10);
	EXPECT_EQ(filledVector.size(), (size_t)0);

	filledVector.swap(toInsertVector);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(filledVector[i], varY[i]);
	EXPECT_EQ(filledVector.size(), (size_t)5);
	EXPECT_EQ(toInsertVector.size(), (size_t)0);
}

template <typename T, typename U>
void	assignValueVector(T emptyVector, T filledVector, U varX, U varY)
{
	emptyVector.assign(15, varX[7]);
	EXPECT_EQ(emptyVector.size(), (size_t)15);
	for (int i = 0; i < 15; i++)
		EXPECT_EQ(emptyVector[i], varX[7]);

	filledVector.assign(9, varY[4]);
	EXPECT_EQ(filledVector.size(), (size_t)9);
	for (int i = 0; i < 9; i++)
		EXPECT_EQ(filledVector[i], varY[4]);
}

template <typename T, typename U>
void	assignRangeVector(T emptyVector, T filledVector, T toInsertVector, U varX, U varY)
{
	emptyVector.assign(filledVector.begin() + 3, filledVector.begin() + 7);
	EXPECT_EQ(emptyVector.size(), (size_t)4);
	for (int i = 0; i < 4; i++)
		EXPECT_EQ(emptyVector[i], varX[i + 3]);

	filledVector.assign(toInsertVector.begin() + 1, toInsertVector.begin() + 4);
	EXPECT_EQ(filledVector.size(), (size_t)3);
	for (int i = 0; i < 3; i++)
		EXPECT_EQ(filledVector[i], varY[i + 1]);
}

template <typename T>
void	maxSizeVector(T emptyVector, T filledVector, T toInsertVector, size_t expectedSize)
{
	EXPECT_EQ(emptyVector.max_size(), expectedSize);
	EXPECT_EQ(filledVector.max_size(), expectedSize);
	EXPECT_EQ(toInsertVector.max_size(), expectedSize);
}

template <typename T, typename U>
void	accessElemVector(T emptyVector, T filledVector, T toInsertVector, U varX, U varY)
{
	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(filledVector[i], varX[i]);
		EXPECT_EQ(filledVector.at(i), varX[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(toInsertVector[i], varY[i]);
		EXPECT_EQ(toInsertVector.at(i), varY[i]);
	}

	EXPECT_ANY_THROW(emptyVector.at(0));
	EXPECT_ANY_THROW(emptyVector.at(10));

	EXPECT_ANY_THROW(filledVector.at(10));
	EXPECT_ANY_THROW(filledVector.at(100));

	EXPECT_ANY_THROW(toInsertVector.at(5));
	EXPECT_ANY_THROW(toInsertVector.at(55));
}

template <typename T, typename U>
void	iteratorVector(T filledVector, T toInsertVector, U varX, U varY)
{
	typename T::iterator			it;
	typename T::reverse_iterator	rev_it;

	it = filledVector.begin();
	for (int i = 0; i < 10; i++, it++)
		EXPECT_EQ(*it, varX[i]);
	it = filledVector.end();
	it--;
	for (int i = 9; i <= 0; i--, it--)
		EXPECT_EQ(*it, varX[i]);

	rev_it = filledVector.rbegin();
	for (int i = 9; i <= 0; i--, rev_it++)
		EXPECT_EQ(*rev_it, varX[i]);
	rev_it = filledVector.rend();
	rev_it--;
	for (int i = 0; i < 9; i++, rev_it--)
		EXPECT_EQ(*rev_it, varX[i]);

	it = toInsertVector.begin();
	for (int i = 0; i < 5; i++, it++)
		EXPECT_EQ(*it, varY[i]);
	it = toInsertVector.end();
	it--;
	for (int i = 4; i <= 0; i++, it--)
		EXPECT_EQ(*it, varY[i]);

	rev_it = toInsertVector.rbegin();
	for (int i = 4; i <= 0; i--, rev_it++)
		EXPECT_EQ(*rev_it, varY[i]);
	rev_it = toInsertVector.rend();
	rev_it--;
	for (int i = 0; i < 4; i++, rev_it--)
		EXPECT_EQ(*rev_it, varY[i]);
}

template <typename T, typename U>
void	constIteratorVector(T filledVector, T toInsertVector, U varX, U varY)
{
	typename T::const_iterator			const_it;
	typename T::const_reverse_iterator	const_rev_it;

	const_it = filledVector.begin();
	for (int i = 0; i < 10; i++, const_it++)
		EXPECT_EQ(*const_it, varX[i]);
	const_it = filledVector.end();
	const_it--;
	for (int i = 9; i <= 0; i--, const_it--)
		EXPECT_EQ(*const_it, varX[i]);

	const_rev_it = filledVector.rbegin();
	for (int i = 9; i <= 0; i--, const_rev_it++)
		EXPECT_EQ(*const_rev_it, varX[i]);
	const_rev_it = filledVector.rend();
	const_rev_it--;
	for (int i = 0; i < 9; i++, const_rev_it--)
		EXPECT_EQ(*const_rev_it, varX[i]);

	const_it = toInsertVector.begin();
	for (int i = 0; i < 5; i++, const_it++)
		EXPECT_EQ(*const_it, varY[i]);
	const_it = toInsertVector.end();
	const_it--;
	for (int i = 4; i <= 0; i++, const_it--)
		EXPECT_EQ(*const_it, varY[i]);

	const_rev_it = toInsertVector.rbegin();
	for (int i = 4; i <= 0; i--, const_rev_it++)
		EXPECT_EQ(*const_rev_it, varY[i]);
	const_rev_it = toInsertVector.rend();
	const_rev_it--;
	for (int i = 0; i < 4; i++, const_rev_it--)
		EXPECT_EQ(*const_rev_it, varY[i]);
}

template <typename T>
void	operatorEqualVector(T emptyVector, T filledVector, T toInsertVector)
{
	T	copyFilledVector(filledVector);

	EXPECT_EQ(emptyVector == emptyVector, true);
	EXPECT_EQ(emptyVector == filledVector, false);
	EXPECT_EQ(emptyVector == toInsertVector, false);
	EXPECT_EQ(filledVector == toInsertVector, false);

	EXPECT_EQ(filledVector == copyFilledVector, true);
	EXPECT_EQ(copyFilledVector == filledVector, true);
	copyFilledVector.erase(copyFilledVector.begin());
	EXPECT_EQ(filledVector == copyFilledVector, false);
	EXPECT_EQ(copyFilledVector == filledVector, false);
}

template <typename T>
void	operatorNotEqualVector(T emptyVector, T filledVector, T toInsertVector)
{
	T	copyFilledVector(filledVector);

	EXPECT_EQ(emptyVector != emptyVector, false);
	EXPECT_EQ(emptyVector != filledVector, true);
	EXPECT_EQ(emptyVector != toInsertVector, true);
	EXPECT_EQ(filledVector != toInsertVector, true);

	EXPECT_EQ(filledVector != copyFilledVector, false);
	EXPECT_EQ(copyFilledVector != filledVector, false);
	copyFilledVector.erase(copyFilledVector.begin());
	EXPECT_EQ(filledVector != copyFilledVector, true);
	EXPECT_EQ(copyFilledVector != filledVector, true);
}

template <typename T>
void	operatorSupEqualVector(T emptyVector, T filledVector, T toInsertVector)
{
	T	copyFilledVector(filledVector);
	T	copyBisFilledVector(filledVector);

	EXPECT_EQ(emptyVector >= emptyVector, true);
	EXPECT_EQ(emptyVector >= filledVector, false);
	EXPECT_EQ(emptyVector >= toInsertVector, false);
	EXPECT_EQ(filledVector >= toInsertVector, false);
	EXPECT_EQ(filledVector >= emptyVector, true);
	EXPECT_EQ(toInsertVector >= emptyVector, true);
	EXPECT_EQ(toInsertVector >= filledVector, true);

	EXPECT_EQ(filledVector >= copyFilledVector, true);
	EXPECT_EQ(copyFilledVector >= filledVector, true);
	copyFilledVector.erase(copyFilledVector.begin());
	EXPECT_EQ(filledVector >= copyFilledVector, false);
	EXPECT_EQ(copyFilledVector >= filledVector, true);
	copyBisFilledVector.erase(copyBisFilledVector.end() - 1);
	EXPECT_EQ(filledVector >= copyBisFilledVector, true);
	EXPECT_EQ(copyBisFilledVector >= filledVector, false);
}

template <typename T>
void	operatorSupVector(T emptyVector, T filledVector, T toInsertVector)
{
	T	copyFilledVector(filledVector);
	T	copyBisFilledVector(filledVector);

	EXPECT_EQ(emptyVector > emptyVector, false);
	EXPECT_EQ(emptyVector > filledVector, false);
	EXPECT_EQ(emptyVector > toInsertVector, false);
	EXPECT_EQ(filledVector > toInsertVector, false);
	EXPECT_EQ(filledVector > emptyVector, true);
	EXPECT_EQ(toInsertVector > emptyVector, true);
	EXPECT_EQ(toInsertVector > filledVector, true);

	EXPECT_EQ(filledVector > copyFilledVector, false);
	EXPECT_EQ(copyFilledVector > filledVector, false);
	copyFilledVector.erase(copyFilledVector.begin());
	EXPECT_EQ(filledVector > copyFilledVector, false);
	EXPECT_EQ(copyFilledVector > filledVector, true);
	copyBisFilledVector.erase(copyBisFilledVector.end() - 1);
	EXPECT_EQ(filledVector > copyBisFilledVector, true);
	EXPECT_EQ(copyBisFilledVector > filledVector, false);
}

template <typename T>
void	operatorInfEqualVector(T emptyVector, T filledVector, T toInsertVector)
{
	T	copyFilledVector(filledVector);
	T	copyBisFilledVector(filledVector);

	EXPECT_EQ(emptyVector <= emptyVector, true);
	EXPECT_EQ(emptyVector <= filledVector, true);
	EXPECT_EQ(emptyVector <= toInsertVector, true);
	EXPECT_EQ(filledVector <= toInsertVector, true);
	EXPECT_EQ(filledVector <= emptyVector, false);
	EXPECT_EQ(toInsertVector <= emptyVector, false);
	EXPECT_EQ(toInsertVector <= filledVector, false);

	EXPECT_EQ(filledVector <= copyFilledVector, true);
	EXPECT_EQ(copyFilledVector <= filledVector, true);
	copyFilledVector.erase(copyFilledVector.begin());
	EXPECT_EQ(filledVector <= copyFilledVector, true);
	EXPECT_EQ(copyFilledVector <= filledVector, false);
	copyBisFilledVector.erase(copyBisFilledVector.end() - 1);
	EXPECT_EQ(filledVector <= copyBisFilledVector, false);
	EXPECT_EQ(copyBisFilledVector <= filledVector, true);
}

template <typename T>
void	operatorInfVector(T emptyVector, T filledVector, T toInsertVector)
{
	T	copyFilledVector(filledVector);
	T	copyBisFilledVector(filledVector);

	EXPECT_EQ(emptyVector < emptyVector, false);
	EXPECT_EQ(emptyVector < filledVector, true);
	EXPECT_EQ(emptyVector < toInsertVector, true);
	EXPECT_EQ(filledVector < toInsertVector, true);
	EXPECT_EQ(filledVector < emptyVector, false);
	EXPECT_EQ(toInsertVector < emptyVector, false);
	EXPECT_EQ(toInsertVector < filledVector, false);

	EXPECT_EQ(filledVector < copyFilledVector, false);
	EXPECT_EQ(copyFilledVector < filledVector, false);
	copyFilledVector.erase(copyFilledVector.begin());
	EXPECT_EQ(filledVector < copyFilledVector, true);
	EXPECT_EQ(copyFilledVector < filledVector, false);
	copyBisFilledVector.erase(copyBisFilledVector.end() - 1);
	EXPECT_EQ(filledVector < copyBisFilledVector, false);
	EXPECT_EQ(copyBisFilledVector < filledVector, true);
}

template <typename T, typename U>
void	constructorVector(T emptyVector, T filledVector, T toInsertVector, U varX)
{
	T	newEmptyVector;
	EXPECT_EQ(newEmptyVector.empty(), true);
	EXPECT_EQ(emptyVector == newEmptyVector, true);

	T	copyEmptyVector(emptyVector);
	EXPECT_EQ(copyEmptyVector.empty(), true);
	EXPECT_EQ(emptyVector == copyEmptyVector, true);

	T	copyToInsertVector(toInsertVector);
	EXPECT_EQ(copyToInsertVector.empty(), false);
	EXPECT_EQ(toInsertVector == copyToInsertVector, true);

	T	newVector((size_t)15, varX[7]);
	EXPECT_EQ(newVector.size(), (size_t)15);
	for (int i = 0; i < 15; i++)
		EXPECT_EQ(newVector[i], varX[7]);

	T	newFilledVector(filledVector.begin(), filledVector.end());
	EXPECT_EQ(newFilledVector.size(), (size_t)10);
	EXPECT_EQ(filledVector == newFilledVector, true);

	T	otherFilledVector(filledVector.begin() + 3, filledVector.end() - 3);
	EXPECT_EQ(otherFilledVector.size(), (size_t)4);
	for (int i = 0, j = 3; i < 4; i++, j++)
		EXPECT_EQ(otherFilledVector[i], varX[j]);
}

template <typename T>
void	operatorEgalVector(T emptyVector, T filledVector, T toInsertVector)
{
	T newVector;

	newVector = filledVector;
	EXPECT_EQ(newVector.empty(), false);
	EXPECT_EQ(newVector == filledVector, true);

	newVector = emptyVector;
	EXPECT_EQ(newVector.empty(), true);
	EXPECT_EQ(newVector == filledVector, false);
	EXPECT_EQ(newVector == emptyVector, true);

	newVector = toInsertVector;
	EXPECT_EQ(newVector.empty(), false);
	EXPECT_EQ(newVector == emptyVector, false);
	EXPECT_EQ(newVector == toInsertVector, true);
}

template <typename T, typename U>
void	nonMemberSwapVector(
	T emptyVector, T filledVector, T toInsertVector, U varX, U varY, void (*swap)(T& x, T& y))
{
	swap(emptyVector, filledVector);
	EXPECT_EQ(emptyVector.empty(), false);
	EXPECT_EQ(filledVector.empty(), true);
	for (int i = 0; i < 10; i++)
		EXPECT_EQ(emptyVector[i], varX[i]);

	swap(emptyVector, toInsertVector);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(emptyVector[i], varY[i]);
}

template <typename T, typename U>
void	resizeVector(T emptyVector, T filledVector, T toInsertVector, U varX, U varY)
{
	emptyVector.resize(4, varX[9]);
	EXPECT_EQ(emptyVector.size(), (size_t)4);
	for (int i = 0; i < 4; i++)
		EXPECT_EQ(emptyVector[i], varX[9]);

	filledVector.resize(6, varY[3]);
	EXPECT_EQ(filledVector.size(), (size_t)6);
	for (int i = 0; i < 6; i++)
		EXPECT_EQ(filledVector[i], varX[i]);

	toInsertVector.resize(10, varX[1]);
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			EXPECT_EQ(toInsertVector[i], varY[i]);
		else
			EXPECT_EQ(toInsertVector[i], varX[1]);
	}
}
