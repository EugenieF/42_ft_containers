#include "mainTests.hpp"

template < class T, class U >
void	pushBackAndBackTest(T vector, U x, U y)
{
	U firstElem = x + y;
	for (int i = 1; i < 6; i++)
	{
		x += y;
		vector.push_back(x);
		EXPECT_EQ(vector.back(), x);
	}
	EXPECT_EQ(vector.front(), firstElem);
}

template < class T, class U >
void	popBackAndBackTest(T vector, U x, U y)
{
	for (int i = 1; i < 10; i++)
	{
		x += y;
		vector.push_back(x);
	}
	EXPECT_EQ(vector.back(), x);
	for (int i = 1; i < 5; i++)
	{
		x -= y;
		vector.pop_back();
	}
	EXPECT_EQ(vector.back(), x);
}

template < class T, class U >
void	sizeTest(T vector, U x)
{
	EXPECT_EQ(vector.size(), (unsigned long)0);
	vector.push_back(x);
	EXPECT_EQ(vector.size(), (unsigned long)1);
	for (int i = 2; i < 6; i++)
		vector.push_back(x);
	EXPECT_EQ(vector.size(), (unsigned long)5);
	for (int i = 6; i < 21; i++)
		vector.push_back(x);
	EXPECT_EQ(vector.size(), (unsigned long)20);
	for (int i = 21; i < 101; i++)
		vector.push_back(x);
	EXPECT_EQ(vector.size(), (unsigned long)100);
	for (int i = 1; i < 101; i++)
		vector.pop_back();
	EXPECT_EQ(vector.size(), (unsigned long)0);
}

template < class T, class U >
void	insertTestInt(T vector, U x)			// to adapt to every type !
{
	U tmp = x;
	for (int i = 1; i < 10; i++, x++)
		vector.push_back(x);
	vector.insert(vector.begin(), 3, 3);
	EXPECT_EQ(vector.front(), tmp + 2);
	EXPECT_EQ(vector.size(), (unsigned long)12);
}

template < class T, class U >
void	eraseTestInt(T vector, U x)				// to adapt to every type !
{
	U tmp = x;
	for (int i = 1; i < 10; i++, x++)
		vector.push_back(x);
	vector.erase(vector.begin(), vector.begin() + 3);
	EXPECT_EQ(vector.front(), tmp + 3);
	EXPECT_EQ(vector.size(), (unsigned long)6);
	vector.erase(vector.begin());
	EXPECT_EQ(vector.front(), tmp + 4);
	EXPECT_EQ(vector.size(), (unsigned long)5);
}

template < class T, class U >
void	emptyTest(T vector, U x)
{
	EXPECT_EQ(vector.empty(), true);
	for (int i = 1; i < 101; i++)
		vector.push_back(x);
	EXPECT_EQ(vector.empty(), false);
	for (int i = 1; i < 101; i++)
		vector.pop_back();
	EXPECT_EQ(vector.empty(), true);
	vector.push_back(x);
	EXPECT_EQ(vector.empty(), false);
}

template < class T, class U >
void	constructorTest(T vector, U x)
{
	vector.push_back(x);
	T	copy(vector);
	EXPECT_EQ(copy.back(), x);
	EXPECT_EQ(copy.size(), (unsigned long)1);
	EXPECT_EQ(copy.empty(), false);
}

/*************  Overload functions   *************/

template < class T, class U >
void	operatorEqualTest(T vector, U x)
{
	for (int i = 0; i < 30; i++)
		vector.push_back(x);
	T	copy(vector);
	EXPECT_EQ(vector == vector, true);
	EXPECT_EQ(vector == copy, true);
	copy.push_back(x);
	EXPECT_EQ(vector == copy, false);
}

template < class T, class U >
void	operatorNotEqualTest(T vector, U x)
{
	for (int i = 0; i < 30; i++)
		vector.push_back(x);
	T	copy(vector);
	EXPECT_EQ(vector != vector, false);
	EXPECT_EQ(vector != copy, false);
	copy.push_back(x);
	EXPECT_EQ(vector != copy, true);
}

template < class T, class U >
void	operatorSupEqualTest(T vector, U x)
{
	for (int i = 0; i < 30; i++)
		vector.push_back(x);
	T	copy(vector);
	EXPECT_EQ(vector >= vector, true);
	EXPECT_EQ(vector >= copy, true);
	copy.push_back(x);
	EXPECT_EQ(vector >= copy, false);
}

template < class T, class U >
void	operatorSupTest(T vector, U x)
{
	for (int i = 0; i < 30; i++)
		vector.push_back(x);
	T	copy(vector);
	EXPECT_EQ(vector > vector, false);
	EXPECT_EQ(vector > copy, false);
	copy.push_back(x);
	EXPECT_EQ(vector > copy, false);
}

template < class T, class U >
void	operatorInfEqualTest(T vector, U x)
{
	for (int i = 0; i < 30; i++)
		vector.push_back(x);
	T	copy(vector);
	EXPECT_EQ(vector <= vector, true);
	EXPECT_EQ(vector <= copy, true);
	copy.push_back(x);
	EXPECT_EQ(vector <= copy, true);
}

template < class T, class U >
void	operatorInfTest(T vector, U x)
{
	for (int i = 0; i < 30; i++)
		vector.push_back(x);
	T	copy(vector);
	EXPECT_EQ(vector < vector, false);
	EXPECT_EQ(vector < copy, false);
	copy.push_back(x);
	EXPECT_EQ(vector < copy, true);
}

template < class T, class U >
void	swapTest(T vector, U x, U y)
{
	T	vectorSwap;

	vector.insert(vector.begin(), 10, x);
	vectorSwap.insert(vectorSwap.begin(), 15, y);
	vector.swap(vectorSwap);
	EXPECT_EQ(vector.size(), (unsigned long)15);
	EXPECT_EQ(vectorSwap.size(), (unsigned long)10);
	EXPECT_EQ(vector.front(), y);
	EXPECT_EQ(vector.back(), y);
	EXPECT_EQ(vectorSwap.front(), x);
	EXPECT_EQ(vectorSwap.back(), x);
}

template < class T, class U >
void	swapNonMemberTest(T vector, U x, U y)
{
	T	vectorSwap;

	vector.insert(vector.begin(), 10, x);
	vectorSwap.insert(vectorSwap.begin(), 15, y);
	swap(vector, vectorSwap);							// how can I check that ?
	EXPECT_EQ(vector.size(), (unsigned long)15);
	EXPECT_EQ(vectorSwap.size(), (unsigned long)10);
	EXPECT_EQ(vector.front(), y);
	EXPECT_EQ(vector.back(), y);
	EXPECT_EQ(vectorSwap.front(), x);
	EXPECT_EQ(vectorSwap.back(), x);
}

template < class T, class U >
void	clearTest(T vector, U x)
{
	for (int i = 0; i < 30; i++)
		vector.push_back(x);
	vector.clear();
	EXPECT_EQ(vector.size(), (unsigned long)0);
	// ASSERT_NE(vector.begin(), nullptr);				// doesn't compile...
}

template < class T, class U >
void	accessTest(T vector, U x, U y)
{
	T vector2;
	for (int i = 0; i < 5; i++)
	{
		x += y;
		vector2.push_back(x);
	}
	vector.assign(vector2.begin(), vector2.end());
	EXPECT_EQ(vector.at(2), 30);
	EXPECT_EQ(vector[4], 50);
}

/*****************************************************************/
/*       				     RUN TEST           			     */
/*****************************************************************/

template < class T >
void	runIntTests(T &vector)
{
	pushBackAndBackTest(vector, 0, 1);
	popBackAndBackTest(vector, 0, 1);
	sizeTest(vector, 2);
	insertTestInt(vector, 1);
	eraseTestInt(vector, 1);
	emptyTest(vector, 3);
	constructorTest(vector, 2);
	operatorEqualTest(vector, 5);
	operatorNotEqualTest(vector, 6);
	operatorSupEqualTest(vector, 7);
	operatorSupTest(vector, 8);
	operatorInfEqualTest(vector, 9);
	operatorInfTest(vector, 10);
	swapTest(vector, 42, 24);
	swapNonMemberTest(vector, 102, 34);
	clearTest(vector, 9);
	accessTest(vector, 0, 10);
}

TEST(Vector, StdVector)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                      ";
	std::cout << "          [ STD::VECTOR ] " << RESET << std::endl;

	std::vector<int> intVector;
	runIntTests(intVector);

	// std::vector<float> floatVector;
	// runFloatTests(floatVector);

	// std::vector<double> doubleVector;
	// runDoubleTests(doubleVector);

	// std::vector<std::string> stringVector;
	// runStringTests(stringVector);
}

template < class T, class U >
void	debugTest(T &vector, U x)
{
	std::cout << " >>>> DEBUG TEST <<<< " << std::endl;
	vector.push_back(x);
	EXPECT_EQ(vector.back(), x);
	EXPECT_EQ(vector.front(), x);
	x++;
	vector.push_back(x);
	EXPECT_EQ(vector.back(), x);
	EXPECT_EQ(vector.front(), x - 1);
}

TEST(Vector, FtVector)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "           [ FT::VECTOR ] " << RESET << std::endl;

	ft::vector<int> intVector;
	// debugTest(intVector, 1);
	runIntTests(intVector);

	// ft::vector<float> floatVector;
	// runFloatTests(floatVector);

	// ft::vector<double> doubleVector;
	// runDoubleTests(doubleVector);

	// ft::vector<std::string> stringVector;
	// runStringTests(stringVector);
}