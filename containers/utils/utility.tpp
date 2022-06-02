#include "utility.hpp"
using namespace ft;

/****************           MAIN           ****************/

template <class T1, class T2>
pair<T1, T2>::pair(): first(T1()), second(T2()) {}

template <class T1, class T2>
pair<T1, T2>::pair (const T1& x, const T2& y): first(x), second(y) {}

template <class T1, class T2>
template <class U1, class U2>
pair<T1, T2>::pair (const pair<U1, U2>& p): first(p.first), second(p.second) {}

// template <class T1, class T2>
// pair<T1, T2>& pair<T1, T2>::operator= (const pair<T1, T2>& other)	// is depreciated, why ?
// {
//     if (this != &other)
//     {
//         this->first = other.first;
//         this->second = other.second;
//     }
//     return (*this);
// }

template <class T1, class T2>
pair<T1, T2>::operator pair<const T1, const T2>(void) const
{
	return (pair<const T1, const T2>(this->first, this->second));
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class T1, class T2>
pair<T1,T2>		ft::make_pair(T1 t, T2 u)
{
    return (pair<T1, T2>(t, u));
}

template <class T1, class T2>
bool ft::operator==(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	return (lhs.first == rhs.first && lhs.second == rhs.second);
}

template <class T1, class T2>
bool ft::operator!=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	return (!(lhs == rhs));
}

template <class T1, class T2>
bool ft::operator<(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	if (lhs.first < rhs.first)
        return (true);
    return (!(rhs.first < lhs.first) && lhs.second < rhs.second);
}

template <class T1, class T2>
bool ft::operator<=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	return (!(rhs < lhs));
}

template <class T1, class T2>
bool ft::operator>(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
	return (rhs < lhs);
}

template <class T1, class T2>
bool ft::operator>=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{
    return (!(lhs < rhs));
}

template <class T1, class T2>
std::ostream&	ft::operator<<(std::ostream &out, const pair<T1, T2> &rhs)
{
	out << "[" << rhs.first << ", " << rhs.second << "]";
	return (out);
}
