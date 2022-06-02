#ifndef __UTILITY_HPP__
# define __UTILITY_HPP__

# include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                      PAIR  	                                   */
	/***********************************************************************************/

	template <class T1, class T2>
	struct pair
	{
		/****************          TYPEDEF         ****************/
		typedef T1			first_type;
		typedef T2			second_type;

		first_type			first;
		second_type			second;

		/****************           MAIN           ****************/
		pair();
		pair(const first_type& x, const second_type& y);
		template <class U, class V>
		pair(const pair<U, V>& pr);
		pair& operator=(const pair& other) = default;
		operator pair<const T1, const T2>(void) const;
	};

	/**************    NON-MEMBER FUNCTION OVERLOADS     **************/
	template <class T1, class T2>
	pair<T1,T2>				make_pair(T1 t, T2 u);

	template <class T1, class T2>
	bool					operator==(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

	template <class T1, class T2>
	bool					operator!=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

	template <class T1, class T2>
	bool					operator<(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

	template <class T1, class T2>
	bool					operator<=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

	template <class T1, class T2>
	bool					operator>(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

	template <class T1, class T2>
	bool					operator>=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

	template <class T1, class T2>
	std::ostream			&operator<<(std::ostream &out, const pair<T1, T2> &rhs);
}

# include "utility.tpp"

#endif
