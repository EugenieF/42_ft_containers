#include "mainTests.hpp"

/**************************************************************/
/*                     RUN STD::STACK TEST                    */
/**************************************************************/

TEST_F(stdStackTest, initSizeStack)
{
	std::cout << std::endl << ORANGE_B;
	std::cout << "                                      ";
	std::cout << "          [ STD::STACK ] " << RESET << std::endl;

	initSizeStack(intEmptyStack, intFilledStack, intToInsertStack);
	initSizeStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	initSizeStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	initSizeStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(stdStackTest, isEmptyStack)
{
	isEmptyStack(intEmptyStack, intFilledStack, intToInsertStack);
	isEmptyStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	isEmptyStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	isEmptyStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(stdStackTest, pushInEmptyStack)
{
	pushInEmptyStack(intEmptyStack, intX);
	pushInEmptyStack(floatEmptyStack, floatX);
	pushInEmptyStack(doubleEmptyStack, doubleX);
	pushInEmptyStack(stringEmptyStack, stringX);
}

TEST_F(stdStackTest, popOneInFilledStack)
{
	popOneInFilledStack(intFilledStack, intX);
	popOneInFilledStack(floatFilledStack, floatX);
	popOneInFilledStack(doubleFilledStack, doubleX);
	popOneInFilledStack(stringFilledStack, stringX);
}

TEST_F(stdStackTest, constructorStack)
{
	constructorStack(intEmptyStack, intFilledStack, intToInsertStack, intX, intY);
	constructorStack(floatEmptyStack, floatFilledStack, floatToInsertStack, floatX, floatY);
	constructorStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack, doubleX, doubleY);
	constructorStack(stringEmptyStack, stringFilledStack, stringToInsertStack, stringX, stringY);
}

TEST_F(stdStackTest, operatorEgalStack)
{
	operatorEgalStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorEgalStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorEgalStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorEgalStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(stdStackTest, operatorEqualStack)
{
	operatorEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(stdStackTest, operatorNotEqualStack)
{
	operatorNotEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorNotEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorNotEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorNotEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(stdStackTest, operatorSupEqualStack)
{
	operatorSupEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorSupEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorSupEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorSupEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(stdStackTest, operatorSupStack)
{
	operatorSupStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorSupStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorSupStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorSupStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(stdStackTest, operatorInfEqualStack)
{
	operatorInfEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorInfEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorInfEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorInfEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(stdStackTest, operatorInfStack)
{
	operatorInfStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorInfStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorInfStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorInfStack(stringEmptyStack, stringFilledStack, stringToInsertStack);
}

TEST_F(stdStackTest, topStack)
{
	topStack(intFilledStack, intToInsertStack, intX, intY);
	topStack(floatFilledStack, floatToInsertStack, floatX, floatY);
	topStack(doubleFilledStack, doubleToInsertStack, doubleX, doubleY);
	topStack(stringFilledStack, stringToInsertStack, stringX, stringY);
}
