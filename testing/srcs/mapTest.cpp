#include "mainTests.hpp"

/*****************************************************************/
/*       			           TEST      		        	     */
/*****************************************************************/

template <typename T>
void	initSizeMap(T emptyMap, T filledMap, T toInsertMap)
{
	EXPECT_EQ(emptyMap.size(), (size_t)0);
	EXPECT_EQ(filledMap.size(), (size_t)10);
	EXPECT_EQ(toInsertMap.size(), (size_t)5);
}

template <typename T>
void	isEmptyMap(T emptyMap, T filledMap, T toInsertMap)
{
	EXPECT_EQ(emptyMap.empty(), true);
	EXPECT_EQ(filledMap.empty(), false);
	EXPECT_EQ(toInsertMap.empty(), false);
}

template <typename T, typename U, typename V, typename W>
void	insertInEmptyMap(T emptyMap, U varX1, V varX2, W pairType)
{
	(void)pairType;
	for (int i = 0; i < 10; i++)
	{
		emptyMap.insert(W(varX1[i], varX2[i]));
		EXPECT_EQ(emptyMap[varX1[i]], varX2[i]);
	}
}

template <typename T, typename U, typename V, typename W>
void	insertExistingKeyInFilledMap(T filledMap, U varX1, V varX2, W pairType)
{
	(void)pairType;
	size_t	expectedSize = (size_t)10;

	for (int i = 0; i < 10; i++)
	{
		filledMap.insert(W(varX1[i], varX2[5]));
		EXPECT_EQ(filledMap[varX1[i]], varX2[i]);
	}
	EXPECT_EQ(filledMap.size(), expectedSize);
}

template <typename T, typename U>
void	eraseOneInFilledMap(T filledMap, U varX)
{
	size_t	ret;
	size_t	expectedRet = (size_t)1;
	size_t	expectedSize = (size_t)9;

	ret = filledMap.erase(varX[2]);
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(filledMap.size(), expectedSize);
}

template <typename T, typename U>
void	eraseOneInEmptyMap(T emptyMap, U varX)
{
	size_t	ret;
	size_t	expectedRet = (size_t)0;

	ret = emptyMap.erase(varX[0]);	
	EXPECT_EQ(ret, expectedRet);
	EXPECT_EQ(emptyMap.empty(), true);
}

template <typename T, typename U, typename V>
void	insertRangeInEmptyMap(T emptyMap, T filledMap, U varX1, V varX2)
{
	size_t	expectedSize = (size_t)10;

	emptyMap.insert(filledMap.begin(), filledMap.end());
	EXPECT_EQ(filledMap.size(), expectedSize);

	for (int i = 0; i < 10; i++)
		EXPECT_EQ(emptyMap[varX1[i]], varX2[i]);
}

template <typename T, typename U, typename V>
void	insertRangeInFilledMap(
	T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	size_t	expectedSize = (size_t)15;

	filledMap.insert(toInsertMap.begin(), toInsertMap.end());
	EXPECT_EQ(filledMap.size(), expectedSize);

	for (int i = 0; i < 10; i++)
		EXPECT_EQ(filledMap[varX1[i]], varX2[i]);

	for (int i = 0; i < 5; i++)
		EXPECT_EQ(filledMap[varY1[i]], varY2[i]);
}

template <typename T>
void	eraseRangeInFilledMap(T filledMap)
{
	size_t	expectedSize = (size_t)0;

	filledMap.erase(filledMap.begin(), filledMap.end());
	EXPECT_EQ(filledMap.size(), expectedSize);
}

template <typename T>
void	clearMap(T emptyMap, T filledMap)
{
	emptyMap.clear();
	EXPECT_EQ(emptyMap.size(), (size_t)0);

	filledMap.clear();
	EXPECT_EQ(filledMap.size(), (size_t)0);
}

template <typename T, typename U, typename V>
void	swapMap(T emptyMap, T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	emptyMap.swap(filledMap);
	for (int i = 0; i < 10; i++)
		EXPECT_EQ(emptyMap[varX1[i]], varX2[i]);
	EXPECT_EQ(emptyMap.size(), (size_t)10);
	EXPECT_EQ(filledMap.size(), (size_t)0);

	filledMap.swap(toInsertMap);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(filledMap[varY1[i]], varY2[i]);
	EXPECT_EQ(filledMap.size(), (size_t)5);
	EXPECT_EQ(toInsertMap.size(), (size_t)0);
}

template <typename T>
void	maxSizeMap(T emptyMap, T filledMap, T toInsertMap)
{
	(void)filledMap;
	(void)toInsertMap;
	std::cout << "MaxSize: " << emptyMap.max_size() << std::endl;
}

template <typename T, typename U, typename V>
void	findMap(T emptyMap, T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	(void)emptyMap;

	typedef typename T::iterator	iterator;

	iterator				it;

	for (int i = 0; i < 10; i++)
	{
		it = filledMap.find(varX1[i]);
		EXPECT_EQ(it.current->data.first, varX1[i]);
		EXPECT_EQ(it.current->data.second, varX2[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		it = toInsertMap.find(varY1[i]);
		EXPECT_EQ(it.current->data.first, varY1[i]);
		EXPECT_EQ(it.current->data.second, varY2[i]);
	}
}

template <typename T, typename U, typename V>
void	constFindMap(T emptyMap, T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
{
	(void)emptyMap;	// test with emptyMap

	typedef typename T::const_iterator	const_iterator;

	const_iterator		const_it;

	for (int i = 0; i < 10; i++)
	{
		const_it = filledMap.find(varX1[i]);
		EXPECT_EQ(const_it.current->data.first, varX1[i]);
		EXPECT_EQ(const_it.current->data.second, varX2[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		const_it = toInsertMap.find(varY1[i]);
		EXPECT_EQ(const_it.current->data.first, varY1[i]);
		EXPECT_EQ(const_it.current->data.second, varY2[i]);
	}
}

template <typename T, typename U>
void	countMap(T emptyMap, T filledMap, T toInsertMap, U varX, U varY)
{
	for (int i = 0; i < 10; i++)
		EXPECT_EQ(emptyMap.count(varX[i]), (size_t)0);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(emptyMap.count(varY[i]), (size_t)0);

	for (int i = 0; i < 10; i++)
		EXPECT_EQ(filledMap.count(varX[i]), (size_t)1);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(filledMap.count(varY[i]), (size_t)0);

	for (int i = 0; i < 10; i++)
		EXPECT_EQ(toInsertMap.count(varX[i]), (size_t)0);
	for (int i = 0; i < 5; i++)
		EXPECT_EQ(toInsertMap.count(varY[i]), (size_t)1);
}

// template <typename T, typename U, typename V>
// void	lowerBoundMap(T emptyMap, T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
// {

// }

// template <typename T, typename U, typename V>
// void	upperBoundMap(T emptyMap, T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
// {

// }

// template <typename T, typename U, typename V>
// void	equalRangeMap(T emptyMap, T filledMap, T toInsertMap, U varX1, U varY1, V varX2, V varY2)
// {

// }

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
}

TEST_F(stdMapTest, isEmptyMap)
{
	isEmptyMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	isEmptyMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	isEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	isEmptyMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
}

TEST_F(stdMapTest, insertInEmptyMap)
{
	insertInEmptyMap(intIntEmptyMap, intX, intX, std::pair<int, int>(0,0));
	insertInEmptyMap(intFloatEmptyMap, intX, floatX, std::pair<int, float>(0,0.0f));
	insertInEmptyMap(intDoubleEmptyMap, intX, doubleX, std::pair<int, double>(0,0.0));
	insertInEmptyMap(intStringEmptyMap, intX, stringX, std::pair<int, std::string>(0,""));
}

TEST_F(stdMapTest, insertExistingKeyInFilledMap)
{
	insertExistingKeyInFilledMap(intIntFilledMap, intX, intX, std::pair<int, int>(0,0));
	insertExistingKeyInFilledMap(intFloatFilledMap, intX, floatX, std::pair<int, float>(0,0.0f));
	insertExistingKeyInFilledMap(intDoubleFilledMap, intX, doubleX, std::pair<int, double>(0,0.0));
	insertExistingKeyInFilledMap(intStringFilledMap, intX, stringX, std::pair<int, std::string>(0,""));
}

TEST_F(stdMapTest, eraseOneInFilledMap)
{
	eraseOneInFilledMap(intIntFilledMap, intX);
	eraseOneInFilledMap(intFloatFilledMap,intX);
	eraseOneInFilledMap(intDoubleFilledMap, intX);
	eraseOneInFilledMap(intStringFilledMap, intX);
}

TEST_F(stdMapTest, eraseOneInEmptyMap)
{
	eraseOneInEmptyMap(intIntEmptyMap, intX);
	eraseOneInEmptyMap(intFloatEmptyMap, intX);
	eraseOneInEmptyMap(intDoubleEmptyMap, intX);
	eraseOneInEmptyMap(intStringEmptyMap, intX);
}

TEST_F(stdMapTest, insertRangeInEmptyMap)
{
	insertRangeInEmptyMap(intIntEmptyMap, intIntFilledMap, intX, intX);
	insertRangeInEmptyMap(intFloatEmptyMap, intFloatFilledMap, intX, floatX);
	insertRangeInEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intX, doubleX);
	insertRangeInEmptyMap(intStringEmptyMap, intStringFilledMap, intX, stringX);
}

TEST_F(stdMapTest, insertRangeInFilledMap)
{
	insertRangeInFilledMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	insertRangeInFilledMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	insertRangeInFilledMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	insertRangeInFilledMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
}

TEST_F(stdMapTest, eraseRangeInFilledMap)
{
	eraseRangeInFilledMap(intIntFilledMap);
	eraseRangeInFilledMap(intFloatFilledMap);
	eraseRangeInFilledMap(intDoubleFilledMap);
	eraseRangeInFilledMap(intStringFilledMap);
}

TEST_F(stdMapTest, clearMap)
{
	clearMap(intIntEmptyMap, intIntFilledMap);
	clearMap(intFloatEmptyMap, intFloatFilledMap);
	clearMap(intDoubleEmptyMap, intDoubleFilledMap);
	clearMap(intStringEmptyMap, intStringFilledMap);
}

TEST_F(stdMapTest, swapMap)
{
	swapMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	swapMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	swapMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	swapMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
}

TEST_F(stdMapTest, maxSizeMap)
{
	maxSizeMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	maxSizeMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	maxSizeMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	maxSizeMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
}

TEST_F(stdMapTest, countMap)
{
	countMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY);
	countMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY);
	countMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY);
	countMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY);
}

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
}

TEST_F(ftMapTest, isEmptyMap)
{
	isEmptyMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	isEmptyMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	isEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	isEmptyMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
}

TEST_F(ftMapTest, insertInEmptyMap)
{
	insertInEmptyMap(intIntEmptyMap, intX, intX, ft::pair<int, int>(0,0));
	insertInEmptyMap(intFloatEmptyMap, intX, floatX, ft::pair<int, float>(0,0.0f));
	insertInEmptyMap(intDoubleEmptyMap, intX, doubleX, ft::pair<int, double>(0,0.0));
	insertInEmptyMap(intStringEmptyMap, intX, stringX, ft::pair<int, std::string>(0,""));
}

TEST_F(ftMapTest, insertExistingKeyInFilledMap)
{
	insertExistingKeyInFilledMap(intIntFilledMap, intX, intX, ft::pair<int, int>(0,0));
	insertExistingKeyInFilledMap(intFloatFilledMap, intX, floatX, ft::pair<int, float>(0,0.0f));
	insertExistingKeyInFilledMap(intDoubleFilledMap, intX, doubleX, ft::pair<int, double>(0,0.0));
	insertExistingKeyInFilledMap(intStringFilledMap, intX, stringX, ft::pair<int, std::string>(0,""));
}

TEST_F(ftMapTest, eraseOneInFilledMap)
{
	eraseOneInFilledMap(intIntFilledMap, intX);
	eraseOneInFilledMap(intFloatFilledMap, intX);
	eraseOneInFilledMap(intDoubleFilledMap, intX);
	eraseOneInFilledMap(intStringFilledMap, intX);
}

TEST_F(ftMapTest, eraseOneInEmptyMap)
{
	eraseOneInEmptyMap(intIntEmptyMap, intX);
	eraseOneInEmptyMap(intFloatEmptyMap, intX);
	eraseOneInEmptyMap(intDoubleEmptyMap, intX);
	eraseOneInEmptyMap(intStringEmptyMap, intX);
}

TEST_F(ftMapTest, insertRangeInEmptyMap)
{
	insertRangeInEmptyMap(intIntEmptyMap, intIntFilledMap, intX, intX);
	insertRangeInEmptyMap(intFloatEmptyMap, intFloatFilledMap, intX, floatX);
	insertRangeInEmptyMap(intDoubleEmptyMap, intDoubleFilledMap, intX, doubleX);
	insertRangeInEmptyMap(intStringEmptyMap, intStringFilledMap, intX, stringX);
}

TEST_F(ftMapTest, insertRangeInFilledMap)
{
	insertRangeInFilledMap(intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	insertRangeInFilledMap(intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	insertRangeInFilledMap(intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	insertRangeInFilledMap(intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
}

TEST_F(ftMapTest, eraseRangeInFilledMap)
{
	eraseRangeInFilledMap(intIntFilledMap);
	eraseRangeInFilledMap(intFloatFilledMap);
	eraseRangeInFilledMap(intDoubleFilledMap);
	eraseRangeInFilledMap(intStringFilledMap);
}


TEST_F(ftMapTest, clearMap)
{
	clearMap(intIntEmptyMap, intIntFilledMap);
	clearMap(intFloatEmptyMap, intFloatFilledMap);
	clearMap(intDoubleEmptyMap, intDoubleFilledMap);
	clearMap(intStringEmptyMap, intStringFilledMap);
}

TEST_F(ftMapTest, swapMap)
{
	swapMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	swapMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	swapMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	swapMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
}

TEST_F(ftMapTest, maxSizeMap)
{
	maxSizeMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap);
	maxSizeMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap);
	maxSizeMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap);
	maxSizeMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap);
}

TEST_F(ftMapTest, findMap)
{
	findMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
	findMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
	findMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
	findMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
}

// TEST_F(ftMapTest, constFindMap)
// {
// 	constFindMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY, intX, intY);
// 	constFindMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY, floatX, floatY);
// 	constFindMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY, doubleX, doubleY);
// 	constFindMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY, stringX, stringY);
// }

TEST_F(ftMapTest, countMap)
{
	countMap(intIntEmptyMap, intIntFilledMap, intIntToInsertMap, intX, intY);
	countMap(intFloatEmptyMap, intFloatFilledMap, intFloatToInsertMap, intX, intY);
	countMap(intDoubleEmptyMap, intDoubleFilledMap, intDoubleToInsertMap, intX, intY);
	countMap(intStringEmptyMap, intStringFilledMap, intStringToInsertMap, intX, intY);
}


// TEST_F(ftMapTest, eraseRangeInEmptyMap)
// {
// 	// size_t	expectedSize = (size_t)0;

// 	intIntEmptyMap.erase(intIntFilledMap.begin(), intIntFilledMap.end());
// }
