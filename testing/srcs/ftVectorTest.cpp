#include "mainTests.hpp"

/**************************************************************/
/*                     RUN FT::VECTOR TEST                    */
/**************************************************************/

TEST_F(ftVectorTest, initSizeVector)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "          [ FT::VECTOR ] " << RESET << std::endl;

// 	initSizeVector(intEmptyVector, intFilledVector, intToInsertVector);
// 	initSizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
// 	initSizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
// 	initSizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
}

// TEST_F(ftVectorTest, isEmptyVector)
// {
// 	isEmptyVector(intEmptyVector, intFilledVector, intToInsertVector);
// 	isEmptyVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
// 	isEmptyVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
// 	isEmptyVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
// }

// TEST_F(ftVectorTest, pushBackInEmptyVector)
// {
// 	pushBackInEmptyVector(intEmptyVector, intX);
// 	pushBackInEmptyVector(floatEmptyVector, floatX);
// 	pushBackInEmptyVector(doubleEmptyVector, doubleX);
// 	pushBackInEmptyVector(stringEmptyVector, stringX);
// }

// TEST_F(ftVectorTest, popBackOneInFilledVector)
// {
// 	popBackOneInFilledVector(intFilledVector, intX);
// 	popBackOneInFilledVector(floatFilledVector, floatX);
// 	popBackOneInFilledVector(doubleFilledVector, doubleX);
// 	popBackOneInFilledVector(stringFilledVector, stringX);
// }

// TEST_F(ftVectorTest, insertInEmptyVector)
// {
// 	insertInEmptyVector(intEmptyVector, intX);
// 	insertInEmptyVector(floatEmptyVector, floatX);
// 	insertInEmptyVector(doubleEmptyVector, doubleX);
// 	insertInEmptyVector(stringEmptyVector, stringX);
// }

// TEST_F(ftVectorTest, insertWithSizeInEmptyVector)
// {
// 	insertWithSizeInEmptyVector(intEmptyVector, intX);
// 	insertWithSizeInEmptyVector(floatEmptyVector, floatX);
// 	insertWithSizeInEmptyVector(doubleEmptyVector, doubleX);
// 	insertWithSizeInEmptyVector(stringEmptyVector, stringX);
// }

// TEST_F(ftVectorTest, insertRangeInEmptyVector)
// {
// 	insertRangeInEmptyVector(intEmptyVector, intFilledVector, intX);
// 	insertRangeInEmptyVector(floatEmptyVector, floatFilledVector, floatX);
// 	insertRangeInEmptyVector(doubleEmptyVector, doubleFilledVector, doubleX);
// 	insertRangeInEmptyVector(stringEmptyVector, stringFilledVector, stringX);	
// }

// TEST_F(ftVectorTest, insertRangeInFilledVector)
// {
// 	insertRangeInFilledVector(intFilledVector, intToInsertVector, intX, intY);
// 	insertRangeInFilledVector(floatFilledVector, floatToInsertVector, floatX, floatY);
// 	insertRangeInFilledVector(doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
// 	insertRangeInFilledVector(stringFilledVector, stringToInsertVector, stringX, stringY);
// }

// TEST_F(ftVectorTest, eraseInFilledVector)
// {
// 	eraseInFilledVector(intFilledVector, intX);
// 	eraseInFilledVector(floatFilledVector, floatX);
// 	eraseInFilledVector(doubleFilledVector, doubleX);
// 	eraseInFilledVector(stringFilledVector, stringX);
// }

// TEST_F(ftVectorTest, eraseRangeInFilledVector)
// {
// 	eraseRangeInFilledVector(intFilledVector, intToInsertVector, intX);
// 	eraseRangeInFilledVector(floatFilledVector, floatToInsertVector, floatX);
// 	eraseRangeInFilledVector(doubleFilledVector, doubleToInsertVector, doubleX);
// 	eraseRangeInFilledVector(stringFilledVector, stringToInsertVector, stringX);
// }

// TEST_F(ftVectorTest, clearVector)
// {
// 	clearVector(intEmptyVector, intFilledVector);
// 	clearVector(floatEmptyVector, floatFilledVector);
// 	clearVector(doubleEmptyVector, doubleFilledVector);
// 	clearVector(stringEmptyVector, stringFilledVector);
// }

// TEST_F(ftVectorTest, swapVector)
// {
// 	swapVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
// 	swapVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
// 	swapVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
// 	swapVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
// }

// TEST_F(ftVectorTest, assignValueVector)
// {
// 	assignValueVector(intEmptyVector, intFilledVector, intX, intY);
// 	assignValueVector(floatEmptyVector, floatFilledVector, floatX, floatY);
// 	assignValueVector(doubleEmptyVector, doubleFilledVector, doubleX, doubleY);
// 	assignValueVector(stringEmptyVector, stringFilledVector, stringX, stringY);
// }

// TEST_F(ftVectorTest, assignRangeVector)
// {
// 	assignRangeVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
// 	assignRangeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
// 	assignRangeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
// 	assignRangeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
// }

// TEST_F(ftVectorTest, maxSizeVector)
// {
// 	maxSizeVector(intEmptyVector, intFilledVector, intToInsertVector, MAX_SIZE_INT_VECTOR);
// 	maxSizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, MAX_SIZE_FLOAT_VECTOR);
// 	maxSizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, MAX_SIZE_DOUBLE_VECTOR);
// 	maxSizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, MAX_SIZE_STRING_VECTOR);
// }

// TEST_F(ftVectorTest, accessElemVector)
// {
// 	accessElemVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
// 	accessElemVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
// 	accessElemVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
// 	accessElemVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
// }

// TEST_F(ftVectorTest, iteratorVector)
// {
// 	iteratorVector(intFilledVector, intToInsertVector, intX, intY);
// 	iteratorVector(floatFilledVector, floatToInsertVector, floatX, floatY);
// 	iteratorVector(doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
// 	iteratorVector(stringFilledVector, stringToInsertVector, stringX, stringY);
// }

// TEST_F(ftVectorTest, constIteratorVector)
// {
// 	constIteratorVector(intFilledVector, intToInsertVector, intX, intY);
// 	constIteratorVector(floatFilledVector, floatToInsertVector, floatX, floatY);
// 	constIteratorVector(doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
// 	constIteratorVector(stringFilledVector, stringToInsertVector, stringX, stringY);
// }

// TEST_F(ftVectorTest, operatorEqualVector)
// {
// 	operatorEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
// 	operatorEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
// 	operatorEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
// 	operatorEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
// }

// TEST_F(ftVectorTest, operatorNotEqualVector)
// {
// 	operatorNotEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
// 	operatorNotEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
// 	operatorNotEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
// 	operatorNotEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
// }

// TEST_F(ftVectorTest, operatorSupEqualVector)
// {
// 	operatorSupEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
// 	operatorSupEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
// 	operatorSupEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
// 	operatorSupEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
// }

// TEST_F(ftVectorTest, operatorSupVector)
// {
// 	operatorSupVector(intEmptyVector, intFilledVector, intToInsertVector);
// 	operatorSupVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
// 	operatorSupVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
// 	operatorSupVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
// }

// TEST_F(ftVectorTest, operatorInfEqualVector)
// {
// 	operatorInfEqualVector(intEmptyVector, intFilledVector, intToInsertVector);
// 	operatorInfEqualVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
// 	operatorInfEqualVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
// 	operatorInfEqualVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
// }

// TEST_F(ftVectorTest, operatorInfVector)
// {
// 	operatorInfVector(intEmptyVector, intFilledVector, intToInsertVector);
// 	operatorInfVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
// 	operatorInfVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
// 	operatorInfVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
// }

// TEST_F(ftVectorTest, constructorVector)
// {
// 	constructorVector(intEmptyVector, intFilledVector, intToInsertVector, intX);
// 	constructorVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX);
// 	constructorVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX);
// 	constructorVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX);
// }

// TEST_F(ftVectorTest, operatorEgalVector)
// {
// 	operatorEgalVector(intEmptyVector, intFilledVector, intToInsertVector);
// 	operatorEgalVector(floatEmptyVector, floatFilledVector, floatToInsertVector);
// 	operatorEgalVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector);
// 	operatorEgalVector(stringEmptyVector, stringFilledVector, stringToInsertVector);
// }

// TEST_F(ftVectorTest, nonMemberSwapVector)
// {
// 	nonMemberSwapVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY, &ft::swap);
// 	nonMemberSwapVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY, &ft::swap);
// 	nonMemberSwapVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY, &ft::swap);
// 	nonMemberSwapVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY, &ft::swap);
// }

// TEST_F(ftVectorTest, resizeVector)
// {
// 	resizeVector(intEmptyVector, intFilledVector, intToInsertVector, intX, intY);
// 	resizeVector(floatEmptyVector, floatFilledVector, floatToInsertVector, floatX, floatY);
// 	resizeVector(doubleEmptyVector, doubleFilledVector, doubleToInsertVector, doubleX, doubleY);
// 	resizeVector(stringEmptyVector, stringFilledVector, stringToInsertVector, stringX, stringY);
// }


// TEST_F(ftVectorTest, insertSizeVector)
// {
// 	insertSizeVector(intEmptyVector, intX);
// 	insertSizeVector(floatEmptyVector, floatX);
// 	insertSizeVector(doubleEmptyVector, doubleX);
// 	insertSizeVector(stringEmptyVector, stringX);
// }

TEST_F(ftVectorTest, capacityVector)
{
	capacityVector(intEmptyVector, intX);
	// insertSizeVector(floatEmptyVector, floatX);
	// insertSizeVector(doubleEmptyVector, doubleX);
	// insertSizeVector(stringEmptyVector, stringX);
}

TEST_F(ftVectorTest, resizeCapacityVector)
{
	resizeCapacityVector(intEmptyVector, intX);
	// resizeCapacityVector(floatEmptyVector, floatX);
	// resizeCapacityVector(doubleEmptyVector, doubleX);
	// resizeCapacityVector(stringEmptyVector, stringX);
}
