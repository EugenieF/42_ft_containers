#include "mainTests.hpp"

/**************************************************************/
/*                     RUN FT::STACK TEST                     */
/**************************************************************/

TEST_F(ftStackTest, initSizeStack)
{
	std::cout << std::endl << BLUE_B;
	std::cout << "                                      ";
	std::cout << "           [ FT::STACK ] " << RESET << std::endl;

	initSizeStack(intEmptyStack, intFilledStack, intToInsertStack);
	initSizeStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	initSizeStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	initSizeStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(ftStackTest, isEmptyStack)
{
	isEmptyStack(intEmptyStack, intFilledStack, intToInsertStack);
	isEmptyStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	isEmptyStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	isEmptyStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(ftStackTest, pushInEmptyStack)
{
	pushInEmptyStack(intEmptyStack, intX);
	pushInEmptyStack(floatEmptyStack, floatX);
	pushInEmptyStack(doubleEmptyStack, doubleX);
	pushInEmptyStack(stringEmptyStack, stringX);
}

TEST_F(ftStackTest, popOneInFilledStack)
{
	popOneInFilledStack(intFilledStack, intX);
	popOneInFilledStack(floatFilledStack, floatX);
	popOneInFilledStack(doubleFilledStack, doubleX);
	popOneInFilledStack(stringFilledStack, stringX);
}

TEST_F(ftStackTest, constructorStack)
{
	constructorStack(intEmptyStack, intFilledStack, intToInsertStack, intX, intY);
	constructorStack(floatEmptyStack, floatFilledStack, floatToInsertStack, floatX, floatY);
	constructorStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack, doubleX, doubleY);
	constructorStack(stringEmptyStack, stringFilledStack, stringToInsertStack, stringX, stringY);
}

TEST_F(ftStackTest, operatorEgalStack)
{
	operatorEgalStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorEgalStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorEgalStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorEgalStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(ftStackTest, operatorEqualStack)
{
	operatorEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(ftStackTest, operatorNotEqualStack)
{
	operatorNotEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorNotEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorNotEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorNotEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(ftStackTest, operatorSupEqualStack)
{
	operatorSupEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorSupEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorSupEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorSupEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(ftStackTest, operatorSupStack)
{
	operatorSupStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorSupStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorSupStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorSupStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(ftStackTest, operatorInfEqualStack)
{
	operatorInfEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorInfEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorInfEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorInfEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(ftStackTest, operatorInfStack)
{
	operatorInfStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorInfStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorInfStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorInfStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(ftStackTest, topStack)
{
	topStack(intFilledStack, intToInsertStack, intX, intY);
	topStack(floatFilledStack, floatToInsertStack, floatX, floatY);
	topStack(doubleFilledStack, doubleToInsertStack, doubleX, doubleY);
	topStack(stringFilledStack, stringToInsertStack, stringX, stringY);
}
