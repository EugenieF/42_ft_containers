#include "mainTests.hpp"

/**************************************************************/
/*                   		   TEST                           */
/**************************************************************/

template <typename T>
void	checkInitSize(T emptyVector, T filledVector)
{
	size_t	expectedEmptySize = (size_t)0;
	size_t	expectedFilledSize = (size_t)10;

	EXPECT_EQ(emptyVector.size(), expectedEmptySize);
	EXPECT_EQ(filledVector.size(), expectedFilledSize);
}

template <typename T>
void	checkIsEmpty(T emptyVector, T filledVector)
{
	EXPECT_EQ(emptyVector.empty(), true);
	EXPECT_EQ(filledVector.empty(), false);
}

template <typename T, typename U>
void	pushBackInEmptyVector(T emptyVector, U x)
{
	for (int i = 0; i < 10; i++)
	{
		emptyVector.push_back(x[i]);
		EXPECT_EQ(emptyVector.back(), x[i]);
	}
	EXPECT_EQ(emptyVector.front(), x[0]);
}

template <typename T, typename U>
void	popBackOneInFilledVector(T filledVector, U x)
{
	filledVector.pop_back();
	EXPECT_EQ(filledVector.back(), x[8]);
	EXPECT_EQ(filledVector.size(), (size_t)9);
}

/**************************************************************/
/*                    RUN STD::VECTOR TEST                    */
/**************************************************************/

TEST_F(stdVectorTest, initSizeVector)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                      ";
	std::cout << "         [ STD::VECTOR ] " << RESET << std::endl;

	checkInitSize(intEmptyVector, intFilledVector);
	checkInitSize(floatEmptyVector, floatFilledVector);
	checkInitSize(doubleEmptyVector, doubleFilledVector);
	checkInitSize(stringEmptyVector, stringFilledVector);
}

TEST_F(stdVectorTest, isEmptyVector)
{
	checkIsEmpty(intEmptyVector, intFilledVector);
	checkIsEmpty(floatEmptyVector, floatFilledVector);
	checkIsEmpty(doubleEmptyVector, doubleFilledVector);
	checkIsEmpty(stringEmptyVector, stringFilledVector);
}

TEST_F(stdVectorTest, pushBackInEmptyVector)
{
	pushBackInEmptyVector(intEmptyVector, intX);
	pushBackInEmptyVector(floatEmptyVector, floatX);
	pushBackInEmptyVector(doubleEmptyVector, doubleX);
	pushBackInEmptyVector(stringEmptyVector, stringX);
}

TEST_F(stdVectorTest, popBackOneInFilledVector)
{
	popBackOneInFilledVector(intFilledVector, intX);
	popBackOneInFilledVector(floatFilledVector, floatX);
	popBackOneInFilledVector(doubleFilledVector, doubleX);
	popBackOneInFilledVector(stringFilledVector, stringX);
}

TEST_F(stdVectorTest, insertInEmptyVector)
{
	size_t	expectedSize = (size_t)10;

	for (int i = 0; i < 10; i++)
	{
		intEmptyVector.insert(intEmptyVector.end(), intX[i]);
		EXPECT_EQ(intEmptyVector.back(), intX[i]);

		floatEmptyVector.insert(floatEmptyVector.end(), floatX[i]);
		EXPECT_EQ(floatEmptyVector.back(), floatX[i]);

		doubleEmptyVector.insert(doubleEmptyVector.end(), doubleX[i]);
		EXPECT_EQ(doubleEmptyVector.back(), doubleX[i]);

		stringEmptyVector.insert(stringEmptyVector.end(), stringX[i]);
		EXPECT_EQ(stringEmptyVector.back(), stringX[i]);
	}
	EXPECT_EQ(intEmptyVector.size(), expectedSize);
	EXPECT_EQ(floatEmptyVector.size(), expectedSize);
	EXPECT_EQ(doubleEmptyVector.size(), expectedSize);
	EXPECT_EQ(stringEmptyVector.size(), expectedSize);
}

TEST_F(stdVectorTest, insertWithSizeInEmptyVector)
{
	size_t	expectedSize = (size_t)6;


	intEmptyVector.insert(intEmptyVector.end(), 6, intX[3]);
	EXPECT_EQ(intEmptyVector.back(), intX[3]);
	EXPECT_EQ(intEmptyVector.front(), intX[3]);
	EXPECT_EQ(intEmptyVector.size(), expectedSize);

	floatEmptyVector.insert(floatEmptyVector.end(), 6, floatX[3]);
	EXPECT_EQ(floatEmptyVector.back(), floatX[3]);
	EXPECT_EQ(floatEmptyVector.front(), floatX[3]);
	EXPECT_EQ(floatEmptyVector.size(), expectedSize);

	doubleEmptyVector.insert(doubleEmptyVector.end(), 6, doubleX[3]);
	EXPECT_EQ(doubleEmptyVector.back(), doubleX[3]);
	EXPECT_EQ(doubleEmptyVector.front(), doubleX[3]);
	EXPECT_EQ(doubleEmptyVector.size(), expectedSize);

	stringEmptyVector.insert(stringEmptyVector.end(), 6, stringX[3]);
	EXPECT_EQ(stringEmptyVector.back(), stringX[3]);
	EXPECT_EQ(stringEmptyVector.front(), stringX[3]);
	EXPECT_EQ(stringEmptyVector.size(), expectedSize);
}

TEST_F(stdVectorTest, insertRangeInEmptyVector)
{
	size_t	expectedSize = (size_t)10;

	intEmptyVector.insert(intEmptyVector.begin(), intFilledVector.begin(), intFilledVector.end());
	EXPECT_EQ(intEmptyVector.size(), expectedSize);
	EXPECT_EQ(intEmptyVector.front(), intX[0]);
	EXPECT_EQ(intEmptyVector.back(), intX[9]);

	floatEmptyVector.insert(floatEmptyVector.begin(), floatFilledVector.begin(), floatFilledVector.end());
	EXPECT_EQ(floatEmptyVector.size(), expectedSize);
	EXPECT_EQ(floatEmptyVector.front(), floatX[0]);
	EXPECT_EQ(floatEmptyVector.back(), floatX[9]);

	doubleEmptyVector.insert(doubleEmptyVector.begin(), doubleFilledVector.begin(), doubleFilledVector.end());
	EXPECT_EQ(doubleEmptyVector.size(), expectedSize);
	EXPECT_EQ(doubleEmptyVector.front(), doubleX[0]);
	EXPECT_EQ(doubleEmptyVector.back(), doubleX[9]);

	stringEmptyVector.insert(stringEmptyVector.begin(), stringFilledVector.begin(), stringFilledVector.end());
	EXPECT_EQ(stringEmptyVector.size(), expectedSize);
	EXPECT_EQ(stringEmptyVector.front(), stringX[0]);
	EXPECT_EQ(stringEmptyVector.back(), stringX[9]);
}

TEST_F(stdVectorTest, insertRangeInFilledVector)
{
	size_t	expectedSize = (size_t)15;

	intFilledVector.insert(intFilledVector.end(), intToInsertVector.begin(), intToInsertVector.end());
	EXPECT_EQ(intFilledVector.size(), expectedSize);
	EXPECT_EQ(intFilledVector.front(), intX[0]);
	EXPECT_EQ(intFilledVector.back(), intY[4]);

	floatFilledVector.insert(floatFilledVector.end(), floatToInsertVector.begin(), floatToInsertVector.end());
	EXPECT_EQ(floatFilledVector.size(), expectedSize);
	EXPECT_EQ(floatFilledVector.front(), floatX[0]);
	EXPECT_EQ(floatFilledVector.back(), floatY[4]);

	doubleFilledVector.insert(doubleFilledVector.end(), doubleToInsertVector.begin(), doubleToInsertVector.end());
	EXPECT_EQ(doubleFilledVector.size(), expectedSize);
	EXPECT_EQ(doubleFilledVector.front(), doubleX[0]);
	EXPECT_EQ(doubleFilledVector.back(), doubleY[4]);

	stringFilledVector.insert(stringFilledVector.end(), stringToInsertVector.begin(), stringToInsertVector.end());
	EXPECT_EQ(stringFilledVector.size(), expectedSize);
	EXPECT_EQ(stringFilledVector.front(), stringX[0]);
	EXPECT_EQ(stringFilledVector.back(), stringY[4]);
}

/**************************************************************/
/*                     RUN FT::VECTOR TEST                    */
/**************************************************************/

TEST_F(ftVectorTest, initSizeVector)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "          [ FT::VECTOR ] " << RESET << std::endl;

	checkInitSize(intEmptyVector, intFilledVector);
	checkInitSize(floatEmptyVector, floatFilledVector);
	checkInitSize(doubleEmptyVector, doubleFilledVector);
	checkInitSize(stringEmptyVector, stringFilledVector);
}

TEST_F(ftVectorTest, isEmptyVector)
{
	checkIsEmpty(intEmptyVector, intFilledVector);
	checkIsEmpty(floatEmptyVector, floatFilledVector);
	checkIsEmpty(doubleEmptyVector, doubleFilledVector);
	checkIsEmpty(stringEmptyVector, stringFilledVector);
}

TEST_F(ftVectorTest, pushBackInEmptyVector)
{
	pushBackInEmptyVector(intEmptyVector, intX);
	pushBackInEmptyVector(floatEmptyVector, floatX);
	pushBackInEmptyVector(doubleEmptyVector, doubleX);
	pushBackInEmptyVector(stringEmptyVector, stringX);
}

TEST_F(ftVectorTest, popBackOneInFilledVector)
{
	popBackOneInFilledVector(intFilledVector, intX);
	popBackOneInFilledVector(floatFilledVector, floatX);
	popBackOneInFilledVector(doubleFilledVector, doubleX);
	popBackOneInFilledVector(stringFilledVector, stringX);
}

TEST_F(ftVectorTest, insertInEmptyVector)
{
	size_t	expectedSize = (size_t)10;

	for (int i = 0; i < 10; i++)
	{
		intEmptyVector.insert(intEmptyVector.end(), intX[i]);
		EXPECT_EQ(intEmptyVector.back(), intX[i]);

		floatEmptyVector.insert(floatEmptyVector.end(), floatX[i]);
		EXPECT_EQ(floatEmptyVector.back(), floatX[i]);

		doubleEmptyVector.insert(doubleEmptyVector.end(), doubleX[i]);
		EXPECT_EQ(doubleEmptyVector.back(), doubleX[i]);

		stringEmptyVector.insert(stringEmptyVector.end(), stringX[i]);
		EXPECT_EQ(stringEmptyVector.back(), stringX[i]);
	}
	EXPECT_EQ(intEmptyVector.size(), expectedSize);
	EXPECT_EQ(floatEmptyVector.size(), expectedSize);
	EXPECT_EQ(doubleEmptyVector.size(), expectedSize);
	EXPECT_EQ(stringEmptyVector.size(), expectedSize);
}

TEST_F(ftVectorTest, insertWithSizeInEmptyVector)
{
	size_t	expectedSize = (size_t)6;


	intEmptyVector.insert(intEmptyVector.end(), 6, intX[3]);
	EXPECT_EQ(intEmptyVector.back(), intX[3]);
	EXPECT_EQ(intEmptyVector.front(), intX[3]);
	EXPECT_EQ(intEmptyVector.size(), expectedSize);

	floatEmptyVector.insert(floatEmptyVector.end(), 6, floatX[3]);
	EXPECT_EQ(floatEmptyVector.back(), floatX[3]);
	EXPECT_EQ(floatEmptyVector.front(), floatX[3]);
	EXPECT_EQ(floatEmptyVector.size(), expectedSize);

	doubleEmptyVector.insert(doubleEmptyVector.end(), 6, doubleX[3]);
	EXPECT_EQ(doubleEmptyVector.back(), doubleX[3]);
	EXPECT_EQ(doubleEmptyVector.front(), doubleX[3]);
	EXPECT_EQ(doubleEmptyVector.size(), expectedSize);

	stringEmptyVector.insert(stringEmptyVector.end(), 6, stringX[3]);
	EXPECT_EQ(stringEmptyVector.back(), stringX[3]);
	EXPECT_EQ(stringEmptyVector.front(), stringX[3]);
	EXPECT_EQ(stringEmptyVector.size(), expectedSize);
}

TEST_F(ftVectorTest, insertRangeInEmptyVector)
{
	size_t	expectedSize = (size_t)10;

	intEmptyVector.insert(intEmptyVector.begin(), intFilledVector.begin(), intFilledVector.end());
	EXPECT_EQ(intEmptyVector.size(), expectedSize);
	EXPECT_EQ(intEmptyVector.front(), intX[0]);
	EXPECT_EQ(intEmptyVector.back(), intX[9]);

	floatEmptyVector.insert(floatEmptyVector.begin(), floatFilledVector.begin(), floatFilledVector.end());
	EXPECT_EQ(floatEmptyVector.size(), expectedSize);
	EXPECT_EQ(floatEmptyVector.front(), floatX[0]);
	EXPECT_EQ(floatEmptyVector.back(), floatX[9]);

	doubleEmptyVector.insert(doubleEmptyVector.begin(), doubleFilledVector.begin(), doubleFilledVector.end());
	EXPECT_EQ(doubleEmptyVector.size(), expectedSize);
	EXPECT_EQ(doubleEmptyVector.front(), doubleX[0]);
	EXPECT_EQ(doubleEmptyVector.back(), doubleX[9]);

	stringEmptyVector.insert(stringEmptyVector.begin(), stringFilledVector.begin(), stringFilledVector.end());
	EXPECT_EQ(stringEmptyVector.size(), expectedSize);
	EXPECT_EQ(stringEmptyVector.front(), stringX[0]);
	EXPECT_EQ(stringEmptyVector.back(), stringX[9]);
}

TEST_F(ftVectorTest, insertRangeInFilledVector)
{
	size_t	expectedSize = (size_t)15;

	intFilledVector.insert(intFilledVector.end(), intToInsertVector.begin(), intToInsertVector.end());
	EXPECT_EQ(intFilledVector.size(), expectedSize);
	EXPECT_EQ(intFilledVector.front(), intX[0]);
	EXPECT_EQ(intFilledVector.back(), intY[4]);

	floatFilledVector.insert(floatFilledVector.end(), floatToInsertVector.begin(), floatToInsertVector.end());
	EXPECT_EQ(floatFilledVector.size(), expectedSize);
	EXPECT_EQ(floatFilledVector.front(), floatX[0]);
	EXPECT_EQ(floatFilledVector.back(), floatY[4]);

	doubleFilledVector.insert(doubleFilledVector.end(), doubleToInsertVector.begin(), doubleToInsertVector.end());
	EXPECT_EQ(doubleFilledVector.size(), expectedSize);
	EXPECT_EQ(doubleFilledVector.front(), doubleX[0]);
	EXPECT_EQ(doubleFilledVector.back(), doubleY[4]);

	stringFilledVector.insert(stringFilledVector.end(), stringToInsertVector.begin(), stringToInsertVector.end());
	EXPECT_EQ(stringFilledVector.size(), expectedSize);
	EXPECT_EQ(stringFilledVector.front(), stringX[0]);
	EXPECT_EQ(stringFilledVector.back(), stringY[4]);
}

