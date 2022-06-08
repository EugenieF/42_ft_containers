#include "mainTests.hpp"

/**************************************************************/
/*                   		   TEST                           */
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

/**************************************************************/
/*                    RUN STD::VECTOR TEST                    */
/**************************************************************/

TEST_F(stdVectorTest, initSizeVector)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                      ";
	std::cout << "         [ STD::VECTOR ] " << RESET << std::endl;

	initSizeVector(intEmptyVector, intFilledVector, intToInsertVector);
	initSizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	initSizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	initSizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, isEmptyVector)
{
	isEmptyVector(intEmptyVector, intFilledVector, intToInsertVector);
	isEmptyVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	isEmptyVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	isEmptyVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
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
	insertInEmptyVector(intEmptyVector, intX);
	insertInEmptyVector(floatEmptyVector, floatX);
	insertInEmptyVector(doubleEmptyVector, doubleX);
	insertInEmptyVector(stringEmptyVector, stringX);
}

TEST_F(stdVectorTest, insertWithSizeInEmptyVector)
{
	insertWithSizeInEmptyVector(intEmptyVector, intX);
	insertWithSizeInEmptyVector(floatEmptyVector, floatX);
	insertWithSizeInEmptyVector(doubleEmptyVector, doubleX);
	insertWithSizeInEmptyVector(stringEmptyVector, stringX);
}

TEST_F(stdVectorTest, insertRangeInEmptyVector)
{
	insertRangeInEmptyVector(intEmptyVector, intFilledVector, intX);
	insertRangeInEmptyVector(floatEmptyVector, floatFilledVector, floatX);
	insertRangeInEmptyVector(doubleEmptyVector, doubleFilledVector, doubleX);
	insertRangeInEmptyVector(stringEmptyVector, stringFilledVector, stringX);
}

TEST_F(stdVectorTest, insertRangeInFilledVector)
{
	insertRangeInFilledVector(intFilledVector, intToInsertVector, intX, intY);
	insertRangeInFilledVector(floatFilledVector, floatToInsertVector, floatX, floatY);
	insertRangeInFilledVector(doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	insertRangeInFilledVector(stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, eraseInFilledVector)
{
	eraseInFilledVector(intFilledVector, intX);
	eraseInFilledVector(floatFilledVector, floatX);
	eraseInFilledVector(doubleFilledVector, doubleX);
	eraseInFilledVector(stringFilledVector, stringX);
}

TEST_F(stdVectorTest, eraseRangeInFilledVector)
{
	eraseRangeInFilledVector(intFilledVector, intToInsertVector, intX);
	eraseRangeInFilledVector(floatFilledVector, floatToInsertVector, floatX);
	eraseRangeInFilledVector(doubleFilledVector, doubleToInsertVector, doubleX);
	eraseRangeInFilledVector(stringFilledVector, stringToInsertVector, stringX);
}

TEST_F(stdVectorTest, clearVector)
{
	clearVector(intEmptyVector, intFilledVector);
	clearVector(floatEmptyVector, floatFilledVector);
	clearVector(doubleEmptyVector, doubleFilledVector);
	clearVector(stringEmptyVector, stringFilledVector);
}

TEST_F(stdVectorTest, swapVector)
{
	swapVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	swapVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	swapVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	swapVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, assignValueVector)
{
	assignValueVector(intEmptyVector, intFilledVector, intX, intY);
	assignValueVector(floatEmptyVector, floatFilledVector, floatX, floatY);
	assignValueVector(doubleEmptyVector, doubleFilledVector, doubleX, doubleY);
	assignValueVector(stringEmptyVector, stringFilledVector, stringX, stringY);
}

TEST_F(stdVectorTest, assignRangeVector)
{
	assignRangeVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	assignRangeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	assignRangeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	assignRangeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, maxSizeVector)
{
	maxSizeVector(intEmptyVector, intFilledVector, intToInsertVector, MAX_SIZE_INT_VECTOR);
	maxSizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, MAX_SIZE_FLOAT_VECTOR);
	maxSizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, MAX_SIZE_DOUBLE_VECTOR);
	maxSizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, MAX_SIZE_STRING_VECTOR);
}

TEST_F(stdVectorTest, accessElemVector)
{
	accessElemVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	accessElemVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	accessElemVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	accessElemVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}

/**************************************************************/
/*                     RUN FT::VECTOR TEST                    */
/**************************************************************/

TEST_F(ftVectorTest, initSizeVector)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "          [ FT::VECTOR ] " << RESET << std::endl;

	initSizeVector(intEmptyVector, intFilledVector, intToInsertVector);
	initSizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	initSizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	initSizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(ftVectorTest, isEmptyVector)
{
	isEmptyVector(intEmptyVector, intFilledVector, intToInsertVector);
	isEmptyVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	isEmptyVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	isEmptyVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
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
	insertInEmptyVector(intEmptyVector, intX);
	insertInEmptyVector(floatEmptyVector, floatX);
	insertInEmptyVector(doubleEmptyVector, doubleX);
	insertInEmptyVector(stringEmptyVector, stringX);
}

TEST_F(ftVectorTest, insertWithSizeInEmptyVector)
{
	insertWithSizeInEmptyVector(intEmptyVector, intX);
	insertWithSizeInEmptyVector(floatEmptyVector, floatX);
	insertWithSizeInEmptyVector(doubleEmptyVector, doubleX);
	insertWithSizeInEmptyVector(stringEmptyVector, stringX);
}

TEST_F(ftVectorTest, insertRangeInEmptyVector)
{
	insertRangeInEmptyVector(intEmptyVector, intFilledVector, intX);
	insertRangeInEmptyVector(floatEmptyVector, floatFilledVector, floatX);
	insertRangeInEmptyVector(doubleEmptyVector, doubleFilledVector, doubleX);
	insertRangeInEmptyVector(stringEmptyVector, stringFilledVector, stringX);	
}

TEST_F(ftVectorTest, insertRangeInFilledVector)
{
	insertRangeInFilledVector(intFilledVector, intToInsertVector, intX, intY);
	insertRangeInFilledVector(floatFilledVector, floatToInsertVector, floatX, floatY);
	insertRangeInFilledVector(doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	insertRangeInFilledVector(stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(ftVectorTest, eraseInFilledVector)
{
	eraseInFilledVector(intFilledVector, intX);
	eraseInFilledVector(floatFilledVector, floatX);
	eraseInFilledVector(doubleFilledVector, doubleX);
	eraseInFilledVector(stringFilledVector, stringX);
}

TEST_F(ftVectorTest, eraseRangeInFilledVector)
{
	eraseRangeInFilledVector(intFilledVector, intToInsertVector, intX);
	eraseRangeInFilledVector(floatFilledVector, floatToInsertVector, floatX);
	eraseRangeInFilledVector(doubleFilledVector, doubleToInsertVector, doubleX);
	eraseRangeInFilledVector(stringFilledVector, stringToInsertVector, stringX);
}

TEST_F(ftVectorTest, clearVector)
{
	clearVector(intEmptyVector, intFilledVector);
	clearVector(floatEmptyVector, floatFilledVector);
	clearVector(doubleEmptyVector, doubleFilledVector);
	clearVector(stringEmptyVector, stringFilledVector);
}

TEST_F(ftVectorTest, swapVector)
{
	swapVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	swapVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	swapVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	swapVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(ftVectorTest, assignValueVector)
{
	assignValueVector(intEmptyVector, intFilledVector, intX, intY);
	assignValueVector(floatEmptyVector, floatFilledVector, floatX, floatY);
	assignValueVector(doubleEmptyVector, doubleFilledVector, doubleX, doubleY);
	assignValueVector(stringEmptyVector, stringFilledVector, stringX, stringY);
}

TEST_F(ftVectorTest, assignRangeVector)
{
	assignRangeVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	assignRangeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	assignRangeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	assignRangeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(ftVectorTest, maxSizeVector)
{
	maxSizeVector(intEmptyVector, intFilledVector, intToInsertVector, MAX_SIZE_INT_VECTOR);
	maxSizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, MAX_SIZE_FLOAT_VECTOR);
	maxSizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, MAX_SIZE_DOUBLE_VECTOR);
	maxSizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, MAX_SIZE_STRING_VECTOR);
}

TEST_F(ftVectorTest, accessElemVector)
{
	accessElemVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	accessElemVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	accessElemVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	accessElemVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}
