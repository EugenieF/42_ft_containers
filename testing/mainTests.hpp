#ifndef __MAINTESTS_HPP__
# define __MAINTESTS_HPP__

# include "../containers/main.hpp"
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
};

# include "classStackTest.cpp"
# include "classVectorTest.cpp"
# include "classMapTest.cpp"
# include "classSetTest.cpp"

#endif
