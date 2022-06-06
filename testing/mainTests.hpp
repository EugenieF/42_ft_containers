#ifndef __MAINTESTS_HPP__
# define __MAINTESTS_HPP__

# include "../containers/main.hpp"
# include "gtest/gtest.h"
# include <iterator>
# include <stack>
# include <vector>
# include <map>

class	globalVarTest
{
	public:
		int			intX[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		float 		floatX[10] = {0.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
		double 		doubleX[10] = {0.00, 1.00, 2.00, 3.00, 4.00, 5.00, 6.00, 7.00, 8.00, 9.00};
		std::string	stringX[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
};

# include "classStackTest.cpp"
# include "classVectorTest.cpp"
# include "classMapTest.cpp"

#endif
