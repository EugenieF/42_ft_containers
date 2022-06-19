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
	initSizeVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector);
	initSizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	initSizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	initSizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, isEmptyVector)
{
	isEmptyVector(intEmptyVector, intFilledVector, intToInsertVector);
	isEmptyVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector);
	isEmptyVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	isEmptyVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	isEmptyVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, pushBackInEmptyVector)
{
	pushBackInEmptyVector(intEmptyVector, intX);
	pushBackInEmptyVector(unsignedIntEmptyVector, unsignedIntX);
	pushBackInEmptyVector(floatEmptyVector, floatX);
	pushBackInEmptyVector(doubleEmptyVector, doubleX);
	pushBackInEmptyVector(stringEmptyVector, stringX);
}

TEST_F(stdVectorTest, popBackOneInFilledVector)
{
	popBackOneInFilledVector(intFilledVector, intX);
	popBackOneInFilledVector(unsignedIntFilledVector, unsignedIntX);
	popBackOneInFilledVector(floatFilledVector, floatX);
	popBackOneInFilledVector(doubleFilledVector, doubleX);
	popBackOneInFilledVector(stringFilledVector, stringX);
}

TEST_F(stdVectorTest, insertInEmptyVector)
{
	insertInEmptyVector(intEmptyVector, intX);
	insertInEmptyVector(unsignedIntEmptyVector, unsignedIntX);
	insertInEmptyVector(floatEmptyVector, floatX);
	insertInEmptyVector(doubleEmptyVector, doubleX);
	insertInEmptyVector(stringEmptyVector, stringX);
}

TEST_F(stdVectorTest, insertWithSizeInEmptyVector)
{
	insertWithSizeInEmptyVector(intEmptyVector, intX);
	insertWithSizeInEmptyVector(unsignedIntEmptyVector, unsignedIntX);
	insertWithSizeInEmptyVector(floatEmptyVector, floatX);
	insertWithSizeInEmptyVector(doubleEmptyVector, doubleX);
	insertWithSizeInEmptyVector(stringEmptyVector, stringX);
}

TEST_F(stdVectorTest, insertRangeInEmptyVector)
{
	insertRangeInEmptyVector(intEmptyVector, intFilledVector, intX);
	insertRangeInEmptyVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntX);
	insertRangeInEmptyVector(floatEmptyVector, floatFilledVector, floatX);
	insertRangeInEmptyVector(doubleEmptyVector, doubleFilledVector, doubleX);
	insertRangeInEmptyVector(stringEmptyVector, stringFilledVector, stringX);
}

TEST_F(stdVectorTest, insertRangeInFilledVector)
{
	insertRangeInFilledVector(intFilledVector, intToInsertVector, intX, intY);
	insertRangeInFilledVector(unsignedIntFilledVector, unsignedIntToInsertVector, unsignedIntX, unsignedIntY);
	insertRangeInFilledVector(floatFilledVector, floatToInsertVector, floatX, floatY);
	insertRangeInFilledVector(doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	insertRangeInFilledVector(stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, eraseInFilledVector)
{
	eraseInFilledVector(intFilledVector, intX);
	eraseInFilledVector(unsignedIntFilledVector, unsignedIntX);
	eraseInFilledVector(floatFilledVector, floatX);
	eraseInFilledVector(doubleFilledVector, doubleX);
	eraseInFilledVector(stringFilledVector, stringX);
}

TEST_F(stdVectorTest, eraseRangeInFilledVector)
{
	eraseRangeInFilledVector(intFilledVector, intToInsertVector, intX);
	eraseRangeInFilledVector(unsignedIntFilledVector, unsignedIntToInsertVector, unsignedIntX);
	eraseRangeInFilledVector(floatFilledVector, floatToInsertVector, floatX);
	eraseRangeInFilledVector(doubleFilledVector, doubleToInsertVector, doubleX);
	eraseRangeInFilledVector(stringFilledVector, stringToInsertVector, stringX);
}

TEST_F(stdVectorTest, clearVector)
{
	clearVector(intEmptyVector, intFilledVector);
	clearVector(unsignedIntEmptyVector, unsignedIntFilledVector);
	clearVector(floatEmptyVector, floatFilledVector);
	clearVector(doubleEmptyVector, doubleFilledVector);
	clearVector(stringEmptyVector, stringFilledVector);
}

TEST_F(stdVectorTest, swapVector)
{
	swapVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	swapVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector, unsignedIntX, unsignedIntY);
	swapVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	swapVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	swapVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, assignValueVector)
{
	assignValueVector(intEmptyVector, intFilledVector, intX, intY);
	assignValueVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntX, unsignedIntY);
	assignValueVector(floatEmptyVector, floatFilledVector, floatX, floatY);
	assignValueVector(doubleEmptyVector, doubleFilledVector, doubleX, doubleY);
	assignValueVector(stringEmptyVector, stringFilledVector, stringX, stringY);
}

TEST_F(stdVectorTest, assignRangeVector)
{
	assignRangeVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	assignRangeVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector, unsignedIntX, unsignedIntY);
	assignRangeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	assignRangeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	assignRangeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, maxSizeVector)
{
	maxSizeVector(intEmptyVector, intFilledVector, intToInsertVector, MAX_SIZE_INT_VECTOR);
	maxSizeVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector, MAX_SIZE_INT_VECTOR);
	maxSizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, MAX_SIZE_FLOAT_VECTOR);
	maxSizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, MAX_SIZE_DOUBLE_VECTOR);
	maxSizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, MAX_SIZE_STRING_VECTOR);
}

TEST_F(stdVectorTest, accessElemVector)
{
	accessElemVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	accessElemVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector, unsignedIntX, unsignedIntY);
	accessElemVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	accessElemVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	accessElemVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, iteratorVector)
{
	iteratorVector(intFilledVector, intToInsertVector, intX, intY);
	iteratorVector(unsignedIntFilledVector, unsignedIntToInsertVector, unsignedIntX, unsignedIntY);
	iteratorVector(floatFilledVector, floatToInsertVector, floatX, floatY);
	iteratorVector(doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	iteratorVector(stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, constIteratorVector)
{
	constIteratorVector(intFilledVector, intToInsertVector, intX, intY);
	constIteratorVector(unsignedIntFilledVector, unsignedIntToInsertVector, unsignedIntX, unsignedIntY);
	constIteratorVector(floatFilledVector, floatToInsertVector, floatX, floatY);
	constIteratorVector(doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	constIteratorVector(stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, operatorEqualVector)
{
	operatorEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorEqualVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector);
	operatorEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, operatorNotEqualVector)
{
	operatorNotEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorNotEqualVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector);
	operatorNotEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorNotEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorNotEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, operatorSupEqualVector)
{
	operatorSupEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorSupEqualVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector);
	operatorSupEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorSupEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorSupEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, operatorSupVector)
{
	operatorSupVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorSupVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector);
	operatorSupVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorSupVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorSupVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, operatorInfEqualVector)
{
	operatorInfEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorInfEqualVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector);
	operatorInfEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorInfEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorInfEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, operatorInfVector)
{
	operatorInfVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorInfVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector);
	operatorInfVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorInfVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorInfVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, constructorVector)
{
	constructorVector(intEmptyVector, intFilledVector, intToInsertVector, intX);
	constructorVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector, unsignedIntX);
	constructorVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX);
	constructorVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX);
	constructorVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX);
}

TEST_F(stdVectorTest, operatorEgalVector)
{
	operatorEgalVector(intEmptyVector, intFilledVector, intToInsertVector);
	operatorEgalVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector);
	operatorEgalVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
	operatorEgalVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
	operatorEgalVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

TEST_F(stdVectorTest, nonMemberSwapVector)
{
	nonMemberSwapVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY, &std::swap);
	nonMemberSwapVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector, unsignedIntX, unsignedIntY, &std::swap);
	nonMemberSwapVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY, &std::swap);
	nonMemberSwapVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY, &std::swap);
	nonMemberSwapVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY, &std::swap);
}

TEST_F(stdVectorTest, resizeVector)
{
	resizeVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
	resizeVector(unsignedIntEmptyVector, unsignedIntFilledVector, unsignedIntToInsertVector, unsignedIntX, unsignedIntY);
	resizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
	resizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
	resizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
}

TEST_F(stdVectorTest, insertSizeVector)
{
	insertSizeVector(intEmptyVector, intX);
	insertSizeVector(unsignedIntEmptyVector, unsignedIntX);
	insertSizeVector(floatEmptyVector, floatX);
	insertSizeVector(doubleEmptyVector, doubleX);
	insertSizeVector(stringEmptyVector, stringX);
}

TEST_F(stdVectorTest, capacityVector)
{
	capacityVector(intEmptyVector, intX);
	capacityVector(unsignedIntEmptyVector, unsignedIntX);
	capacityVector(floatEmptyVector, floatX);
	capacityVector(doubleEmptyVector, doubleX);
}

TEST_F(stdVectorTest, resizeCapacityVector)
{
	resizeCapacityVector(intEmptyVector, intY);
	resizeCapacityVector(unsignedIntEmptyVector, unsignedIntY);
	resizeCapacityVector(floatEmptyVector, floatY);
	resizeCapacityVector(doubleEmptyVector, doubleY);
	resizeCapacityVector(stringEmptyVector, stringY);
}
