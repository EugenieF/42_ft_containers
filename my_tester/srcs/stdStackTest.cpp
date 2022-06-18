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

	initSizeStack(intListEmptyStack, intListFilledStack, intListToInsertStack);
	initSizeStack(stringListEmptyStack, stringListFilledStack, stringListToInsertStack);

	initSizeStack(intDequeEmptyStack, intDequeFilledStack, intDequeToInsertStack);
	initSizeStack(stringDequeEmptyStack, stringDequeFilledStack, stringDequeToInsertStack);
}

TEST_F(stdStackTest, isEmptyStack)
{
	isEmptyStack(intEmptyStack, intFilledStack, intToInsertStack);
	isEmptyStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	isEmptyStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	isEmptyStack(stringEmptyStack, stringFilledStack, stringToInsertStack);

	isEmptyStack(intListEmptyStack, intListFilledStack, intListToInsertStack);
	isEmptyStack(stringListEmptyStack, stringListFilledStack, stringListToInsertStack);

	isEmptyStack(intDequeEmptyStack, intDequeFilledStack, intDequeToInsertStack);
	isEmptyStack(stringDequeEmptyStack, stringDequeFilledStack, stringDequeToInsertStack);
}

TEST_F(stdStackTest, pushInEmptyStack)
{
	pushInEmptyStack(intEmptyStack, intX);
	pushInEmptyStack(floatEmptyStack, floatX);
	pushInEmptyStack(doubleEmptyStack, doubleX);
	pushInEmptyStack(stringEmptyStack, stringX);

	pushInEmptyStack(intListEmptyStack, intX);
	pushInEmptyStack(stringListEmptyStack, stringX);

	pushInEmptyStack(intDequeEmptyStack, intX);
	pushInEmptyStack(stringDequeEmptyStack, stringX);
}

TEST_F(stdStackTest, popOneInFilledStack)
{
	popOneInFilledStack(intFilledStack, intX);
	popOneInFilledStack(floatFilledStack, floatX);
	popOneInFilledStack(doubleFilledStack, doubleX);
	popOneInFilledStack(stringFilledStack, stringX);

	popOneInFilledStack(intListFilledStack, intX);
	popOneInFilledStack(stringListFilledStack, stringX);

	popOneInFilledStack(intDequeFilledStack, intX);
	popOneInFilledStack(stringDequeFilledStack, stringX);
}

TEST_F(stdStackTest, constructorStack)
{
	constructorStack(intEmptyStack, intFilledStack, intToInsertStack, intX, intY);
	constructorStack(floatEmptyStack, floatFilledStack, floatToInsertStack, floatX, floatY);
	constructorStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack, doubleX, doubleY);
	constructorStack(stringEmptyStack, stringFilledStack, stringToInsertStack, stringX, stringY);

	constructorStack(intListEmptyStack, intListFilledStack, intListToInsertStack, intX, intY);
	constructorStack(stringListEmptyStack, stringListFilledStack, stringListToInsertStack, stringX, stringY);

	constructorStack(intDequeEmptyStack, intDequeFilledStack, intDequeToInsertStack, intX, intY);
	constructorStack(stringDequeEmptyStack, stringDequeFilledStack, stringDequeToInsertStack, stringX, stringY);
}

TEST_F(stdStackTest, operatorEgalStack)
{
	operatorEgalStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorEgalStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorEgalStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorEgalStack(stringEmptyStack, stringFilledStack, stringToInsertStack);

	operatorEgalStack(intListEmptyStack, intListFilledStack, intListToInsertStack);
	operatorEgalStack(stringListEmptyStack, stringListFilledStack, stringListToInsertStack);

	operatorEgalStack(intDequeEmptyStack, intDequeFilledStack, intDequeToInsertStack);
	operatorEgalStack(stringDequeEmptyStack, stringDequeFilledStack, stringDequeToInsertStack);
}

TEST_F(stdStackTest, operatorEqualStack)
{
	operatorEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);

	operatorEqualStack(intListEmptyStack, intListFilledStack, intListToInsertStack);
	operatorEqualStack(stringListEmptyStack, stringListFilledStack, stringListToInsertStack);

	operatorEqualStack(intDequeEmptyStack, intDequeFilledStack, intDequeToInsertStack);
	operatorEqualStack(stringDequeEmptyStack, stringDequeFilledStack, stringDequeToInsertStack);
}

TEST_F(stdStackTest, operatorNotEqualStack)
{
	operatorNotEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorNotEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorNotEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorNotEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);

	operatorNotEqualStack(intListEmptyStack, intListFilledStack, intListToInsertStack);
	operatorNotEqualStack(stringListEmptyStack, stringListFilledStack, stringListToInsertStack);

	operatorNotEqualStack(intDequeEmptyStack, intDequeFilledStack, intDequeToInsertStack);
	operatorNotEqualStack(stringDequeEmptyStack, stringDequeFilledStack, stringDequeToInsertStack);
}

TEST_F(stdStackTest, operatorSupEqualStack)
{
	operatorSupEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorSupEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorSupEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorSupEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);

	operatorSupEqualStack(intListEmptyStack, intListFilledStack, intListToInsertStack);
	operatorSupEqualStack(stringListEmptyStack, stringListFilledStack, stringListToInsertStack);

	operatorSupEqualStack(intDequeEmptyStack, intDequeFilledStack, intDequeToInsertStack);
	operatorSupEqualStack(stringDequeEmptyStack, stringDequeFilledStack, stringDequeToInsertStack);
}

TEST_F(stdStackTest, operatorSupStack)
{
	operatorSupStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorSupStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorSupStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorSupStack(stringEmptyStack, stringFilledStack, stringToInsertStack);

	operatorSupStack(intListEmptyStack, intListFilledStack, intListToInsertStack);
	operatorSupStack(stringListEmptyStack, stringListFilledStack, stringListToInsertStack);

	operatorSupStack(intDequeEmptyStack, intDequeFilledStack, intDequeToInsertStack);
	operatorSupStack(stringDequeEmptyStack, stringDequeFilledStack, stringDequeToInsertStack);
}

TEST_F(stdStackTest, operatorInfEqualStack)
{
	operatorInfEqualStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorInfEqualStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorInfEqualStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorInfEqualStack(stringEmptyStack, stringFilledStack, stringToInsertStack);

	operatorInfEqualStack(intListEmptyStack, intListFilledStack, intListToInsertStack);
	operatorInfEqualStack(stringListEmptyStack, stringListFilledStack, stringListToInsertStack);

	operatorInfEqualStack(intDequeEmptyStack, intDequeFilledStack, intDequeToInsertStack);
	operatorInfEqualStack(stringDequeEmptyStack, stringDequeFilledStack, stringDequeToInsertStack);
}

TEST_F(stdStackTest, operatorInfStack)
{
	operatorInfStack(intEmptyStack, intFilledStack, intToInsertStack);
	operatorInfStack(floatEmptyStack, floatFilledStack, floatToInsertStack);
	operatorInfStack(doubleEmptyStack, doubleFilledStack, doubleToInsertStack);
	operatorInfStack(stringEmptyStack, stringFilledStack, stringToInsertStack);

	operatorInfStack(intListEmptyStack, intListFilledStack, intListToInsertStack);
	operatorInfStack(stringListEmptyStack, stringListFilledStack, stringListToInsertStack);

	operatorInfStack(intDequeEmptyStack, intDequeFilledStack, intDequeToInsertStack);
	operatorInfStack(stringDequeEmptyStack, stringDequeFilledStack, stringDequeToInsertStack);
}

TEST_F(stdStackTest, topStack)
{
	topStack(intFilledStack, intToInsertStack, intX, intY);
	topStack(floatFilledStack, floatToInsertStack, floatX, floatY);
	topStack(doubleFilledStack, doubleToInsertStack, doubleX, doubleY);
	topStack(stringFilledStack, stringToInsertStack, stringX, stringY);

	topStack(intListFilledStack, intListToInsertStack, intX, intY);
	topStack(stringListFilledStack, stringListToInsertStack, stringX, stringY);

	topStack(intDequeFilledStack, intDequeToInsertStack, intX, intY);
	topStack(stringDequeFilledStack, stringDequeToInsertStack, stringX, stringY);
}
