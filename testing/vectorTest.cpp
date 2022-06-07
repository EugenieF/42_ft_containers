#include "mainTests.hpp"

/**************************************************************/
/*                    RUN STD::VECTOR TEST                    */
/**************************************************************/

TEST_F(stdVectorTest, initSizeVector)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                      ";
	std::cout << "         [ STD::VECTOR ] " << RESET << std::endl;

	size_t	expectedEmptyMapSize = (size_t)0;
	size_t	expectedFilledMapSize = (size_t)10;

	EXPECT_EQ(intEmptyVector.size(), expectedEmptyMapSize);
	EXPECT_EQ(intFilledVector.size(), expectedFilledMapSize);

	EXPECT_EQ(floatEmptyVector.size(), expectedEmptyMapSize);
	EXPECT_EQ(floatFilledVector.size(), expectedFilledMapSize);

	EXPECT_EQ(doubleEmptyVector.size(), expectedEmptyMapSize);
	EXPECT_EQ(doubleFilledVector.size(), expectedFilledMapSize);

	EXPECT_EQ(stringEmptyVector.size(), expectedEmptyMapSize);
	EXPECT_EQ(stringFilledVector.size(), expectedFilledMapSize);
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
	EXPECT_EQ(intEmptyVector.front(), intX[0]);
	EXPECT_EQ(floatEmptyVector.front(), floatX[0]);
	EXPECT_EQ(doubleEmptyVector.front(), doubleX[0]);
	EXPECT_EQ(stringEmptyVector.front(), stringX[0]);
}

TEST_F(stdVectorTest, popBackOneInFilledVector)
{
	intFilledVector.pop_back();
	EXPECT_EQ(intFilledVector.back(), intX[8]);
	EXPECT_EQ(intFilledVector.size(), (size_t)9);

	floatFilledVector.pop_back();
	EXPECT_EQ(floatFilledVector.back(), floatX[8]);
	EXPECT_EQ(floatFilledVector.size(), (size_t)9);
	
	doubleFilledVector.pop_back();
	EXPECT_EQ(doubleFilledVector.back(), doubleX[8]);
	EXPECT_EQ(doubleFilledVector.size(), (size_t)9);
	
	stringFilledVector.pop_back();
	EXPECT_EQ(stringFilledVector.back(), stringX[8]);
	EXPECT_EQ(stringFilledVector.size(), (size_t)9);
}

/**************************************************************/
/*                     RUN FT::VECTOR TEST                    */
/**************************************************************/

TEST_F(ftVectorTest, initSizeVector)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "          [ FT::VECTOR ] " << RESET << std::endl;

	size_t	expectedEmptyMapSize = (size_t)0;
	size_t	expectedFilledMapSize = (size_t)10;

	EXPECT_EQ(intEmptyVector.size(), expectedEmptyMapSize);
	EXPECT_EQ(intFilledVector.size(), expectedFilledMapSize);

	EXPECT_EQ(floatEmptyVector.size(), expectedEmptyMapSize);
	EXPECT_EQ(floatFilledVector.size(), expectedFilledMapSize);

	EXPECT_EQ(doubleEmptyVector.size(), expectedEmptyMapSize);
	EXPECT_EQ(doubleFilledVector.size(), expectedFilledMapSize);

	EXPECT_EQ(stringEmptyVector.size(), expectedEmptyMapSize);
	EXPECT_EQ(stringFilledVector.size(), expectedFilledMapSize);
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
	EXPECT_EQ(intEmptyVector.front(), intX[0]);
	EXPECT_EQ(floatEmptyVector.front(), floatX[0]);
	EXPECT_EQ(doubleEmptyVector.front(), doubleX[0]);
	EXPECT_EQ(stringEmptyVector.front(), stringX[0]);
}

TEST_F(ftVectorTest, popBackOneInFilledVector)
{
	intFilledVector.pop_back();
	EXPECT_EQ(intFilledVector.back(), intX[8]);
	EXPECT_EQ(intFilledVector.size(), (size_t)9);

	floatFilledVector.pop_back();
	EXPECT_EQ(floatFilledVector.back(), floatX[8]);
	EXPECT_EQ(floatFilledVector.size(), (size_t)9);
	
	doubleFilledVector.pop_back();
	EXPECT_EQ(doubleFilledVector.back(), doubleX[8]);
	EXPECT_EQ(doubleFilledVector.size(), (size_t)9);

	stringFilledVector.pop_back();
	EXPECT_EQ(stringFilledVector.back(), stringX[8]);
	EXPECT_EQ(stringFilledVector.size(), (size_t)9);
}
