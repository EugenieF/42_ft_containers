#include "gtest/gtest.h"
#include "mainTests.hpp"
#include "../containers/main.hpp"

template < class T >
void	pushTest(T &vector)
{
	vector.push_back(1);
	EXPECT_EQ(vector[0], 1);
	vector.push_back(2);
	EXPECT_EQ(vector[1], 2);
}

template < class T >
void	sizeTest(T &vector)
{
	EXPECT_EQ(vector.size(), (unsigned long)2);
	for (int i = 3; i < 11; i++)
		vector.push_back(i);
	EXPECT_EQ(vector.size(), (unsigned long)10);
}

template < class T >
void	runTests(T &vector)
{
	pushTest(vector);
	sizeTest(vector);
}

TEST(VectorInt, StdVectorInt)
{
	std::cout << std::endl << ORANGE_B << "\t\t\t\t\t\t [ STD::VECTOR ] " << RESET << std::endl;
	std::vector<int> vector;
	runTests( vector);
}

TEST(VectorInt, FtVectorInt)
{
	std::cout << std::endl << BLUE_B << "\t\t\t\t\t\t  [ FT::VECTOR ] " << RESET << std::endl;
	// ft::vector<int> vector;
	// runTests( vector);
}