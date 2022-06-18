#include "mainTests.hpp"

/*****************************************************************/
/*       			      RUN FT::MAP TEST      			     */
/*****************************************************************/

TEST_F(ftMapTest, initSizeMap)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                        ";
	std::cout << "           [ FT::MAP ] " << RESET << std::endl;

	initSizeMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	initSizeMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	initSizeMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	initSizeMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	initSizeMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	initSizeMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(ftMapTest, isEmptyMap)
{
	isEmptyMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	isEmptyMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	isEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	isEmptyMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	isEmptyMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	isEmptyMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(ftMapTest, insertInEmptyMap)
{
	insertInEmptyMap(intIntEmptyMap, intX, intX, ft::pair<int, int>(0,0));
	insertInEmptyMap(intFloatEmptyMap, intX, floatX, ft::pair<int, float>(0,0.0f));
	insertInEmptyMap(intDoubleEmptyMap, intX, doubleX, ft::pair<int, double>(0,0.0));
	insertInEmptyMap(intStringEmptyMap, intX, stringX, ft::pair<int, std::string>(0,""));
	insertInEmptyMap(stringStringEmptyMap, stringX, stringX, ft::pair<std::string, std::string>("",""));
	insertInEmptyMap(doubleIntEmptyMap, doubleX, intX, ft::pair<double, int>(0.0,0));
}

TEST_F(ftMapTest, insertExistingKeyInFilledMap)
{
	insertExistingKeyInFilledMap(intIntFilledMap, intX, intX, ft::pair<int, int>(0,0));
	insertExistingKeyInFilledMap(intFloatFilledMap, intX, floatX, ft::pair<int, float>(0,0.0f));
	insertExistingKeyInFilledMap(intDoubleFilledMap, intX, doubleX, ft::pair<int, double>(0,0.0));
	insertExistingKeyInFilledMap(intStringFilledMap, intX, stringX, ft::pair<int, std::string>(0,""));
	insertExistingKeyInFilledMap(stringStringFilledMap, stringX, stringX, ft::pair<std::string, std::string>("",""));
	insertExistingKeyInFilledMap(doubleIntFilledMap, doubleX, intX, ft::pair<double, int>(0.0,0));
}

TEST_F(ftMapTest, eraseOneInFilledMap)
{
	eraseOneInFilledMap(intIntFilledMap, intX);
	eraseOneInFilledMap(intFloatFilledMap, intX);
	eraseOneInFilledMap(intDoubleFilledMap, intX);
	eraseOneInFilledMap(intStringFilledMap, intX);
	eraseOneInFilledMap(stringStringFilledMap, stringX);
	eraseOneInFilledMap(doubleIntFilledMap, doubleX);
}

TEST_F(ftMapTest, eraseOneInEmptyMap)
{
	eraseOneInEmptyMap(intIntEmptyMap, intX);
	eraseOneInEmptyMap(intFloatEmptyMap, intX);
	eraseOneInEmptyMap(intDoubleEmptyMap, intX);
	eraseOneInEmptyMap(intStringEmptyMap, intX);
	eraseOneInEmptyMap(stringStringEmptyMap, stringX);
	eraseOneInEmptyMap(doubleIntEmptyMap, doubleX);
}

TEST_F(ftMapTest, insertRangeInEmptyMap)
{
	insertRangeInEmptyMap(intIntEmptyMap, intIntFilledMap, intX, intX);
	insertRangeInEmptyMap(intFloatEmptyMap, intFloatFilledMap, intX, floatX);
	insertRangeInEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intX, doubleX);
	insertRangeInEmptyMap(intStringEmptyMap, intStringFilledMap, intX, stringX);
	insertRangeInEmptyMap(stringStringEmptyMap, stringStringFilledMap, stringX, stringX);
	insertRangeInEmptyMap(doubleIntEmptyMap, doubleIntFilledMap, doubleX, intX);
}

TEST_F(ftMapTest, insertRangeInFilledMap)
{
	insertRangeInFilledMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	insertRangeInFilledMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	insertRangeInFilledMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	insertRangeInFilledMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	insertRangeInFilledMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	insertRangeInFilledMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, eraseRangeInFilledMap)
{
	eraseRangeInFilledMap(intIntFilledMap);
	eraseRangeInFilledMap(intFloatFilledMap);
	eraseRangeInFilledMap(intDoubleFilledMap);
	eraseRangeInFilledMap(intStringFilledMap);
	eraseRangeInFilledMap(stringStringFilledMap);
	eraseRangeInFilledMap(doubleIntFilledMap);
}

TEST_F(ftMapTest, clearMap)
{
	clearMap(intIntEmptyMap, intIntFilledMap);
	clearMap(intFloatEmptyMap, intFloatFilledMap);
	clearMap(intDoubleEmptyMap, intDoubleFilledMap);
	clearMap(intStringEmptyMap, intStringFilledMap);
	clearMap(stringStringEmptyMap, stringStringFilledMap);
	clearMap(doubleIntEmptyMap, doubleIntFilledMap);
}

TEST_F(ftMapTest, swapMap)
{
	swapMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	swapMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	swapMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	swapMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	swapMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	swapMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, maxSizeMap)
{
	maxSizeMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, MAX_SIZE_INT_INT_MAP);
	maxSizeMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, MAX_SIZE_INT_FLOAT_MAP);
	maxSizeMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, MAX_SIZE_INT_DOUBLE_MAP);
	maxSizeMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, MAX_SIZE_INT_STRING_MAP);
	maxSizeMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, MAX_SIZE_STRING_STRING_MAP);
	maxSizeMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, MAX_SIZE_INT_DOUBLE_MAP);
}

TEST_F(ftMapTest, findMap)
{
	findMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	findMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	findMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	findMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	findMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	findMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, constFindMap)
{
	constFindMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constFindMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constFindMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constFindMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constFindMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	constFindMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, countMap)
{
	countMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY);
	countMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY);
	countMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY);
	countMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY);
	countMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY);
	countMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY);
}

TEST_F(ftMapTest, lowerBoundMap)
{
	lowerBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	lowerBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	lowerBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	lowerBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	lowerBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	lowerBoundMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, constLowerBoundMap)
{
	constLowerBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constLowerBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constLowerBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constLowerBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constLowerBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	constLowerBoundMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, upperBoundMap)
{
	upperBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	upperBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	upperBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	upperBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	upperBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	upperBoundMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, constUpperBoundMap)
{
	constUpperBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constUpperBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constUpperBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constUpperBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constUpperBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	constUpperBoundMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, equalRangeMap)
{
	equalRangeMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	equalRangeMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	equalRangeMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	equalRangeMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	equalRangeMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	equalRangeMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, constEqualRangeMap)
{
	constEqualRangeMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constEqualRangeMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constEqualRangeMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constEqualRangeMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constEqualRangeMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	constEqualRangeMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, iteratorMap)
{
	iteratorMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	iteratorMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	iteratorMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	iteratorMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	iteratorMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	iteratorMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, constIteratorMap)
{
	constIteratorMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constIteratorMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constIteratorMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constIteratorMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constIteratorMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	constIteratorMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(ftMapTest, operatorEqualMap)
{
	operatorEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorEqualMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(ftMapTest, operatorNotEqualMap)
{
	operatorNotEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorNotEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorNotEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorNotEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorNotEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorNotEqualMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(ftMapTest, operatorSupEqualMap)
{
	operatorSupEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorSupEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorSupEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorSupEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorSupEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorSupEqualMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(ftMapTest, operatorSupMap)
{
	operatorSupMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorSupMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorSupMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorSupMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorSupMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorSupMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(ftMapTest, operatorInfEqualMap)
{
	operatorInfEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorInfEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorInfEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorInfEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorInfEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorInfEqualMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(ftMapTest, operatorInfMap)
{
	operatorInfMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorInfMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorInfMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorInfMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorInfMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorInfMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(ftMapTest, constructorMap)
{
	constructorMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intX);
	constructorMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, floatX);
	constructorMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, doubleX);
	constructorMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, stringX);
	constructorMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringX);
	constructorMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, intX);
}

TEST_F(ftMapTest, operatorEgalMap)
{
	operatorEgalMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorEgalMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorEgalMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorEgalMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorEgalMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorEgalMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(ftMapTest, nonMemberSwapMap)
{
	nonMemberSwapMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY, &ft::swap);
	nonMemberSwapMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY, &ft::swap);
	nonMemberSwapMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY, &ft::swap);
	nonMemberSwapMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY, &ft::swap);
	nonMemberSwapMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY, &ft::swap);
	nonMemberSwapMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY, &ft::swap);
}

TEST_F(ftMapTest, insertHintMap)
{
	insertHintMap(intIntEmptyMap, intX, intX, ft::pair<int, int>(0,0));
	insertHintMap(intFloatEmptyMap, intX, floatX, ft::pair<int, float>(0,0.0f));
	insertHintMap(intDoubleEmptyMap, intX, doubleX, ft::pair<int, double>(0,0.0));
	insertHintMap(intStringEmptyMap, intX, stringX, ft::pair<int, std::string>(0,""));
	insertHintMap(stringStringEmptyMap, stringX, stringX, ft::pair<std::string, std::string>("",""));
	insertHintMap(doubleIntEmptyMap, doubleX, intX, ft::pair<double, int>(0.0,0));
}

TEST_F(ftMapTest, insertHintTrickyMap)
{
	insertHintTrickyMap(intIntEmptyMap, intX, intX, ft::pair<int, int>(0,0));
	insertHintTrickyMap(intFloatEmptyMap, intX, floatX, ft::pair<int, float>(0,0.0f));
	insertHintTrickyMap(intDoubleEmptyMap, intX, doubleX, ft::pair<int, double>(0,0.0));
	insertHintTrickyMap(intStringEmptyMap, intX, stringX, ft::pair<int, std::string>(0,""));
	insertHintTrickyMap(stringStringEmptyMap, stringX, stringX, ft::pair<std::string, std::string>("",""));
	insertHintTrickyMap(doubleIntEmptyMap, doubleX, intX, ft::pair<double, int>(0.0,0));
}
