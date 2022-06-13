#include "mainTests.hpp"

/**************************************************************/
/*                   		   TEST                           */
/**************************************************************/

template <typename T>
void	initSizeStack(T emptyStack, T filledStack, T toInsertStack)
{
	EXPECT_EQ(emptyStack.size(), (size_t)0);
	EXPECT_EQ(filledStack.size(), (size_t)10);
	EXPECT_EQ(toInsertStack.size(), (size_t)5);
}

template <typename T>
void	isEmptyStack(T emptyStack, T filledStack, T toInsertStack)
{
	EXPECT_EQ(emptyStack.empty(), true);
	EXPECT_EQ(filledStack.empty(), false);
	EXPECT_EQ(toInsertStack.empty(), false);
}

template <typename T, typename U>
void	pushInEmptyStack(T emptyStack, U varX)
{
	for (int i = 0; i < 10; i++)
	{
		emptyStack.push(varX[i]);
		EXPECT_EQ(emptyStack.top(), varX[i]);
	}
}

template <typename T, typename U>
void	popOneInFilledStack(T filledStack, U varX)
{
	filledStack.pop();
	EXPECT_EQ(filledStack.top(), varX[8]);
	EXPECT_EQ(filledStack.size(), (size_t)9);
}

template <typename T, typename U>
void	constructorStack(T emptyStack, T filledStack, T toInsertStack, U varX, U varY)
{
	T	newEmptyStack;
	EXPECT_EQ(newEmptyStack.empty(), true);
	EXPECT_EQ(emptyStack == newEmptyStack, true);

	T	copyEmptyStack(emptyStack);
	EXPECT_EQ(copyEmptyStack.empty(), true);
	EXPECT_EQ(emptyStack == copyEmptyStack, true);

	T	copyFilledStack(filledStack);
	EXPECT_EQ(copyFilledStack.size(), (size_t)10);
	EXPECT_EQ(copyFilledStack.top(), varX[9]);
	EXPECT_EQ(filledStack == copyFilledStack, true);

	T	copyToInsertStack(toInsertStack);
	EXPECT_EQ(copyToInsertStack.size(), (size_t)5);
	EXPECT_EQ(copyToInsertStack.top(), varY[4]);
	EXPECT_EQ(toInsertStack == copyToInsertStack, true);
}

template <typename T>
void	operatorEgalStack(T emptyStack, T filledStack, T toInsertStack)
{
	T newStack;

	newStack = filledStack;
	EXPECT_EQ(newStack.empty(), false);
	EXPECT_EQ(newStack == filledStack, true);

	newStack = emptyStack;
	EXPECT_EQ(newStack.empty(), true);
	EXPECT_EQ(newStack == filledStack, false);
	EXPECT_EQ(newStack == emptyStack, true);

	newStack = toInsertStack;
	EXPECT_EQ(newStack.empty(), false);
	EXPECT_EQ(newStack == emptyStack, false);
	EXPECT_EQ(newStack == toInsertStack, true);
}

template <typename T>
void	operatorEqualStack(T emptyStack, T filledStack, T toInsertStack)
{
	T	copyFilledStack(filledStack);

	EXPECT_EQ(emptyStack == emptyStack, true);
	EXPECT_EQ(emptyStack == filledStack, false);
	EXPECT_EQ(emptyStack == toInsertStack, false);
	EXPECT_EQ(filledStack == toInsertStack, false);

	EXPECT_EQ(filledStack == copyFilledStack, true);
	EXPECT_EQ(copyFilledStack == filledStack, true);
	copyFilledStack.pop();
	EXPECT_EQ(filledStack == copyFilledStack, false);
	EXPECT_EQ(copyFilledStack == filledStack, false);
}

template <typename T>
void	operatorNotEqualStack(T emptyStack, T filledStack, T toInsertStack)
{
	T	copyFilledStack(filledStack);

	EXPECT_EQ(emptyStack != emptyStack, false);
	EXPECT_EQ(emptyStack != filledStack, true);
	EXPECT_EQ(emptyStack != toInsertStack, true);
	EXPECT_EQ(filledStack != toInsertStack, true);

	EXPECT_EQ(filledStack != copyFilledStack, false);
	EXPECT_EQ(copyFilledStack != filledStack, false);
	copyFilledStack.pop();
	EXPECT_EQ(filledStack != copyFilledStack, true);
	EXPECT_EQ(copyFilledStack != filledStack, true);
}

template <typename T>
void	operatorSupEqualStack(T emptyStack, T filledStack, T toInsertStack)
{
	T	copyFilledStack(filledStack);

	EXPECT_EQ(emptyStack >= emptyStack, true);
	EXPECT_EQ(emptyStack >= filledStack, false);
	EXPECT_EQ(emptyStack >= toInsertStack, false);
	EXPECT_EQ(filledStack >= toInsertStack, false);
	EXPECT_EQ(filledStack >= emptyStack, true);
	EXPECT_EQ(toInsertStack >= emptyStack, true);
	EXPECT_EQ(toInsertStack >= filledStack, true);

	EXPECT_EQ(filledStack >= copyFilledStack, true);
	EXPECT_EQ(copyFilledStack >= filledStack, true);
	copyFilledStack.pop();
	EXPECT_EQ(filledStack >= copyFilledStack, true);
	EXPECT_EQ(copyFilledStack >= filledStack, false);
	filledStack.pop();
	filledStack.pop();
	EXPECT_EQ(filledStack >= copyFilledStack, false);
	EXPECT_EQ(copyFilledStack >= filledStack, true);
}

template <typename T>
void	operatorSupStack(T emptyStack, T filledStack, T toInsertStack)
{
	T	copyFilledStack(filledStack);

	EXPECT_EQ(emptyStack > emptyStack, false);
	EXPECT_EQ(emptyStack > filledStack, false);
	EXPECT_EQ(emptyStack > toInsertStack, false);
	EXPECT_EQ(filledStack > toInsertStack, false);
	EXPECT_EQ(filledStack > emptyStack, true);
	EXPECT_EQ(toInsertStack > emptyStack, true);
	EXPECT_EQ(toInsertStack > filledStack, true);

	EXPECT_EQ(filledStack > copyFilledStack, false);
	EXPECT_EQ(copyFilledStack > filledStack, false);
	copyFilledStack.pop();
	EXPECT_EQ(filledStack > copyFilledStack, true);
	EXPECT_EQ(copyFilledStack > filledStack, false);
	filledStack.pop();
	filledStack.pop();
	EXPECT_EQ(filledStack > copyFilledStack, false);
	EXPECT_EQ(copyFilledStack > filledStack, true);
}

template <typename T>
void	operatorInfEqualStack(T emptyStack, T filledStack, T toInsertStack)
{
	T	copyFilledStack(filledStack);

	EXPECT_EQ(emptyStack <= emptyStack, true);
	EXPECT_EQ(emptyStack <= filledStack, true);
	EXPECT_EQ(emptyStack <= toInsertStack, true);
	EXPECT_EQ(filledStack <= toInsertStack, true);
	EXPECT_EQ(filledStack <= emptyStack, false);
	EXPECT_EQ(toInsertStack <= emptyStack, false);
	EXPECT_EQ(toInsertStack <= filledStack, false);

	EXPECT_EQ(filledStack <= copyFilledStack, true);
	EXPECT_EQ(copyFilledStack <= filledStack, true);
	copyFilledStack.pop();
	EXPECT_EQ(filledStack <= copyFilledStack, false);
	EXPECT_EQ(copyFilledStack <= filledStack, true);
	filledStack.pop();
	filledStack.pop();
	EXPECT_EQ(filledStack <= copyFilledStack, true);
	EXPECT_EQ(copyFilledStack <= filledStack, false);
}

template <typename T>
void	operatorInfStack(T emptyStack, T filledStack, T toInsertStack)
{
	T	copyFilledStack(filledStack);
	T	copyBisFilledStack(filledStack);

	EXPECT_EQ(emptyStack < emptyStack, false);
	EXPECT_EQ(emptyStack < filledStack, true);
	EXPECT_EQ(emptyStack < toInsertStack, true);
	EXPECT_EQ(filledStack < toInsertStack, true);
	EXPECT_EQ(filledStack < emptyStack, false);
	EXPECT_EQ(toInsertStack < emptyStack, false);
	EXPECT_EQ(toInsertStack < filledStack, false);

	EXPECT_EQ(filledStack < copyFilledStack, false);
	EXPECT_EQ(copyFilledStack < filledStack, false);
	copyFilledStack.pop();
	EXPECT_EQ(filledStack < copyFilledStack, false);
	EXPECT_EQ(copyFilledStack < filledStack, true);
	filledStack.pop();
	filledStack.pop();
	EXPECT_EQ(filledStack < copyFilledStack, true);
	EXPECT_EQ(copyFilledStack < filledStack, false);
}

template <typename T, typename U>
void	topStack(T filledStack, T toInsertStack, U varX, U varY)
{
	for (int i = 9; i >= 0; i--)
	{
		EXPECT_EQ(filledStack.top(), varX[i]);
		filledStack.pop();
	}
	for (int i = 4; i >= 0; i--)
	{
		EXPECT_EQ(toInsertStack.top(), varY[i]);
		toInsertStack.pop();
	}
}

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
