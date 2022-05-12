#include "utility.hpp"

/****************           MAIN           ****************/

template <class T1, class T2>
pair<T1, T2>::pair()
{

}

template <class T1, class T2, class U, class V>
pair<T1, T2>::pair (const pair<U,V>& pr)
{

}

template <class T1, class T2>
pair<T1, T2>::pair (const first_type& a, const second_type& b)
{

}

template <class T1, class T2>
pair& pair<T1, T2>::operator= (const pair& pr)
{

}


/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class T1, class T2>
pair<T1,T2> make_pair( T1 t, T2 u )
{
	
}

template< class T1, class T2 >
bool operator==( const pair<T1,T2>& lhs, const pair<T1,T2>& rhs )
{
	
}

template< class T1, class T2 >
bool operator!=( const pair<T1,T2>& lhs, const pair<T1,T2>& rhs )
{
	
}

template< class T1, class T2 >
bool operator<( const pair<T1,T2>& lhs, const pair<T1,T2>& rhs )
{
	
}

template< class T1, class T2 >
bool operator<=( const pair<T1,T2>& lhs, const pair<T1,T2>& rhs )
{
	
}

template< class T1, class T2 >
bool operator>( const pair<T1,T2>& lhs, const pair<T1,T2>& rhs )
{
	
}

template< class T1, class T2 >
bool operator>=( const pair<T1,T2>& lhs, const pair<T1,T2>& rhs )
{
	
}
