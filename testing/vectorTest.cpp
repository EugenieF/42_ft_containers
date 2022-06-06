#include "mainTests.hpp"

TEST_F(stdVectorTest, initSizeVector)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                      ";
	std::cout << "          [ STD::VECTOR ] " << RESET << std::endl;

	EXPECT_EQ(intEmptyVector.size(), (unsigned long)0);
	EXPECT_EQ(intFilledVector.size(), (unsigned long)10);

	EXPECT_EQ(floatEmptyVector.size(), (unsigned long)0);
	EXPECT_EQ(floatFilledVector.size(), (unsigned long)10);

	EXPECT_EQ(doubleEmptyVector.size(), (unsigned long)0);
	EXPECT_EQ(doubleFilledVector.size(), (unsigned long)10);

	EXPECT_EQ(stringEmptyVector.size(), (unsigned long)0);
	EXPECT_EQ(stringFilledVector.size(), (unsigned long)10);
}

TEST_F(stdVectorTest, push_backInEmptyVector)
{
	for (int i = 0; i < 10; i++)
	{
		intEmptyVector.push_back(intX[i]);
		EXPECT_EQ(intEmptyVector.back(), intX[i]);

		floatEmptyVector.push_back(floatX[i]);
		EXPECT_EQ(floatEmptyVector.back(), floatX[i]);

		doubleEmptyVector.push_back(doubleX[i]);
		EXPECT_EQ(doubleEmptyVector.back(), doubleX[i]);

		stringEmptyVector.push_back(stringX[i]);
		EXPECT_EQ(stringEmptyVector.back(), stringX[i]);
	}
}

TEST_F(ftVectorTest, initSizeVector)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "           [ FT::VECTOR ] " << RESET << std::endl;

	EXPECT_EQ(intEmptyVector.size(), (unsigned long)0);
	EXPECT_EQ(intFilledVector.size(), (unsigned long)10);

	EXPECT_EQ(floatEmptyVector.size(), (unsigned long)0);
	EXPECT_EQ(floatFilledVector.size(), (unsigned long)10);

	EXPECT_EQ(doubleEmptyVector.size(), (unsigned long)0);
	EXPECT_EQ(doubleFilledVector.size(), (unsigned long)10);

	EXPECT_EQ(stringEmptyVector.size(), (unsigned long)0);
	EXPECT_EQ(stringFilledVector.size(), (unsigned long)10);
}

TEST_F(ftVectorTest, push_backInEmptyVector)
{
	for (int i = 0; i < 10; i++)
	{
		intEmptyVector.push_back(intX[i]);
		EXPECT_EQ(intEmptyVector.back(), intX[i]);

		floatEmptyVector.push_back(floatX[i]);
		EXPECT_EQ(floatEmptyVector.back(), floatX[i]);

		doubleEmptyVector.push_back(doubleX[i]);
		EXPECT_EQ(doubleEmptyVector.back(), doubleX[i]);

		stringEmptyVector.push_back(stringX[i]);
		EXPECT_EQ(stringEmptyVector.back(), stringX[i]);
	}
}
