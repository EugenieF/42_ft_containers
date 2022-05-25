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
	// for (int i = 1; i < 101; i++)
	// 	vector.pop();
	// EXPECT_EQ(vector.size(), (unsigned long)0);
}

template < class T >
void	insertTestInt(T vector)
{
	int x = 1;
	for (int i = 1; i < 10; i++, x++)
		vector.push_back(x);
	vector.insert(vector.begin(), 3, 3);
	EXPECT_EQ(vector.front(), 3);
	EXPECT_EQ(vector.size(), (unsigned long)12);
}

template < class T >
void	eraseTestInt(T vector)
{
	int x = 1;
	for (int i = 1; i < 10; i++, x++)
		vector.push_back(x);
	vector.erase(vector.begin(), vector.begin() + 3);
	EXPECT_EQ(vector.front(), 4);
	EXPECT_EQ(vector.size(), (unsigned long)6);
	vector.erase(vector.begin());
	EXPECT_EQ(vector.front(), 5);
	EXPECT_EQ(vector.size(), (unsigned long)5);
}

template < class T >
void	runIntTests(T &vector)
{
	pushBackAndBackTest(vector, 0, 1);
	popBackAndBackTest(vector, 0, 1);
	sizeTest(vector, 2);
	insertTestInt(vector);
	eraseTestInt(vector);
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