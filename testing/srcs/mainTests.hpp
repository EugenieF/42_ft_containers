#ifndef __MAINTESTS_HPP__
# define __MAINTESTS_HPP__

# include "../../containers/main.hpp"
# include "gtest/gtest.h"
# include <iterator>
# include <stack>
# include <vector>
# include <map>
# include <set>

class	globalVarTest
{
	public:
		int			intX[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		float 		floatX[10] = {0.5f, 1.5f, 2.5f, 3.5f, 4.5f, 5.5f, 6.5f, 7.5f, 8.5f, 9.5f};
		double 		doubleX[10] = {0.55, 1.55, 2.55, 3.55, 4.55, 5.55, 6.55, 7.55, 8.55, 9.55};
		std::string	stringX[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

		int			intY[5] = {10, 11, 12, 13, 14};
		float 		floatY[5] = {10.5f, 11.5f, 12.5f, 13.5f, 14.5f};
		double 		doubleY[5] = {10.55, 11.55, 12.55, 13.55, 14.55};
		std::string	stringY[5] = {"ten", "eleven", "twelve", "thirteen", "forteen"};
};

# include "classStackTest.cpp"
# include "classVectorTest.cpp"
# include "classMapTest.cpp"
# include "classSetTest.cpp"

// # define MAX_SIZE_INT_VECTOR (size_t)4611686018427387903
// # define MAX_SIZE_FLOAT_VECTOR (size_t)4611686018427387903
// # define MAX_SIZE_DOUBLE_VECTOR (size_t)2305843009213693951
// # define MAX_SIZE_STRING_VECTOR (size_t)768614336404564650

// LINUX :

# define MAX_SIZE_INT_VECTOR (size_t)2305843009213693951
# define MAX_SIZE_FLOAT_VECTOR (size_t)2305843009213693951
# define MAX_SIZE_DOUBLE_VECTOR (size_t)1152921504606846975
# define MAX_SIZE_STRING_VECTOR (size_t)288230376151711743

# define MAX_SIZE_INT_SET (size_t)230584300921369395
# define MAX_SIZE_FLOAT_SET (size_t)230584300921369395
# define MAX_SIZE_DOUBLE_SET (size_t)230584300921369395
# define MAX_SIZE_STRING_SET (size_t)144115188075855871

#endif
