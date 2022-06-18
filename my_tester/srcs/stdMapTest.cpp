#include "mainTests.hpp"

/*****************************************************************/
/*       			     RUN STD::MAP TEST      			     */
/*****************************************************************/

TEST_F(stdMapTest, initSizeMap)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                        ";
	std::cout << "          [ STD::MAP ] " << RESET << std::endl;

	initSizeMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	initSizeMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	initSizeMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	initSizeMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	initSizeMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	initSizeMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(stdMapTest, isEmptyMap)
{
	isEmptyMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	isEmptyMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	isEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	isEmptyMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	isEmptyMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	isEmptyMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(stdMapTest, insertInEmptyMap)
{
	insertInEmptyMap(intIntEmptyMap, intX, intX, std::pair<int, int>(0,0));
	insertInEmptyMap(intFloatEmptyMap, intX, floatX, std::pair<int, float>(0,0.0f));
	insertInEmptyMap(intDoubleEmptyMap, intX, doubleX, std::pair<int, double>(0,0.0));
	insertInEmptyMap(intStringEmptyMap, intX, stringX, std::pair<int, std::string>(0,""));
	insertInEmptyMap(stringStringEmptyMap, stringX, stringX, std::pair<std::string, std::string>("",""));
	insertInEmptyMap(doubleIntEmptyMap, doubleX, intX, std::pair<double, int>(0.0,0));
}

TEST_F(stdMapTest, insertExistingKeyInFilledMap)
{
	insertExistingKeyInFilledMap(intIntFilledMap, intX, intX, std::pair<int, int>(0,0));
	insertExistingKeyInFilledMap(intFloatFilledMap, intX, floatX, std::pair<int, float>(0,0.0f));
	insertExistingKeyInFilledMap(intDoubleFilledMap, intX, doubleX, std::pair<int, double>(0,0.0));
	insertExistingKeyInFilledMap(intStringFilledMap, intX, stringX, std::pair<int, std::string>(0,""));
	insertExistingKeyInFilledMap(stringStringFilledMap, stringX, stringX, std::pair<std::string, std::string>("",""));
	insertExistingKeyInFilledMap(doubleIntFilledMap, doubleX, intX, std::pair<double, int>(0.0,0));
}

TEST_F(stdMapTest, eraseOneInFilledMap)
{
	eraseOneInFilledMap(intIntFilledMap, intX);
	eraseOneInFilledMap(intFloatFilledMap,intX);
	eraseOneInFilledMap(intDoubleFilledMap, intX);
	eraseOneInFilledMap(intStringFilledMap, intX);
	eraseOneInFilledMap(stringStringFilledMap, stringX);
	eraseOneInFilledMap(doubleIntFilledMap, doubleX);
}

TEST_F(stdMapTest, eraseOneInEmptyMap)
{
	eraseOneInEmptyMap(intIntEmptyMap, intX);
	eraseOneInEmptyMap(intFloatEmptyMap, intX);
	eraseOneInEmptyMap(intDoubleEmptyMap, intX);
	eraseOneInEmptyMap(intStringEmptyMap, intX);
	eraseOneInEmptyMap(stringStringEmptyMap, stringX);
	eraseOneInEmptyMap(doubleIntEmptyMap, doubleX);
}

TEST_F(stdMapTest, insertRangeInEmptyMap)
{
	insertRangeInEmptyMap(intIntEmptyMap, intIntFilledMap, intX, intX);
	insertRangeInEmptyMap(intFloatEmptyMap, intFloatFilledMap, intX, floatX);
	insertRangeInEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intX, doubleX);
	insertRangeInEmptyMap(intStringEmptyMap, intStringFilledMap, intX, stringX);
	insertRangeInEmptyMap(stringStringEmptyMap, stringStringFilledMap, stringX, stringX);
	insertRangeInEmptyMap(doubleIntEmptyMap, doubleIntFilledMap, doubleX, intX);
}

TEST_F(stdMapTest, insertRangeInFilledMap)
{
	insertRangeInFilledMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	insertRangeInFilledMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	insertRangeInFilledMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	insertRangeInFilledMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	insertRangeInFilledMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	insertRangeInFilledMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, eraseRangeInFilledMap)
{
	eraseRangeInFilledMap(intIntFilledMap);
	eraseRangeInFilledMap(intFloatFilledMap);
	eraseRangeInFilledMap(intDoubleFilledMap);
	eraseRangeInFilledMap(intStringFilledMap);
	eraseRangeInFilledMap(stringStringFilledMap);
	eraseRangeInFilledMap(doubleIntFilledMap);
}

TEST_F(stdMapTest, clearMap)
{
	clearMap(intIntEmptyMap, intIntFilledMap);
	clearMap(intFloatEmptyMap, intFloatFilledMap);
	clearMap(intDoubleEmptyMap, intDoubleFilledMap);
	clearMap(intStringEmptyMap, intStringFilledMap);
	clearMap(stringStringEmptyMap, stringStringFilledMap);
	clearMap(doubleIntEmptyMap, doubleIntFilledMap);
}

TEST_F(stdMapTest, swapMap)
{
	swapMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	swapMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	swapMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	swapMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	swapMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	swapMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, maxSizeMap)
{
	maxSizeMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, MAX_SIZE_INT_INT_MAP);
	maxSizeMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, MAX_SIZE_INT_FLOAT_MAP);
	maxSizeMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, MAX_SIZE_INT_DOUBLE_MAP);
	maxSizeMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, MAX_SIZE_INT_STRING_MAP);
	maxSizeMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, MAX_SIZE_STRING_STRING_MAP);
	maxSizeMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, MAX_SIZE_INT_DOUBLE_MAP);
}

TEST_F(stdMapTest, findMap)
{
	findMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	findMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	findMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	findMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	findMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	findMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, constFindMap)
{
	constFindMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constFindMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constFindMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constFindMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constFindMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	constFindMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, countMap)
{
	countMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY);
	countMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY);
	countMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY);
	countMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY);
	countMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY);
	countMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY);
}

TEST_F(stdMapTest, lowerBoundMap)
{
	lowerBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	lowerBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	lowerBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	lowerBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	lowerBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	lowerBoundMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, constLowerBoundMap)
{
	constLowerBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constLowerBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constLowerBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constLowerBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constLowerBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	constLowerBoundMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, upperBoundMap)
{
	upperBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	upperBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	upperBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	upperBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	upperBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	upperBoundMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, constUpperBoundMap)
{
	constUpperBoundMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constUpperBoundMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constUpperBoundMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constUpperBoundMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constUpperBoundMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	constUpperBoundMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, equalRangeMap)
{
	equalRangeMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	equalRangeMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	equalRangeMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	equalRangeMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	equalRangeMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	equalRangeMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, constEqualRangeMap)
{
	constEqualRangeMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constEqualRangeMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constEqualRangeMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constEqualRangeMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constEqualRangeMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	constEqualRangeMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, iteratorMap)
{
	iteratorMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	iteratorMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	iteratorMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	iteratorMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	iteratorMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	iteratorMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, constIteratorMap)
{
	constIteratorMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	constIteratorMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	constIteratorMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	constIteratorMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
	constIteratorMap(stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY);
	constIteratorMap(doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY);
}

TEST_F(stdMapTest, operatorEqualMap)
{
	operatorEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorEqualMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(stdMapTest, operatorNotEqualMap)
{
	operatorNotEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorNotEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorNotEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorNotEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorNotEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorNotEqualMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(stdMapTest, operatorSupEqualMap)
{
	operatorSupEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorSupEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorSupEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorSupEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorSupEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorSupEqualMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(stdMapTest, operatorSupMap)
{
	operatorSupMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorSupMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorSupMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorSupMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorSupMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorSupMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(stdMapTest, operatorInfEqualMap)
{
	operatorInfEqualMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorInfEqualMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorInfEqualMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorInfEqualMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorInfEqualMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorInfEqualMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(stdMapTest, operatorInfMap)
{
	operatorInfMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorInfMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorInfMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorInfMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorInfMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorInfMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(stdMapTest, constructorMap)
{
	constructorMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intX);
	constructorMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, floatX);
	constructorMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, doubleX);
	constructorMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, stringX);
	constructorMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringX);
	constructorMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, intX);
}

TEST_F(stdMapTest, operatorEgalMap)
{
	operatorEgalMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	operatorEgalMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	operatorEgalMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	operatorEgalMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
	operatorEgalMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap);
	operatorEgalMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap);
}

TEST_F(stdMapTest, nonMemberSwapMap)
{
	nonMemberSwapMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY, &std::swap);
	nonMemberSwapMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY, &std::swap);
	nonMemberSwapMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY, &std::swap);
	nonMemberSwapMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY, &std::swap);
	nonMemberSwapMap(stringStringEmptyMap, stringStringFilledMap, stringStringToInsertMap, stringX, stringY, stringX, stringY, &std::swap);
	nonMemberSwapMap(doubleIntEmptyMap, doubleIntFilledMap, doubleIntToInsertMap, doubleX, doubleY, intX, intY, &std::swap);
}

TEST_F(stdMapTest, insertHintMap)
{
	insertHintMap(intIntEmptyMap, intX, intX, std::pair<int, int>(0,0));
	insertHintMap(intFloatEmptyMap, intX, floatX, std::pair<int, float>(0,0.0f));
	insertHintMap(intDoubleEmptyMap, intX, doubleX, std::pair<int, double>(0,0.0));
	insertHintMap(intStringEmptyMap, intX, stringX, std::pair<int, std::string>(0,""));
	insertHintMap(stringStringEmptyMap, stringX, stringX, std::pair<std::string, std::string>("",""));
	insertHintMap(doubleIntEmptyMap, doubleX, intX, std::pair<double, int>(0.0,0));
}

TEST_F(stdMapTest, insertHintTrickyMap)
{
	insertHintTrickyMap(intIntEmptyMap, intX, intX, std::pair<int, int>(0,0));
	insertHintTrickyMap(intFloatEmptyMap, intX, floatX, std::pair<int, float>(0,0.0f));
	insertHintTrickyMap(intDoubleEmptyMap, intX, doubleX, std::pair<int, double>(0,0.0));
	insertHintTrickyMap(intStringEmptyMap, intX, stringX, std::pair<int, std::string>(0,""));
	insertHintTrickyMap(stringStringEmptyMap, stringX, stringX, std::pair<std::string, std::string>("",""));
	insertHintTrickyMap(doubleIntEmptyMap, doubleX, intX, std::pair<double, int>(0.0,0));
}
