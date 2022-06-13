#include "mainTests.hpp"

/*****************************************************************/
/*       			      RUN FT::SET TEST      			     */
/*****************************************************************/

TEST_F(ftSetTest, initSizeSet)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                        ";
	std::cout << "           [ FT::SET ] " << RESET << std::endl;

	initSizeSet(intEmptySet, intFilledSet, intToInsertSet);
	initSizeSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	initSizeSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	initSizeSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, isEmptySet)
{
	isEmptySet(intEmptySet, intFilledSet, intToInsertSet);
	isEmptySet(floatEmptySet, floatFilledSet, floatToInsertSet);
	isEmptySet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	isEmptySet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, insertInEmptySet)
{
	insertInEmptySet(intEmptySet, intX);
	insertInEmptySet(floatEmptySet, floatX);
	insertInEmptySet(doubleEmptySet, doubleX);
	insertInEmptySet(stringEmptySet, stringX);
}

TEST_F(ftSetTest, insertExistingKeyInFilledSet)
{
	insertExistingKeyInFilledSet(intFilledSet, intX);
	insertExistingKeyInFilledSet(floatFilledSet, floatX);
	insertExistingKeyInFilledSet(doubleFilledSet, doubleX);
	insertExistingKeyInFilledSet(stringFilledSet, stringX);
}

TEST_F(ftSetTest, eraseOneInFilledSet)
{
	eraseOneInFilledSet(intFilledSet, intX);
	eraseOneInFilledSet(floatFilledSet,floatX);
	eraseOneInFilledSet(doubleFilledSet, doubleX);
	eraseOneInFilledSet(stringFilledSet, stringX);
}

TEST_F(ftSetTest, eraseOneInEmptySet)
{
	eraseOneInEmptySet(intEmptySet, intX);
	eraseOneInEmptySet(floatEmptySet, floatX);
	eraseOneInEmptySet(doubleEmptySet, doubleX);
	eraseOneInEmptySet(stringEmptySet, stringX);
}

TEST_F(ftSetTest, insertRangeInEmptySet)
{
	insertRangeInEmptySet(intEmptySet, intFilledSet);
	insertRangeInEmptySet(floatEmptySet, floatFilledSet);
	insertRangeInEmptySet(doubleEmptySet, doubleFilledSet);
	insertRangeInEmptySet(stringEmptySet, stringFilledSet);
}

TEST_F(ftSetTest, insertRangeInFilledSet)
{
	insertRangeInFilledSet(intFilledSet, intToInsertSet);
	insertRangeInFilledSet(floatFilledSet, floatToInsertSet);
	insertRangeInFilledSet(doubleFilledSet, doubleToInsertSet);
	insertRangeInFilledSet(stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, eraseRangeInFilledSet)
{
	eraseRangeInFilledSet(intFilledSet);
	eraseRangeInFilledSet(floatFilledSet);
	eraseRangeInFilledSet(doubleFilledSet);
	eraseRangeInFilledSet(stringFilledSet);
}

TEST_F(ftSetTest, clearSet)
{
	clearSet(intEmptySet, intFilledSet);
	clearSet(floatEmptySet, floatFilledSet);
	clearSet(doubleEmptySet, doubleFilledSet);
	clearSet(stringEmptySet, stringFilledSet);
}

TEST_F(ftSetTest, swapSet)
{
	swapSet(intEmptySet, intFilledSet, intToInsertSet);
	swapSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	swapSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	swapSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

// TEST_F(ftSetTest, maxSizeTest)
// {
// 	// maxSizeSet(intEmptySet, intFilledSet, intToInsertSet, MAX_SIZE_INT_SET);
// 	// maxSizeSet(floatEmptySet, floatFilledSet, floatToInsertSet, MAX_SIZE_FLOAT_SET);
// 	maxSizeSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, MAX_SIZE_DOUBLE_SET);
// 	maxSizeSet(stringEmptySet, stringFilledSet, stringToInsertSet, MAX_SIZE_STRING_SET);
// }

TEST_F(ftSetTest, findSet)
{
	findSet(intEmptySet, intFilledSet, intToInsertSet, intX, intY);
	findSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX, floatY);
	findSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	findSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, constFindSet)
{
	constFindSet(intEmptySet, intFilledSet, intToInsertSet, intX, intY);
	constFindSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX, floatY);
	constFindSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	constFindSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, countSet)
{
	countSet(intEmptySet, intFilledSet, intToInsertSet, intX, intY);
	countSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX, floatY);
	countSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	countSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, lowerBoundSet)
{
	lowerBoundSet(intFilledSet, intToInsertSet, intX, intY);
	lowerBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	lowerBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	lowerBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, constLowerBoundSet)
{
	lowerBoundSet(intFilledSet, intToInsertSet, intX, intY);
	lowerBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	lowerBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	lowerBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, upperBoundSet)
{
	upperBoundSet(intFilledSet, intToInsertSet, intX, intY);
	upperBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	upperBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	upperBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, constUpperBoundSet)
{
	constUpperBoundSet(intFilledSet, intToInsertSet, intX, intY);
	constUpperBoundSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	constUpperBoundSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	constUpperBoundSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, equalRangeSet)
{
	equalRangeSet(intFilledSet, intToInsertSet, intX, intY);
	equalRangeSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	equalRangeSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	equalRangeSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, constEqualRangeSet)
{
	constEqualRangeSet(intFilledSet, intToInsertSet, intX, intY);
	constEqualRangeSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	constEqualRangeSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	constEqualRangeSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, iteratorSet)
{
	iteratorSet(intFilledSet, intToInsertSet, intX, intY);
	iteratorSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	iteratorSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	iteratorSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}

TEST_F(ftSetTest, constIteratorSet)
{
	constIteratorSet(intFilledSet, intToInsertSet, intX, intY);
	constIteratorSet(floatFilledSet, floatToInsertSet, floatX, floatY);
	constIteratorSet(doubleFilledSet, doubleToInsertSet, doubleX, doubleY);
	constIteratorSet(stringFilledSet, stringToInsertSet, stringX, stringY);
}


TEST_F(ftSetTest, operatorEqualSet)
{
	operatorEqualSet(intEmptySet, intFilledSet, intToInsertSet);
	operatorEqualSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	operatorEqualSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	operatorEqualSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, operatorNotEqualSet)
{
	operatorNotEqualSet(intEmptySet, intFilledSet, intToInsertSet);
	operatorNotEqualSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	operatorNotEqualSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	operatorNotEqualSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, operatorSupEqualSet)
{
	operatorSupEqualSet(intEmptySet, intFilledSet, intToInsertSet);
	operatorSupEqualSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	operatorSupEqualSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	operatorSupEqualSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, operatorSupSet)
{
	operatorSupSet(intEmptySet, intFilledSet, intToInsertSet);
	operatorSupSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	operatorSupSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	operatorSupSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, operatorInfEqualSet)
{
	operatorInfEqualSet(intEmptySet, intFilledSet, intToInsertSet);
	operatorInfEqualSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	operatorInfEqualSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	operatorInfEqualSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, operatorInfSet)
{
	operatorInfSet(intEmptySet, intFilledSet, intToInsertSet);
	operatorInfSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	operatorInfSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	operatorInfSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, constructorSet)
{
	constructorSet(intEmptySet, intFilledSet, intToInsertSet, intX);
	constructorSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX);
	constructorSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX);
	constructorSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX);
}

TEST_F(ftSetTest, operatorEgalSet)
{
	operatorEgalSet(intEmptySet, intFilledSet, intToInsertSet);
	operatorEgalSet(floatEmptySet, floatFilledSet, floatToInsertSet);
	operatorEgalSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet);
	operatorEgalSet(stringEmptySet, stringFilledSet, stringToInsertSet);
}

TEST_F(ftSetTest, nonMemberSwapSet)
{
	nonMemberSwapSet(intEmptySet, intFilledSet, intToInsertSet, intX, intY, &ft::swap);
	nonMemberSwapSet(floatEmptySet, floatFilledSet, floatToInsertSet, floatX, floatY, &ft::swap);
	nonMemberSwapSet(doubleEmptySet, doubleFilledSet, doubleToInsertSet, doubleX, doubleY, &ft::swap);
	nonMemberSwapSet(stringEmptySet, stringFilledSet, stringToInsertSet, stringX, stringY, &ft::swap);
}
