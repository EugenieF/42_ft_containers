#include "mainTests.hpp"

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

TEST_F(stdVectorTest, iteratorVector)
{
	iteratorVector(intFilledVector, intToInsertVector, intX, intY);
	iteratorVector(floatFilledVector, floatToInsertVector, floatX, floatY);
	iteratorVector(doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	iteratorVector(stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, constIteratorVector)
{
	constIteratorVector(intFilledVector, intToInsertVector, intX, intY);
	constIteratorVector(floatFilledVector, floatToInsertVector, floatX, floatY);
	constIteratorVector(doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	constIteratorVector(stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, operatorEqualVector)
{
	operatorEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, operatorNotEqualVector)
{
	operatorNotEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorNotEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorNotEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorNotEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, operatorSupEqualVector)
{
	operatorSupEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorSupEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorSupEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorSupEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, operatorSupVector)
{
	operatorSupVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorSupVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorSupVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorSupVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, operatorInfEqualVector)
{
	operatorInfEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorInfEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorInfEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorInfEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, operatorInfVector)
{
	operatorInfVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorInfVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorInfVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorInfVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, constructorVector)
{
	constructorVector(intEmptyVector, intFilledVector, intToInsertVector, intX);
	constructorVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX);
	constructorVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX);
	constructorVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX);
}

TEST_F(stdVectorTest, operatorEgalVector)
{
	operatorEgalVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorEgalVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorEgalVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorEgalVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, nonMemberSwapVector)
{
	nonMemberSwapVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY, &std::swap);
	nonMemberSwapVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY, &std::swap);
	nonMemberSwapVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY, &std::swap);
	nonMemberSwapVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY, &std::swap);
}

TEST_F(stdVectorTest, resizeVector)
{
	resizeVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	resizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	resizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	resizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, insertSizeVector)
{
	insertSizeVector(intEmptyVector, intX);
	insertSizeVector(floatEmptyVector, floatX);
	insertSizeVector(doubleEmptyVector, doubleX);
	insertSizeVector(stringEmptyVector, stringX);
}

TEST_F(stdVectorTest, capacityVector)
{
	capacityVector(intEmptyVector, intX);
	capacityVector(floatEmptyVector, floatX);
	capacityVector(doubleEmptyVector, doubleX);
}

TEST_F(stdVectorTest, resizeCapacityVector)
{
	resizeCapacityVector(intEmptyVector, intY);
	resizeCapacityVector(floatEmptyVector, floatY);
	resizeCapacityVector(doubleEmptyVector, doubleY);
	resizeCapacityVector(stringEmptyVector, stringY);
}
