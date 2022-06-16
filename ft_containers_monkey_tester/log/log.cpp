#ifndef MONKEY_VECTOR
# define MONKEY_VECTOR 
#endif
#include <string>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <utility>
#ifndef SSTR
# define SSTR( x ) (static_cast< std::ostringstream & >( ( std::ostringstream() << std::dec << (x) ) ).str())
#endif
#ifndef NAMESPACE
# define NAMESPACE ft
#endif
#ifndef _P
# define _P NAMESPACE::pair
#endif
#include <includes.hpp>
#include <input_iterator.hpp>
#include <common.hpp>
class logger logger;
int main()
{
	typedef NAMESPACE::vector<std::string> C;
	C v1;
	C v2;
	C::iterator it1;
	C::iterator it2;
	C::iterator it3;
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 907283241);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 537146758);
		it3 = monkey::get_itn(v1, 1366999021, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1854614940);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 783815874);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 291474504);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1633529762);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1183169448);
		it3 = monkey::get_itn(v1, 1212580698, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1232315727);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1350496504);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 590056433);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2073185314);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 257580280);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(1, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(750421979 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(363416725 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(246931688 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(543491269 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1431566170 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(422344247 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(932041360 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(1653858023 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2145078185 % v2.size()) = "atencion";
		logger.log<logger::NONE>(v1.at(502015127 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: count");
	v1 = C(19, "dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(204635682 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(1450949922 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(291198356 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1105655106 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1754290516 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(1692432651 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(153692284 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1935092574 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2089654450 % v2.size()) = "atencion";
		logger.log<logger::NONE>(v1.at(1703497880 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(0, "amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v1[(int) 1430727705 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1104816641 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 62988099 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 710306007 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 863998291 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 997726727);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 130471160);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 747432831);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1668902831);
		it3 = monkey::get_itn(v2, 1693140455, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1857873889);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 936482263);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(36, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 2086944109 % v1.size()] = "";
	v1[(int) 768067091 % v1.size()] = "";
	v1[(int) 1515499922 % v1.size()] = "";
	v1[(int) 1061156730 % v1.size()] = "amigo de la tornada";
	v1[(int) 2071796201 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 191436544);
	it1 = monkey::get_itn(v2, 2079076780);
	it1 = monkey::get_itn(v2, 1824489044);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 327519910, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 2028054444);
	it1 = monkey::get_itn(v2, 1388676640);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(2, "un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v1[(int) 173329298 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 188880957 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1888506714 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1318599248 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1250192380 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 108698909);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1858876597, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 2050708995);
	it1 = monkey::get_itn(v2, 1024382142);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 743154715, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1646356961);
	it1 = monkey::get_itn(v2, 1826964641);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 960303300);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1100953191, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1149184258);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1359287685, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 890207324);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1963969583, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 61322925);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 367608652, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1311515305);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1055369838 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(2077584414 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(607661022 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1791144929 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1852498551 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(2076992245 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1971095309 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(435230875 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(2038996155 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(136368890 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 7074414);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 916200242);
		it3 = monkey::get_itn(v1, 90263026, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1750180120);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 20363792);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 80813290);
		it3 = monkey::get_itn(v1, 1129707629, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 13120540);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 834722532);
		it3 = monkey::get_itn(v1, 1303138783, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 360865678);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(73472652 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1491250726 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1377082134 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(877923335 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1588588167 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v1[(int) 1297293969 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 713064393 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 564065693 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 970387781 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1043860433 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1226973486 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(435782431 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(2043637992 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(438032980 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1485838910 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 3828005);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1355429677, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 22682747);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 853062931, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1274184869);
	it1 = monkey::get_itn(v1, 393526276);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 578238327, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 901384563);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(3, "hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 413074796);
	it1 = monkey::get_itn(v1, 532790123);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 2067422534, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 47895464);
	it1 = monkey::get_itn(v1, 1208050932);
	it1 = monkey::get_itn(v1, 1705331861);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1561546659, it1);
	v1.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: range");
	{
		const std::set<C::value_type> s(v1.begin(), v1.end());
		v1 = C(s.begin(), s.end());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 499994959 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 1832710193 % v2.size()]);
	v1[(int) 1734556643 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 1451567366 % v2.size()]);
	v1[(int) 2095819549 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 1463950816 % v2.size()]);
	v1[(int) 662777781 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 230235180 % v2.size()]);
	v1[(int) 675880877 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 1509526227 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 2102551359);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1640654704);
		it3 = monkey::get_itn(v2, 182616448, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 310292228);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1618216117);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2118211076);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1459413994);
		it3 = monkey::get_itn(v2, 1705284072, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1495595214);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1653619973);
		it3 = monkey::get_itn(v2, 999831031, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 844794984 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 1819726288 % v2.size()]);
	v1[(int) 426130385 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 1199856430 % v2.size()]);
	v1[(int) 1037696323 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 1234709914 % v2.size()]);
	v1[(int) 945083947 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 309593214 % v2.size()]);
	v1[(int) 438255003 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 619885442 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 919713950);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 231644296);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1497166540);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 349513923);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1055849393);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1385306950);
		it3 = monkey::get_itn(v1, 1900644377, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 186122195);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 14587737);
		it3 = monkey::get_itn(v2, 237560737, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1654225501);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 471615728);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1745852889);
		it3 = monkey::get_itn(v2, 176403188, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1554978987);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1999401724);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 749727487);
		it3 = monkey::get_itn(v2, 1232717037, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 2057799687);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1057748503);
		it3 = monkey::get_itn(v1, 967865629, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 960469912);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 29973703);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 274936641);
		it3 = monkey::get_itn(v1, 44561440, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1571182799);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 497404181);
		it3 = monkey::get_itn(v1, 2042798527, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 2055789438);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1441948709);
	it1 = monkey::get_itn(v1, 1547661377);
	it1 = monkey::get_itn(v1, 1825240129);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1498563845, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 175160662);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1406869635, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 270934085);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 862029619);
	it1 = monkey::get_itn(v1, 100891152);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1226123208, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1061861102);
	it1 = monkey::get_itn(v1, 2112971337);
	it1 = monkey::get_itn(v1, 1008477284);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 308295925);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1549824693);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1035128737);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1319646337);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1921362950);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1578948186);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 2043770665);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 2144661817);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1326445056);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1163814318);
		it3 = monkey::get_itn(v1, 1291932745, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1606879412);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1413695027);
		it3 = monkey::get_itn(v1, 1551014630, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(1, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v2[(int) 274456913 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 299264868 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 2122785181 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 1053271894 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 1018887344 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(22, "dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(26, "amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(2023395398 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1506469973 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(518837647 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1259328911 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1264067348 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v1[(int) 439193661 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 158404633 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1246389843 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 987130180 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1821603450 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1766719315 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1022280026 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1265570615 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(357646092 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(999980128 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(6, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 239961028 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 1450777836 % v1.size()]);
	v2[(int) 923923061 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 1124897638 % v1.size()]);
	v2[(int) 1635626306 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 744133305 % v1.size()]);
	v2[(int) 1394726948 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 582941750 % v1.size()]);
	v2[(int) 512813916 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 940587843 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(801255281 % v2.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2007592108 % v2.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1224849921 % v2.size()) = "amigo de pepito";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1688497577 % v2.size()) = "un dos tres quatro";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(991791765 % v2.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1716573881);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 30836083, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 452888287);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 543649999, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1077337558);
	it1 = monkey::get_itn(v2, 1258821164);
	it1 = monkey::get_itn(v2, 1881758122);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 248355431, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1404382529);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1464159319, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 40208139);
	it1 = monkey::get_itn(v1, 1835686382);
	it1 = monkey::get_itn(v1, 1564468989);
	it1 = monkey::get_itn(v1, 740202800);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: count");
	v2 = C(8, "hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 352037156);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 305252253);
		it3 = monkey::get_itn(v2, 1383700451, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2088015611);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1956377675);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1378090986);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 612387556);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1042284492 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(76995700 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1592607566 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(980638263 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(2128583811 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_assign: range");
	{
		const std::set<C::value_type> s(v2.begin(), v2.end());
		v2.assign(s.begin(), s.end());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(114577906 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1066523826 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(959698194 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1296834949 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(267941303 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(0, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1041262936 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(745654372 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(2063568039 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1963613647 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1859769866 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(3, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 18566564);
	it1 = monkey::get_itn(v2, 641631239);
	it1 = monkey::get_itn(v2, 1971081696);
	it1 = monkey::get_itn(v2, 808076715);
	it1 = monkey::get_itn(v2, 300450117);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1862581565, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(3, "amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 280846764);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2006856019);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1139031559);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1947108274);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 866976786);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 2004447516);
		it3 = monkey::get_itn(v2, 61206191, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(2, "amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 407439734);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 489380497);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 674398711);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1610764503);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 29807523);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 173589238);
		it3 = monkey::get_itn(v1, 896784309, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(93014782 % v1.size()) = "";
		logger.log<logger::NONE>(v2.at(76101967 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(879434242 % v1.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v2.at(359569861 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(685372005 % v1.size()) = "atencion";
		logger.log<logger::NONE>(v2.at(1975160475 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1197703226 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(1025717339 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1468248854 % v1.size()) = "un";
		logger.log<logger::NONE>(v2.at(1403015752 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(6, "hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(8, "amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: count");
	v2 = C(3, "hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1876803387);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1397615497);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1405183410);
		it3 = monkey::get_itn(v1, 1267859647, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1449292263);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1497673659);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1933734489);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(3, "hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 591378162);
	it1 = monkey::get_itn(v2, 382807713);
	it1 = monkey::get_itn(v2, 1282346518);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 2106487713, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 2038212466);
	it1 = monkey::get_itn(v2, 2086513640);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 840147861);
	it1 = monkey::get_itn(v1, 661431322);
	it1 = monkey::get_itn(v1, 1523266645);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1953171650, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1952221027);
	it1 = monkey::get_itn(v1, 1558671103);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1327948693 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 797184059 % v2.size()]);
	v1[(int) 1286952758 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 614401800 % v2.size()]);
	v1[(int) 1225982750 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 1881240515 % v2.size()]);
	v1[(int) 733584239 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 1316204966 % v2.size()]);
	v1[(int) 1638801225 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 8869180 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1392665445 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(1878546905 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1339131153 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(755207458 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1625797715 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(503180133 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(64923973 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1991249576 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(851338800 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(215605838 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1735772797 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 625755516 % v1.size()]);
	v2[(int) 7680114 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 1470670103 % v1.size()]);
	v2[(int) 1910819418 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 530776752 % v1.size()]);
	v2[(int) 1641882676 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 1869907905 % v1.size()]);
	v2[(int) 1939731697 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 1575903979 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(525612782 % v1.size()) = "un";
		logger.log<logger::NONE>(v2.at(1949510614 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(49066721 % v1.size()) = "dos";
		logger.log<logger::NONE>(v2.at(736946606 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1897976234 % v1.size()) = "dos";
		logger.log<logger::NONE>(v2.at(1967566254 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(590909813 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(1425118097 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1254213332 % v1.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v2.at(1889238049 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 722537262 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 1162488090 % v2.size()]);
	v1[(int) 475574811 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 978292006 % v2.size()]);
	v1[(int) 248672479 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 1439069579 % v2.size()]);
	v1[(int) 50699445 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 1488136300 % v2.size()]);
	v1[(int) 2057445698 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 1544883136 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(679447377 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1087788075 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(396049090 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(310952510 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(502897342 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(771324470 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1311756161 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(1701009416 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(764620919 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(1484173891 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(9, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1843201323 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 1807358584 % v2.size()]);
	v1[(int) 467042145 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 971631097 % v2.size()]);
	v1[(int) 253371058 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 1033047908 % v2.size()]);
	v1[(int) 1017991978 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 369738151 % v2.size()]);
	v1[(int) 1074198828 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 1240376566 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1963179445);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2053813573);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 888063343);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1823865026);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1613171787);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 555772963);
		it3 = monkey::get_itn(v2, 768431080, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(29, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1710673471 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(647047747 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1224909511 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(890508851 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(618810906 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(2062252540 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1076661688 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(340836629 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1066046404 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(279010297 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 78684097);
	it1 = monkey::get_itn(v2, 513129517);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 40013925, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 2137829307);
	it1 = monkey::get_itn(v2, 1867149925);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1290696651, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 473517457);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(4, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1674869005);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1942396296);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 688366913);
		it3 = monkey::get_itn(v2, 2021080393, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1728319498);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 260168254);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1191842089);
		it3 = monkey::get_itn(v2, 1987675083, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1487999700);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1130888086);
		it3 = monkey::get_itn(v2, 1961517157, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(9, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(0, "amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1994676058 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1074557739 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(364486047 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1737055754 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(276243364 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 2042748746);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1533077444);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 349400389);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1858970069);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1354978210);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(146657916 % v1.size()) = "un";
		logger.log<logger::NONE>(v2.at(758846564 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(167908623 % v1.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v2.at(1078294870 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1848346602 % v1.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v2.at(901124214 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(125847213 % v1.size()) = "";
		logger.log<logger::NONE>(v2.at(1822514431 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(181983108 % v1.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v2.at(1418501007 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1394160287 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1003316272 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(115463601 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(331040459 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(706279657 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(4, "dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(1, "hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1349589925 % v2.size()] = "atencion";
	v2[(int) 1680630384 % v2.size()] = "atencion";
	v2[(int) 1160783972 % v2.size()] = "hola amigo";
	v2[(int) 315968343 % v2.size()] = "hola amigo";
	v2[(int) 1587056874 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(8, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 110609856);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1769393792);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1971180527);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 2102035089);
		it3 = monkey::get_itn(v2, 71155384, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2051509249);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2048937737);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1221038390);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1412527876);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1975921577);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1080374419);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 98049733);
		it3 = monkey::get_itn(v1, 75476326, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 294948879);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1572434199);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1215335549);
		it3 = monkey::get_itn(v1, 243215093, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1425004719);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 450745017);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1984162499);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 417071670);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 2046594065);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1562860296);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1301953102);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1071667831);
		it3 = monkey::get_itn(v2, 1505919431, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1153030946);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 783440502);
		it3 = monkey::get_itn(v2, 536815808, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 823142246);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1472007838);
		it3 = monkey::get_itn(v2, 159839497, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1069459163 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 2008479257 % v2.size()]);
	v1[(int) 56381194 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 145293885 % v2.size()]);
	v1[(int) 836122040 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 44404302 % v2.size()]);
	v1[(int) 1165223653 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 1607264598 % v2.size()]);
	v1[(int) 1287832980 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 761734052 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1607409511 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 2070281219 % v1.size()]);
	v2[(int) 1468405120 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 392030588 % v1.size()]);
	v2[(int) 1613699005 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 1822821891 % v1.size()]);
	v2[(int) 1658103307 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 2048292069 % v1.size()]);
	v2[(int) 1117884257 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 1772995879 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 421883872 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 952835970 % v2.size()]);
	v1[(int) 385654791 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 1720727453 % v2.size()]);
	v1[(int) 1172567956 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 1813143127 % v2.size()]);
	v1[(int) 2119320618 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 5231251 % v2.size()]);
	v1[(int) 1495500800 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 1612640762 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 295677038);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 399777592);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 2022097557);
		it3 = monkey::get_itn(v1, 2057880900, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1989702203);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1028281509);
		it3 = monkey::get_itn(v1, 1485934121, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1548418209);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 60210768);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(35, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(43, "amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1368731913);
	it1 = monkey::get_itn(v2, 35839820);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 2035344235, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1695069862);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 382412389, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1014061334);
	it1 = monkey::get_itn(v2, 1172641229);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 2072693168 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 1567989405 % v2.size()]);
	v1[(int) 1240996547 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 1025223244 % v2.size()]);
	v1[(int) 1957718135 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 542667851 % v2.size()]);
	v1[(int) 349774509 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 1073159197 % v2.size()]);
	v1[(int) 1097787756 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 42457439 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 704818281);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1709238026);
		it3 = monkey::get_itn(v2, 1237146753, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 859402149);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 590340742);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 255869173);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1456689418);
		it3 = monkey::get_itn(v2, 66103660, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 353254090);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 415878169);
		it3 = monkey::get_itn(v2, 1758365686, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1564486577);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 711864632);
		it3 = monkey::get_itn(v2, 1707657310, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1120814857);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1398414257);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2103232538);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 964400214);
		it3 = monkey::get_itn(v2, 1192895643, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2017659208);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(17, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 345455370);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 2049960760);
		it3 = monkey::get_itn(v2, 1312945629, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 757342361);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1544141593);
		it3 = monkey::get_itn(v2, 1469206994, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1027137351);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 187772385);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1728674483);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1426712494);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 235211771);
		it3 = monkey::get_itn(v1, 1634480763, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1070139757);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 2098118206);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 63103857);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 533248134);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(538585352 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(1375147736 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2004634573 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(637248990 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1887032547 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(1854903934 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1986320339 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(653258508 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(437186986 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(460301526 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(45, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(954726437 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1348659970 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2117610225 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(401886295 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(82056107 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1274846650 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(268348522 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(987866399 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(924898994 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1016161662 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 322529201);
	it1 = monkey::get_itn(v1, 1544583064);
	it1 = monkey::get_itn(v1, 1658993106);
	it1 = monkey::get_itn(v1, 1295298030);
	it1 = monkey::get_itn(v1, 1798423945);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1959547684, it1);
	v1.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1253085617);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 976459524, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1521434139);
	it1 = monkey::get_itn(v2, 1964325923);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 482873310, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1457967182);
	it1 = monkey::get_itn(v2, 1844959290);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1973760556, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 87743287);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 756603408, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1160541698);
	it1 = monkey::get_itn(v2, 204947786);
	it1 = monkey::get_itn(v2, 367924587);
	it1 = monkey::get_itn(v2, 1144372092);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1867791799);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1827199410);
		it3 = monkey::get_itn(v2, 1694068707, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 78830901);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1337393796);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 138845721);
		it3 = monkey::get_itn(v2, 2107466150, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1741053242);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1196290752);
		it3 = monkey::get_itn(v2, 729106128, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1965341592);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(3, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 143200655);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1104415023);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1926412057);
		it3 = monkey::get_itn(v2, 1376112925, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 412620610);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1055828687);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 524221392);
		it3 = monkey::get_itn(v2, 1325365363, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1802080486);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1581822369);
		it3 = monkey::get_itn(v2, 1940926207, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(9, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(16, "amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(1, "dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(23, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 605997679 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 1638067833 % v1.size()]);
	v2[(int) 925812481 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 276481841 % v1.size()]);
	v2[(int) 244455847 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 1533691986 % v1.size()]);
	v2[(int) 1853783516 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 1600844100 % v1.size()]);
	v2[(int) 272558912 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 1446924624 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 918164241);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 946762965);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 409700410);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1048029819);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 67225481);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 2016789690 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 1161218852 % v1.size()]);
	v2[(int) 931744573 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 1433777764 % v1.size()]);
	v2[(int) 1767859083 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 1501224997 % v1.size()]);
	v2[(int) 642786532 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 271905590 % v1.size()]);
	v2[(int) 1810699887 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 1218668556 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1192782795);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 528915137);
		it3 = monkey::get_itn(v1, 871435772, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1490986029);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1156086427);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 219065916);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1969202716);
		it3 = monkey::get_itn(v1, 1673984900, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1357675556);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 68314689);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 818329716);
		it3 = monkey::get_itn(v2, 699543379, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 536030229);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1959790777);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1303293158);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1772364726);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 2096833861);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1517931895, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1307025770);
	it1 = monkey::get_itn(v2, 58168351);
	it1 = monkey::get_itn(v2, 2120160118);
	it1 = monkey::get_itn(v2, 1211274169);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1484837946);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2129073213);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 597867863);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1558209557);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1061418933);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1584627831);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1642796182);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1532819026);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 683064041);
		it3 = monkey::get_itn(v1, 1323320556, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1034916896);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 2019492251);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1836640319);
		it3 = monkey::get_itn(v1, 820816321, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 728110080);
	it1 = monkey::get_itn(v2, 988013660);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1832974712, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 896371691);
	it1 = monkey::get_itn(v2, 2003285981);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1874746381, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1475075853);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1017686534 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 162609259 % v2.size()]);
	v1[(int) 889695138 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 1999249578 % v2.size()]);
	v1[(int) 1710511459 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 1925153288 % v2.size()]);
	v1[(int) 1868682078 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 1832646563 % v2.size()]);
	v1[(int) 1176514125 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 190524054 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(30, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 566976587);
	it1 = monkey::get_itn(v1, 639048174);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1217085658, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 801657433);
	it1 = monkey::get_itn(v1, 1501276592);
	it1 = monkey::get_itn(v1, 2037386071);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 431093004, it1);
	v1.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 116255920 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 2125227062 % v1.size()]);
	v2[(int) 306779974 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 804421721 % v1.size()]);
	v2[(int) 1225414108 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 471630039 % v1.size()]);
	v2[(int) 791370610 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 1035210049 % v1.size()]);
	v2[(int) 589277311 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 1907820659 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 339819871 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 379985940 % v2.size()]);
	v1[(int) 317563285 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 2104901677 % v2.size()]);
	v1[(int) 1121985006 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 1294356443 % v2.size()]);
	v1[(int) 1593615046 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 1928808598 % v2.size()]);
	v1[(int) 481341447 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 1716576827 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 684333525);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 333485129, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 795793204);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 424852814, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 261045826);
	it1 = monkey::get_itn(v1, 406122921);
	it1 = monkey::get_itn(v1, 1906547749);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 378479822 % v2.size()] = "amigo de pepito";
	v2[(int) 335897852 % v2.size()] = "";
	v2[(int) 1630254295 % v2.size()] = "atencion";
	v2[(int) 1411579246 % v2.size()] = "atencion";
	v2[(int) 980672425 % v2.size()] = "";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v1[(int) 608747564 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1721396828 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1480460929 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 2195787 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1888348672 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1541967262);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1498487420);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2077552272);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1936456052);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 397719968);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 166247107);
		it3 = monkey::get_itn(v2, 2119116796, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1452094077 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 1979143703 % v2.size()]);
	v1[(int) 1454289864 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 270492758 % v2.size()]);
	v1[(int) 1195154888 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 1625421165 % v2.size()]);
	v1[(int) 969553988 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 1195093026 % v2.size()]);
	v1[(int) 1863722613 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 1608333438 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 269810187);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1884614169);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2050861276);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1237799327);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1069459382);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 916211339);
		it3 = monkey::get_itn(v2, 1339952140, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 817889657 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 813213626 % v2.size()]);
	v1[(int) 2012982684 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 252356274 % v2.size()]);
	v1[(int) 1473832474 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 803125432 % v2.size()]);
	v1[(int) 285686036 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 1283963215 % v2.size()]);
	v1[(int) 102782435 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 1553773402 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(73819909 % v1.size()) = "dos";
		logger.log<logger::NONE>(v2.at(280569673 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1798501010 % v1.size()) = "";
		logger.log<logger::NONE>(v2.at(656756947 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(440344735 % v1.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v2.at(131230508 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(353071735 % v1.size()) = "hola amigo";
		logger.log<logger::NONE>(v2.at(450702885 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(301985549 % v1.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v2.at(752404707 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 32386139 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 31019218 % v2.size()]);
	v1[(int) 672447663 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 796381438 % v2.size()]);
	v1[(int) 1049639709 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 1187416539 % v2.size()]);
	v1[(int) 1330209382 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 838433901 % v2.size()]);
	v1[(int) 701094735 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 53453070 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1604205279);
	it1 = monkey::get_itn(v1, 1224955582);
	it1 = monkey::get_itn(v1, 2122924698);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1977486900, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 529782873);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 824658331, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1887250129);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(60, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1761857577);
	it1 = monkey::get_itn(v1, 1817712482);
	it1 = monkey::get_itn(v1, 2138842712);
	it1 = monkey::get_itn(v1, 1456908134);
	it1 = monkey::get_itn(v1, 2055849131);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 699214238, it1);
	v1.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1288518838 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1993440510 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(194474573 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(1102175519 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(617097485 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(1097527005 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1032018113 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(11008224 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(183895028 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(425119784 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 659922051 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 288575524 % v1.size()]);
	v2[(int) 266738087 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 27106749 % v1.size()]);
	v2[(int) 698212455 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 877583007 % v1.size()]);
	v2[(int) 1986731294 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 723539869 % v1.size()]);
	v2[(int) 509774970 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 361358773 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(635726955 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1565865691 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1903299579 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(1562387094 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1881547964 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(21114244 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2099847195 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1335187192 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(428747908 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(2074089008 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(585861381 % v1.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v2.at(1320656055 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(922608307 % v1.size()) = "un";
		logger.log<logger::NONE>(v2.at(2054685377 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(559762552 % v1.size()) = "dos";
		logger.log<logger::NONE>(v2.at(668648372 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1838577691 % v1.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v2.at(1832585811 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1473265520 % v1.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v2.at(1366597039 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(548331730 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1781099104 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(915063313 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(935620780 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1815326115 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(1088399393 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1676066202 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(1716147935 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1982296869 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(2126196617 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1389137528 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 148935617 % v1.size()]);
	v2[(int) 607654876 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 1126015255 % v1.size()]);
	v2[(int) 1522718189 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 2061636036 % v1.size()]);
	v2[(int) 817816429 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 1435634549 % v1.size()]);
	v2[(int) 1906215823 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 964217104 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(99, "amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 891704212);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 2017719468);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1931871856);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1220022757);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1665362135);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: range");
	{
		const std::set<C::value_type> s(v1.begin(), v1.end());
		v1 = C(s.begin(), s.end());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(17, "un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1732054493 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v1[(int) 1230619800 % v1.size()]);
	v2[(int) 476275057 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 606203276 % v1.size()]);
	v2[(int) 346510877 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 636985152 % v1.size()]);
	v2[(int) 130899085 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 990807897 % v1.size()]);
	v2[(int) 1350921843 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 508686384 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(212880661 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(930402908 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(409597714 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(1035666596 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(26107688 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(705023038 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(370003877 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1525601970 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(539202534 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(1434633943 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: count");
	v2 = C(4, "un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(867429578 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(610982722 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(473694556 % v1.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v2.at(110729372 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1655814951 % v1.size()) = "un";
		logger.log<logger::NONE>(v2.at(1209465885 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(500030486 % v1.size()) = "hola amigo";
		logger.log<logger::NONE>(v2.at(423897127 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(718859759 % v1.size()) = "";
		logger.log<logger::NONE>(v2.at(587591986 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 906152437);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1580774388, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 984813086);
	it1 = monkey::get_itn(v2, 300720318);
	it1 = monkey::get_itn(v2, 197271426);
	it1 = monkey::get_itn(v2, 406600229);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 227163895);
	it1 = monkey::get_itn(v2, 1966177402);
	it1 = monkey::get_itn(v2, 1786070079);
	it1 = monkey::get_itn(v2, 999318921);
	it1 = monkey::get_itn(v2, 1709683892);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 996845633 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 815884045 % v1.size()]);
	v2[(int) 1194117059 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 1222484275 % v1.size()]);
	v2[(int) 1612569492 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 240182285 % v1.size()]);
	v2[(int) 1539353229 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 467346180 % v1.size()]);
	v2[(int) 754042532 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 747805343 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(2, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1970624994);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 552238706, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1570083447);
	it1 = monkey::get_itn(v1, 1549084339);
	it1 = monkey::get_itn(v1, 1363294502);
	it1 = monkey::get_itn(v1, 1242688146);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(678477414 % v1.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v2.at(72156325 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(206715708 % v1.size()) = "hola amigo";
		logger.log<logger::NONE>(v2.at(1893628938 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1127250835 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(1087701602 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(254959676 % v1.size()) = "";
		logger.log<logger::NONE>(v2.at(2075704467 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1628222350 % v1.size()) = "un";
		logger.log<logger::NONE>(v2.at(1882558303 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(1, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1870624819);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 721231772);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1280420161);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1170988237);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1905787548);
		it3 = monkey::get_itn(v1, 917133527, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 2086480541);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(0, "amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(5, "hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 208825410);
	it1 = monkey::get_itn(v2, 645085804);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1082434265, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1233066421);
	it1 = monkey::get_itn(v2, 449514154);
	it1 = monkey::get_itn(v2, 126086434);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 677052252, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 721808670);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1380185657);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 132433896);
		it3 = monkey::get_itn(v1, 808212523, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 419253001);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 499158824);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1091559560);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: range");
	{
		const std::set<C::value_type> s(v1.begin(), v1.end());
		v1 = C(s.begin(), s.end());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(4, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1383509984 % v1.size()] = "un";
	v1[(int) 327585896 % v1.size()] = "un dos tres quatro";
	v1[(int) 2064231261 % v1.size()] = "un dos tres quatro";
	v1[(int) 738975751 % v1.size()] = "amigo de la tornada";
	v1[(int) 856908581 % v1.size()] = "dos";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(1, "un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(6, "amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(9, "un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1379974897 % v2.size()] = "hola amigo";
	v2[(int) 1062268157 % v2.size()] = "dos";
	v2[(int) 1111139965 % v2.size()] = "amigo de la tornada";
	v2[(int) 2088851569 % v2.size()] = "atencion";
	v2[(int) 1589293651 % v2.size()] = "un";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v1[(int) 847899763 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 101575366 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 534940549 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 283756862 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1504983243 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(13, "hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v1[(int) 874595090 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 193085181 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 2110479971 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 509987210 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 317072067 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(7, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1453864949 % v1.size()) = "hola amigo";
		logger.log<logger::NONE>(v2.at(544983806 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(741017453 % v1.size()) = "";
		logger.log<logger::NONE>(v2.at(1830907988 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1037219686 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(1306541344 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(268492564 % v1.size()) = "dos";
		logger.log<logger::NONE>(v2.at(1682387457 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1300906138 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(424574069 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(17, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(1, "amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 766513669);
	it1 = monkey::get_itn(v2, 509971211);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 979152882, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1647203837);
	it1 = monkey::get_itn(v2, 373050356);
	it1 = monkey::get_itn(v2, 449439243);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1103120667 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 1864472375 % v2.size()]);
	v1[(int) 1527694736 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 2022028795 % v2.size()]);
	v1[(int) 314772368 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 64150190 % v2.size()]);
	v1[(int) 1566405715 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 1272916631 % v2.size()]);
	v1[(int) 1195477758 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 1255258106 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(0, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1063266783 % v1.size()] = "dos";
	v1[(int) 980231962 % v1.size()] = "amigo de la tornada";
	v1[(int) 1429671205 % v1.size()] = "amigo de pepito";
	v1[(int) 1414014258 % v1.size()] = "dos";
	v1[(int) 1131002986 % v1.size()] = "atencion";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v1[(int) 16080945 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1211558703 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 481082676 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 517120318 % v1.size()]);
	logger.log<logger::NONE>(v1[(int) 1580387101 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1388447144);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1109337231);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 92856569);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 2137349519);
		it3 = monkey::get_itn(v2, 1098404703, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1022684306);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1038765251);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 215750686);
		it3 = monkey::get_itn(v2, 102840306, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1834745580);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1187197363);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1471594272);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 913503014);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 154466510);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 723130856);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 795519999, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1745815162);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 816139378, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 637096765);
	it1 = monkey::get_itn(v2, 1031890065);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1586409750, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 550546517);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(253370129 % v1.size()) = "amigo de pepito";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(2005112504 % v1.size()) = "atencion";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1702227801 % v1.size()) = "un dos tres quatro";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(350264152 % v1.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1166403531 % v1.size()) = "un dos tres quatro";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(687476949 % v1.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1961148631 % v1.size()) = "amigo de pepito";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(127050380 % v1.size()) = "un dos tres quatro";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1912030050 % v1.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(315545437 % v1.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 2024081958);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 95954239);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 446218391);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1746467192);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 847534391);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1348676323 % v2.size()] = "amigo de pepito";
	v2[(int) 1475726703 % v2.size()] = "amigo de la tornada";
	v2[(int) 1240273105 % v2.size()] = "atencion";
	v2[(int) 1555818543 % v2.size()] = "amigo de pepito";
	v2[(int) 429345878 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1309138549);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1766811371, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1755356941);
	it1 = monkey::get_itn(v1, 1365794915);
	it1 = monkey::get_itn(v1, 1135106821);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 736443438, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 135703010);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(4, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: range");
	{
		const std::set<C::value_type> s(v1.begin(), v1.end());
		v1 = C(s.begin(), s.end());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1089615109);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1954130969, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1891664782);
	it1 = monkey::get_itn(v1, 1707309539);
	it1 = monkey::get_itn(v1, 181222698);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1245039697, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1061454770);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(803521983 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1329097640 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(992530064 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1185060498 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(15410236 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(359003277 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1805172748 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(1134923796 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1696096743 % v2.size()) = "atencion";
		logger.log<logger::NONE>(v1.at(1731510499 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1313827384 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 1276921516 % v1.size()]);
	v2[(int) 987973773 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 1546864943 % v1.size()]);
	v2[(int) 616560352 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 1239720824 % v1.size()]);
	v2[(int) 1420082335 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 421334816 % v1.size()]);
	v2[(int) 1987499512 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 692563917 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 707974153);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1431198531, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 597858252);
	it1 = monkey::get_itn(v2, 661388164);
	it1 = monkey::get_itn(v2, 878375736);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 596678974, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 462402587);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 924679339);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 819643363);
		it3 = monkey::get_itn(v2, 152525259, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1442521851);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1580496711);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1853514580);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 957334277);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 723329234);
	it1 = monkey::get_itn(v2, 349000996);
	it1 = monkey::get_itn(v2, 1896746717);
	it1 = monkey::get_itn(v2, 982095995);
	it1 = monkey::get_itn(v2, 337901798);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1239832486, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1219931608 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 639160759 % v1.size()]);
	v2[(int) 1312173659 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 355533778 % v1.size()]);
	v2[(int) 1244431574 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 764470715 % v1.size()]);
	v2[(int) 54282203 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 1881381805 % v1.size()]);
	v2[(int) 1513159246 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 1448667499 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(601251594 % v1.size()) = "atencion";
		logger.log<logger::NONE>(v2.at(1805424416 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(2144189085 % v1.size()) = "un";
		logger.log<logger::NONE>(v2.at(645057019 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(837241997 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(1475928764 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1901917683 % v1.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v2.at(309978203 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1311728432 % v1.size()) = "atencion";
		logger.log<logger::NONE>(v2.at(1674037621 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(271097545 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(240811169 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(639456621 % v1.size()) = "atencion";
		logger.log<logger::NONE>(v2.at(653560422 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(168099761 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(640469411 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(331981930 % v1.size()) = "hola amigo";
		logger.log<logger::NONE>(v2.at(2100229826 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1471976406 % v1.size()) = "atencion";
		logger.log<logger::NONE>(v2.at(841170957 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1285384832);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 765788553);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1843841720);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1779995690);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1115610629);
		it3 = monkey::get_itn(v1, 272981453, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 342535797);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(967127941 % v1.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(264872250 % v1.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1849157797 % v1.size()) = "";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(261318144 % v1.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1129106088 % v1.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1760995340);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 715168068);
		it3 = monkey::get_itn(v1, 1061104252, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1949542866);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 219749067);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1977577984);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 94966586);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1147965279);
		it3 = monkey::get_itn(v1, 1944124384, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1105752295 % v2.size()] = "dos";
	v2[(int) 1613926733 % v2.size()] = "un";
	v2[(int) 1986559004 % v2.size()] = "amigo de la tornada";
	v2[(int) 554243424 % v2.size()] = "dos";
	v2[(int) 1564693467 % v2.size()] = "";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1852392706);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1041140047, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 852874338);
	it1 = monkey::get_itn(v1, 1767997736);
	it1 = monkey::get_itn(v1, 1344354006);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1210181499, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 383935326);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: count");
	v2 = C(12, "dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1349548159);
	it1 = monkey::get_itn(v1, 1521373294);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1127872297, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 2140672843);
	it1 = monkey::get_itn(v1, 545082116);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1165735717, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1939869920);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 405021754);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1765406146, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 273443959);
	it1 = monkey::get_itn(v2, 1857824);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 942809106, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1727117888);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 813819851, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 317605470);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 864611265);
	it1 = monkey::get_itn(v1, 1205158639);
	it1 = monkey::get_itn(v1, 2144076689);
	it1 = monkey::get_itn(v1, 390082031);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 2046899083, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 182468303);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 2035171849);
	it1 = monkey::get_itn(v1, 1505441427);
	it1 = monkey::get_itn(v1, 820917793);
	it1 = monkey::get_itn(v1, 2027402820);
	it1 = monkey::get_itn(v1, 1402681137);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2127509757 % v2.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(861189475 % v2.size()) = "";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(760604910 % v2.size()) = "un dos tres quatro";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1530665121 % v2.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1876760797 % v2.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 552439631);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 307499255);
		it3 = monkey::get_itn(v1, 432358803, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1570052706);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1686820902);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1638773200);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 371802297);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1718164902 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 1199326980 % v2.size()]);
	v1[(int) 79047107 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 435615561 % v2.size()]);
	v1[(int) 2090996564 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 1697496477 % v2.size()]);
	v1[(int) 1313420151 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 1632811539 % v2.size()]);
	v1[(int) 1620919406 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 1055380597 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 594717851 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 321273144 % v1.size()]);
	v2[(int) 254227148 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v1[(int) 693075441 % v1.size()]);
	v2[(int) 30501529 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v1[(int) 187988867 % v1.size()]);
	v2[(int) 752371845 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 1135965373 % v1.size()]);
	v2[(int) 844552918 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 706646627 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(4, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1244751943 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 2087222417 % v1.size()]);
	v2[(int) 152648892 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 769722361 % v1.size()]);
	v2[(int) 747366743 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 1090995505 % v1.size()]);
	v2[(int) 1001593892 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 1784070946 % v1.size()]);
	v2[(int) 1032095421 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v1[(int) 1972059814 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 481536536);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1667188166);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 677347097);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 674530111);
		it3 = monkey::get_itn(v2, 739274671, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1034604903);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 351215075);
		it3 = monkey::get_itn(v2, 929748057, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 306196784);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(6, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 983527230);
	it1 = monkey::get_itn(v2, 234704671);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1567816883, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 2019171937);
	it1 = monkey::get_itn(v2, 380874774);
	it1 = monkey::get_itn(v2, 1735792624);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 351028599, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1025558710 % v1.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v2.at(1240582448 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1356145820 % v1.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v2.at(1924936732 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(321173826 % v1.size()) = "dos";
		logger.log<logger::NONE>(v2.at(405761453 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1039046551 % v1.size()) = "hola amigo";
		logger.log<logger::NONE>(v2.at(2095593322 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(2104353357 % v1.size()) = "";
		logger.log<logger::NONE>(v2.at(593973392 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(501738239 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(535997729 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1264331105 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1765167544 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(549289092 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1065172827 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1110553582 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(1709311005 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(954952053 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1990300161 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1958413474 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 2072641047 % v1.size()]);
	v2[(int) 106690521 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v1[(int) 1603708031 % v1.size()]);
	v2[(int) 608428760 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 2139705760 % v1.size()]);
	v2[(int) 203265800 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 1884365661 % v1.size()]);
	v2[(int) 1968433344 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 286171106 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1241221652);
	it1 = monkey::get_itn(v2, 1783669066);
	it1 = monkey::get_itn(v2, 1929024258);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 321746076, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1771840771);
	it1 = monkey::get_itn(v2, 32017524);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1555811341, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(5, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 663405180);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1717426338, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1904626832);
	it1 = monkey::get_itn(v2, 1353611756);
	it1 = monkey::get_itn(v2, 370301329);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 881938270, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 2142142101);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1972722198 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(53828576 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(205680313 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(2068957097 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1094467830 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1060213623);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1779721058);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 369924441);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1829008663);
		it3 = monkey::get_itn(v2, 260786190, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2015509745);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 86024741);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1246827547);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1757736155);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1525971600);
		it3 = monkey::get_itn(v1, 1986370040, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1932671314);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 602181008);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1031415274);
		it3 = monkey::get_itn(v1, 1209019199, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1996762613);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1644740562);
	it1 = monkey::get_itn(v2, 1919374066);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 641834489, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1068204173);
	it1 = monkey::get_itn(v2, 1792488721);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1750050537, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 891832620);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(0, "un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1595491969);
	it1 = monkey::get_itn(v2, 1587415432);
	it1 = monkey::get_itn(v2, 1001437968);
	it1 = monkey::get_itn(v2, 2044271275);
	it1 = monkey::get_itn(v2, 1926110493);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 832761047);
	it1 = monkey::get_itn(v2, 1607382101);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 241952963, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 713578852);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 842081059, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 833805533);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 290089380, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 190502939);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 414986589, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 311774216);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1356575896, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1276766017);
	it1 = monkey::get_itn(v1, 780207815);
	it1 = monkey::get_itn(v1, 1813041763);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1530433697, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 845335221);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 871958115, it1);
	v1.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 797828408);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 670298531);
		it3 = monkey::get_itn(v1, 1039781371, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 657143976);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1881862430);
		it3 = monkey::get_itn(v1, 1490949509, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 619200098);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1681452448);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 439454751);
		it3 = monkey::get_itn(v1, 725909707, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 343338548);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: range");
	{
		const std::set<C::value_type> s(v2.begin(), v2.end());
		v2 = C(s.begin(), s.end());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1428310965 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 712063980 % v2.size()]);
	v1[(int) 349256733 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 1788882096 % v2.size()]);
	v1[(int) 832923404 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 439226857 % v2.size()]);
	v1[(int) 776488528 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 1479008228 % v2.size()]);
	v1[(int) 1433632504 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 1213387011 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1237855173 % v2.size()) = "atencion";
		logger.log<logger::NONE>(v1.at(255373077 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1036976873 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(281055245 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(151142421 % v2.size()) = "atencion";
		logger.log<logger::NONE>(v1.at(1593234107 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(784449018 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(1912091998 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(24543198 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1668072103 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1060939217);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1009425871, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1931722699);
	it1 = monkey::get_itn(v1, 1786524237);
	it1 = monkey::get_itn(v1, 1887935269);
	it1 = monkey::get_itn(v1, 1529595708);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v2[(int) 1287630246 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 808218701 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 763833272 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 1824772489 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 1609011540 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 735750523);
	it1 = monkey::get_itn(v2, 1615376643);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 30533818, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 454977624);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1729350609, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 686642068);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1442250334, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 364056971);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_assign: range");
	{
		const std::set<C::value_type> s(v1.begin(), v1.end());
		v1.assign(s.begin(), s.end());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(6, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(2, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(2035668597 % v1.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(397393322 % v1.size()) = "";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(514472109 % v1.size()) = "atencion";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(755293372 % v1.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(316108139 % v1.size()) = "amigo de pepito";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1748501083);
	it1 = monkey::get_itn(v1, 1061121503);
	it1 = monkey::get_itn(v1, 1218884192);
	it1 = monkey::get_itn(v1, 1732591692);
	it1 = monkey::get_itn(v1, 1346699774);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1562606066 % v2.size()) = "un dos tres quatro";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(265193200 % v2.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1039317426 % v2.size()) = "hola amigo";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(813577487 % v2.size()) = "";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(574103842 % v2.size()) = "un dos tres quatro";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_assign: range");
	{
		const std::set<C::value_type> s(v2.begin(), v2.end());
		v2.assign(s.begin(), s.end());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(0, "un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1201661930);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 2045522243, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 93495708);
	it1 = monkey::get_itn(v2, 9326904);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1948131838, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 552669850);
	it1 = monkey::get_itn(v2, 38313037);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(5302875 % v2.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1435885295 % v2.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1328652773 % v2.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(596265716 % v2.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1583871923 % v2.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v2[(int) 1891689259 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 1697738132 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 1491342779 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 1496645654 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 785047301 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(8, "amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 914179641 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 2146354066 % v2.size()]);
	v1[(int) 198349903 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 1276618279 % v2.size()]);
	v1[(int) 1528042408 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 1327257770 % v2.size()]);
	v1[(int) 719578169 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 1178545451 % v2.size()]);
	v1[(int) 463783780 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 1068146169 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1363974488);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1639590352, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 579678542);
	it1 = monkey::get_itn(v2, 1605806778);
	it1 = monkey::get_itn(v2, 1513383825);
	it1 = monkey::get_itn(v2, 89332764);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 19675691, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1296293971 % v1.size()) = "hola amigo";
		logger.log<logger::NONE>(v2.at(1954425108 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(387819596 % v1.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v2.at(1654613545 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1167279749 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(865641640 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(786581249 % v1.size()) = "un";
		logger.log<logger::NONE>(v2.at(1872568826 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1078082087 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(2147283004 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 28511921 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 2010549901 % v1.size()]);
	v2[(int) 49317195 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 1341551929 % v1.size()]);
	v2[(int) 68992886 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v1[(int) 788402482 % v1.size()]);
	v2[(int) 1365286857 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 595343943 % v1.size()]);
	v2[(int) 1841354951 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 1913691888 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 933487989 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 846729153 % v2.size()]);
	v1[(int) 208294860 % v1.size()] = "hola amigo";
	logger.log<logger::NONE>(v2[(int) 1070268190 % v2.size()]);
	v1[(int) 2080863686 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 866629 % v2.size()]);
	v1[(int) 1022439704 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 571055420 % v2.size()]);
	v1[(int) 543694265 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 599567341 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 135897346 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 1777035583 % v1.size()]);
	v2[(int) 1412865131 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 978036783 % v1.size()]);
	v2[(int) 1393952644 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 754314050 % v1.size()]);
	v2[(int) 93198149 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 1317172565 % v1.size()]);
	v2[(int) 1163466339 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 90897513 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 836356618 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 2039144692 % v1.size()]);
	v2[(int) 1554234041 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 1155372090 % v1.size()]);
	v2[(int) 1489914674 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 866943431 % v1.size()]);
	v2[(int) 1119466609 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 344723012 % v1.size()]);
	v2[(int) 2097503393 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 755990583 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 683665901 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 2112403874 % v1.size()]);
	v2[(int) 1847998870 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 976825692 % v1.size()]);
	v2[(int) 1435903610 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 1259421538 % v1.size()]);
	v2[(int) 1623375692 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 675774019 % v1.size()]);
	v2[(int) 312248663 % v2.size()] = "dos";
	logger.log<logger::NONE>(v1[(int) 567435063 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(8, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(0, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1088958902);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1628640445);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 207582030);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 2006165835);
		it3 = monkey::get_itn(v1, 2074064735, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 109815034);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1135494817);
		it3 = monkey::get_itn(v1, 1728921880, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 2023756276);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 460234522 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 135074530 % v1.size()]);
	v2[(int) 1207074759 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 844347475 % v1.size()]);
	v2[(int) 490097249 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 1518540645 % v1.size()]);
	v2[(int) 1621118610 % v2.size()] = "hola amigo";
	logger.log<logger::NONE>(v1[(int) 1022075860 % v1.size()]);
	v2[(int) 2040559933 % v2.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v1[(int) 1785032613 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1118818016);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 2070056418, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1228633051);
	it1 = monkey::get_itn(v1, 1058067587);
	it1 = monkey::get_itn(v1, 245240244);
	it1 = monkey::get_itn(v1, 43665130);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(506221753 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1031459088 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1674706623 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(899354610 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(111137084 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 400661588);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 2024063398);
		it3 = monkey::get_itn(v2, 769629204, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 185340953);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1014869448);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1923372269);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 743150902);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(851294593 % v2.size()) = "atencion";
		logger.log<logger::NONE>(v1.at(2131974579 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1451016617 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1946300476 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1420749117 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1238766033 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(359709984 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(1287110370 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1910776131 % v2.size()) = "atencion";
		logger.log<logger::NONE>(v1.at(1819807951 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(0, "amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(416151096 % v1.size()) = "un dos tres quatro";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1978304798 % v1.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1069587183 % v1.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(956299916 % v1.size()) = "hola amigo";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(719592399 % v1.size()) = "amigo de pepito";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1433032205 % v1.size()] = "un dos tres quatro";
	v1[(int) 728713455 % v1.size()] = "amigo de la tornada";
	v1[(int) 417133599 % v1.size()] = "";
	v1[(int) 1529751726 % v1.size()] = "amigo de la tornada";
	v1[(int) 1945902823 % v1.size()] = "";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(7, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 227236176);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1229248636);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1476840972);
		it3 = monkey::get_itn(v2, 1933760141, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1599084041);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 514544853);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 867560494);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1307371614 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1430965365 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1416991672 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1317954794 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1253704668 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(1151871625 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1009097619 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1326884756 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2000244110 % v2.size()) = "atencion";
		logger.log<logger::NONE>(v1.at(1309918966 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_assign: count");
	v2.assign(18, "hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(3, "un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1369872211 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(366245519 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1050944575 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(141981460 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(937785789 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(665719911 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(655375284 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(1710650281 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2075255434 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(663891484 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 411674415 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 1444077041 % v1.size()]);
	v2[(int) 1585488804 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 2015965083 % v1.size()]);
	v2[(int) 1921738510 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v1[(int) 1873263100 % v1.size()]);
	v2[(int) 140500381 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 776724028 % v1.size()]);
	v2[(int) 1489277311 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v1[(int) 16852528 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(2, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1435337738 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v1[(int) 1390523246 % v1.size()]);
	v2[(int) 798621079 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 703513806 % v1.size()]);
	v2[(int) 1612600715 % v2.size()] = "atencion";
	logger.log<logger::NONE>(v1[(int) 1759951459 % v1.size()]);
	v2[(int) 909194108 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v1[(int) 117629370 % v1.size()]);
	v2[(int) 777675544 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 1992663141 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1598610989 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1297031553 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(409664276 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(1692763423 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1176684620 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(778296590 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(358357127 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(1692060281 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1434860175 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(622095274 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 238528239);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 161481278, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 207361535);
	it1 = monkey::get_itn(v2, 664936275);
	it1 = monkey::get_itn(v2, 1994540021);
	it1 = monkey::get_itn(v2, 1915306203);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 257521556 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 1452198740 % v2.size()]);
	v1[(int) 1949581837 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 739575267 % v2.size()]);
	v1[(int) 50188628 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 783525072 % v2.size()]);
	v1[(int) 2058230527 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 1022053311 % v2.size()]);
	v1[(int) 2036418148 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 1229414846 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1546110060);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 112114060, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1313932615);
	it1 = monkey::get_itn(v1, 1206777265);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 351495979, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 2133560814);
	it1 = monkey::get_itn(v1, 2082920464);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 2118066897, it1);
	v1.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(0, "amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 359955254);
	it1 = monkey::get_itn(v2, 238407010);
	it1 = monkey::get_itn(v2, 740372664);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 504455829, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1541032894);
	it1 = monkey::get_itn(v2, 1877241342);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(828769730 % v1.size()) = "atencion";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(455610636 % v1.size()) = "amigo de pepito";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(320858553 % v1.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(219063043 % v1.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(757235635 % v1.size()) = "hola amigo";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1187553545);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1207305000);
		it3 = monkey::get_itn(v2, 1341087005, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 652165521);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 949118800);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1196073215);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 703374576);
		it3 = monkey::get_itn(v2, 2024842945, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 10948223);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 332969934);
		it3 = monkey::get_itn(v2, 620803305, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 695694805);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1164820532);
		it3 = monkey::get_itn(v2, 1424363337, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1630127166);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1087447040);
		it3 = monkey::get_itn(v2, 1881302462, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1664554609);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1016050353);
		it3 = monkey::get_itn(v2, 507805060, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1781585184);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1715110061);
		it3 = monkey::get_itn(v2, 975188541, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2100771343);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(0, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 405766793);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1101461599);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 503559378);
		it3 = monkey::get_itn(v1, 378341288, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 219746723);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1465788329);
		it3 = monkey::get_itn(v1, 2101049186, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1353826539);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 969615891);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1693921504);
		it3 = monkey::get_itn(v1, 270738066, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(224025761 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(298450091 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(380776358 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(2085552406 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v2.at(1775445078 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(982425493 % v2.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1360766782 % v2.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(679071463 % v2.size()) = "atencion";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(591407783 % v2.size()) = "amigo de pepito";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(137845639 % v2.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(3, "amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(794084909 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(2059955975 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1000619839 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(5942319 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(592790322 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(123615437 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1328872688 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(1289160056 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(920933112 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(162738492 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1720767192 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 397069028 % v1.size()]);
	v2[(int) 1190640575 % v2.size()] = "un";
	logger.log<logger::NONE>(v1[(int) 759385550 % v1.size()]);
	v2[(int) 1653250298 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 1601970196 % v1.size()]);
	v2[(int) 299851559 % v2.size()] = "";
	logger.log<logger::NONE>(v1[(int) 1514442523 % v1.size()]);
	v2[(int) 1928971032 % v2.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v1[(int) 716549255 % v1.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2114945733 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(800336038 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(908338485 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(1105878210 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1452640743 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(1721885931 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(979536184 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(69081214 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(730856862 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(659782924 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1032253706);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 606039209);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2058679952);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1374349759);
		it3 = monkey::get_itn(v2, 937120592, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 911054532);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1006201806);
		it3 = monkey::get_itn(v2, 1328258481, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2076677932);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 111935902);
	it1 = monkey::get_itn(v1, 2083175170);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1501082247, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1513882640);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1732999915, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 912052195);
	it1 = monkey::get_itn(v1, 617769973);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1111548497);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 2072126079, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 2022603030);
	it1 = monkey::get_itn(v1, 930844238);
	it1 = monkey::get_itn(v1, 1374421782);
	it1 = monkey::get_itn(v1, 1043935620);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1967643003, it1);
	v1.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2079578905 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1091490980 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(440862826 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(158321648 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1369942167 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(644149066 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1869604128 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(1969332560 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(855480089 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(694067224 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 187571312);
	it1 = monkey::get_itn(v1, 827631632);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 807515477, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 315279302);
	it1 = monkey::get_itn(v1, 1265405449);
	it1 = monkey::get_itn(v1, 1742077458);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(2106701126 % v1.size()) = "hola amigo";
		logger.log<logger::NONE>(v2.at(1439909866 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(2032412701 % v1.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v2.at(1594820087 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(2125788164 % v1.size()) = "atencion";
		logger.log<logger::NONE>(v2.at(557856851 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(86196569 % v1.size()) = "dos";
		logger.log<logger::NONE>(v2.at(2052246058 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1653774789 % v1.size()) = "hola amigo";
		logger.log<logger::NONE>(v2.at(1809364577 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1693707833);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 2091418855);
		it3 = monkey::get_itn(v2, 34088154, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1573889771);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 271655193);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1711565059);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 147715230);
		it3 = monkey::get_itn(v2, 1698058501, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 403929568);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 717737755);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 224028897);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 144559561);
		it3 = monkey::get_itn(v2, 1005155577, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 827268443);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1354496975);
		it3 = monkey::get_itn(v2, 373492628, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 572480975);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 407580783);
		it3 = monkey::get_itn(v2, 2146370746, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1481110266);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 432115309);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1532682203);
		it3 = monkey::get_itn(v1, 836044878, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 823014152);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 250793996);
		it3 = monkey::get_itn(v1, 74548430, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1934978314);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 792286185);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 234418317);
		it3 = monkey::get_itn(v1, 1016315082, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 964639877);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 2021470660);
		it3 = monkey::get_itn(v1, 1791908320, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1177231739);
	it1 = monkey::get_itn(v1, 1960324324);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 456741508, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 635854828);
	it1 = monkey::get_itn(v1, 707535504);
	it1 = monkey::get_itn(v1, 1411486533);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1502689443, it1);
	v1.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(1, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1853424398);
	it1 = monkey::get_itn(v2, 1571129799);
	it1 = monkey::get_itn(v2, 879006388);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 755064859, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 709993987);
	it1 = monkey::get_itn(v2, 375761489);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(0, "dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1167835542);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1543144395);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1500493401);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 232016141);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1047841042);
		it3 = monkey::get_itn(v1, 942010129, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1529047014);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1722420380 % v2.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(821364057 % v2.size()) = "";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1897468086 % v2.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1620405046 % v2.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1782083259 % v2.size()) = "atencion";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 458265909);
	it1 = monkey::get_itn(v2, 775773245);
	it1 = monkey::get_itn(v2, 1985445918);
	it1 = monkey::get_itn(v2, 1798883134);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1890381346, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1075002017);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1630377285, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1205314017);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 771043917, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 2026678075);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 45518552, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1776662513);
	it1 = monkey::get_itn(v2, 915812609);
	it1 = monkey::get_itn(v2, 1453062988);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(8, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: range");
	{
		const std::set<C::value_type> s(v2.begin(), v2.end());
		v2 = C(s.begin(), s.end());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 2038266549);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 2031718421, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1096096919);
	it1 = monkey::get_itn(v1, 655278691);
	it1 = monkey::get_itn(v1, 611414090);
	it1 = monkey::get_itn(v1, 604470211);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 2000814810);
	it1 = monkey::get_itn(v2, 590753997);
	it1 = monkey::get_itn(v2, 2013516485);
	it1 = monkey::get_itn(v2, 1247600090);
	it1 = monkey::get_itn(v2, 323456275);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1515002996, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(367437407 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(1460570637 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(460261677 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(291342024 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(669162923 % v2.size()) = "hola amigo";
		logger.log<logger::NONE>(v1.at(1619427589 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(602382710 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(1087365664 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1044991204 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(773526954 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_construct: count");
	v1 = C(4, "amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(461738478 % v1.size()) = "dos";
		logger.log<logger::NONE>(v2.at(861408630 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1199605290 % v1.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v2.at(69131181 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1498937234 % v1.size()) = "";
		logger.log<logger::NONE>(v2.at(1743225000 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1567326126 % v1.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v2.at(577108379 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(2113491308 % v1.size()) = "";
		logger.log<logger::NONE>(v2.at(1386506140 % v2.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1425126841);
	it1 = monkey::get_itn(v2, 161975653);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 847377975, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1710297294);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1586721588, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 424222276);
	it1 = monkey::get_itn(v2, 638843231);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1426882097);
	it1 = monkey::get_itn(v2, 678368160);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 55324500, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 2064874300);
	it1 = monkey::get_itn(v2, 1780484928);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1164001692, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 920334605);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 246041152);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 760180875);
		it3 = monkey::get_itn(v2, 499437526, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2006833409);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 300994647);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1548185678);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 62974081);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(7, "atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1287221635);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1477255557);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1864504320);
		it3 = monkey::get_itn(v2, 1850608728, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 678602421);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 2141259257);
		it3 = monkey::get_itn(v2, 1558925100, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1312114340);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 505984773);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 544062603);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 440045679);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1363380569);
		it3 = monkey::get_itn(v2, 2003196654, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1290767183);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 430505170);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2108127153);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(682907948 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1752340559 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(1954895175 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(536302290 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		logger.log<logger::NONE>(v1.at(2048099244 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	logger.log<logger::NONE>(v2[(int) 1781680206 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 981827303 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 1494088739 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 344083336 % v2.size()]);
	logger.log<logger::NONE>(v2[(int) 209317683 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1475500850 % v1.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1520403440 % v1.size()) = "hola amigo";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1421019037 % v1.size()) = "un";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1952506229 % v1.size()) = "un dos tres quatro";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(297153279 % v1.size()) = "amigo de pepito";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v1);
		v1 = v2;
		v2 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(45022858 % v1.size()) = "dos";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1166107397 % v1.size()) = "amigo de pepito";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(1966777761 % v1.size()) = "amigo de la tornada";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(730055472 % v1.size()) = "un dos tres quatro";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v1.at(187079970 % v1.size()) = "hola amigo";
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 1570956535);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1571356990);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1146050552);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)3, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1017897393);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1080495486);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(23, "amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(4, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(7, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_assign: count");
	v1.assign(9, "hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un dos tres quatro");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(8, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1198295819);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1307871664, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 2062493684);
	it1 = monkey::get_itn(v1, 1096642157);
	it1 = monkey::get_itn(v1, 1039536161);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1835138902, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1925967710);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v2, v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 1996104042 % v2.size()] = "amigo de pepito";
	v2[(int) 2050322889 % v2.size()] = "amigo de pepito";
	v2[(int) 519525699 % v2.size()] = "un";
	v2[(int) 909078917 % v2.size()] = "un dos tres quatro";
	v2[(int) 641724328 % v2.size()] = "";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v2[(int) 713297908 % v2.size()] = "";
	v2[(int) 1809940065 % v2.size()] = "dos";
	v2[(int) 70002342 % v2.size()] = "un";
	v2[(int) 328482704 % v2.size()] = "dos";
	v2[(int) 173241318 % v2.size()] = "amigo de pepito";
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1821518995);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 2017294142);
		it3 = monkey::get_itn(v2, 1297098479, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 706205475);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)4, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 216447824);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 162267687);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1113150239);
		it3 = monkey::get_itn(v2, 738235050, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 335171976);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1767951605);
		it3 = monkey::get_itn(v2, 2145112042, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 611973464);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)0, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 204008782);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 569354759);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 436244518);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1934012961);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 443031626);
		it3 = monkey::get_itn(v1, 1803823455, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_stdswap:");
	std::swap(v1, v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 2106954239);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 207049407);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2049143652);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 706301126);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 362640933);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1464197478);
		it3 = monkey::get_itn(v2, 797870152, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v1.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 2013433682 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 1406070887 % v2.size()]);
	v1[(int) 1768895491 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 1042690780 % v2.size()]);
	v1[(int) 1728366083 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 1248665432 % v2.size()]);
	v1[(int) 1935415490 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 1150325436 % v2.size()]);
	v1[(int) 1807344241 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 421706140 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(9, "amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(899639315 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(896481719 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(660971534 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(1138257919 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(265295997 % v2.size()) = "";
		logger.log<logger::NONE>(v1.at(912478755 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(111281272 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(2047461207 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1694090917 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(1313757770 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v1);
		monkey::print_full_vect<C>(v1, "v1");
		v1.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(4, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v2.swap(v1);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1896041134);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1128924212, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 645039205);
	it1 = monkey::get_itn(v1, 1789895746);
	it1 = monkey::get_itn(v1, 422588181);
	it1 = monkey::get_itn(v1, 1387699357);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 805488485);
	it1 = monkey::get_itn(v1, 1212833506);
	it1 = monkey::get_itn(v1, 1197836336);
	it1 = monkey::get_itn(v1, 285347053);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1717275427, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 958023964);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 379128997, it1);
	v1.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 790846638);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 893238753);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 2022162966);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v2.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1163104873);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v2.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v2, 1585693054);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v1, 1547062398);
		it3 = monkey::get_itn(v1, 132416620, it2);
		v2.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("amigo de la tornada");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2056978036 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(182130421 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1171862722 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(1152865405 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(131051198 % v2.size()) = "amigo de la tornada";
		logger.log<logger::NONE>(v1.at(577039883 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(2113587423 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(406885246 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1532476518 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(1689951228 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("atencion");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("amigo de pepito");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1056628875 % v2.size()) = "un";
		logger.log<logger::NONE>(v1.at(1739112274 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(936710301 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(1160964704 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1673164896 % v2.size()) = "dos";
		logger.log<logger::NONE>(v1.at(1216456860 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1489087246 % v2.size()) = "un dos tres quatro";
		logger.log<logger::NONE>(v1.at(1317862588 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("test_at: ");
	try
	{
		v2.at(1447198649 % v2.size()) = "amigo de pepito";
		logger.log<logger::NONE>(v1.at(1960698920 % v1.size()));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>("out_of_range catched");
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1380289263);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 1204997123, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 1366596413);
	it1 = monkey::get_itn(v1, 306406495);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v1, 631778662, it1);
	v1.erase(it1, it2);
	it1 = monkey::get_itn(v1, 120250565);
	it1 = monkey::get_itn(v1, 1628206203);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_clear:");
	{
		C v3(v2);
		monkey::print_full_vect<C>(v2, "v2");
		v2.clear();
		monkey::print_full_vect<C>(v3, "v3");
		v3.clear();
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_pop_back:");
	v2.pop_back();
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v2.push_back("hola amigo");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v2 < v1: " + SSTR( v2 < v1));
	logger.log<logger::NONE>("v2 > v1: " + SSTR( v2 > v1));
	logger.log<logger::NONE>("v2 <= v1: " + SSTR( v2 <= v1));
	logger.log<logger::NONE>("v2 >= v1: " + SSTR( v2 >= v1));
	logger.log<logger::NONE>("v2 == v1: " + SSTR( v2 == v1));
	logger.log<logger::NONE>("v2 != v1: " + SSTR( v2 != v1));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v1.resize(8, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v1, 1226975840);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)1, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1752257034);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1310137271);
		it3 = monkey::get_itn(v2, 236552049, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 2137763121);
	try
	{
		logger.log<logger::NONE>("test_insert count");
		v1.insert(it1, (int)2, "" );
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 1849642313);
	try
	{
		logger.log<logger::NONE>("test_insert value");
		logger.log<logger::NONE>(*v1.insert(it1, ""));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	it1 = monkey::get_itn(v1, 134707460);
	try
	{
		logger.log<logger::NONE>("test_insert range");
		it2 = monkey::get_itn(v2, 1291777438);
		it3 = monkey::get_itn(v2, 513229692, it2);
		v1.insert(it1, input_iterator<C::iterator>(it2), input_iterator<C::iterator>(it3));
	}
	catch (std::out_of_range &e)
	{
		logger.log<logger::NONE>(e.what());
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_copy_construct_equal:");
	{
		C v3(v2);
		v2 = v1;
		v1 = v3;
	}
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(3, "un");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_resize:");
	v2.resize(1, "");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	it1 = monkey::get_itn(v2, 133236313);
	it1 = monkey::get_itn(v2, 1573543895);
	it1 = monkey::get_itn(v2, 2124098019);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 964985540, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1994126927);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 1201537589, it1);
	v2.erase(it1, it2);
	it1 = monkey::get_itn(v2, 1984406400);
	logger.log<logger::NONE>("test_erase range");
	it2 = monkey::get_itn(v2, 918812193, it1);
	v2.erase(it1, it2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_push_back:");
	v1.push_back("dos");
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1566749346 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 2012328767 % v2.size()]);
	v1[(int) 1527474482 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 1579058539 % v2.size()]);
	v1[(int) 581708158 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 335515476 % v2.size()]);
	v1[(int) 176649022 % v1.size()] = "dos";
	logger.log<logger::NONE>(v2[(int) 242398497 % v2.size()]);
	v1[(int) 1144488594 % v1.size()] = "atencion";
	logger.log<logger::NONE>(v2[(int) 655390455 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_swap:");
	v1.swap(v2);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_comparison:");
	logger.log<logger::NONE>("v1 < v2: " + SSTR( v1 < v2));
	logger.log<logger::NONE>("v1 > v2: " + SSTR( v1 > v2));
	logger.log<logger::NONE>("v1 <= v2: " + SSTR( v1 <= v2));
	logger.log<logger::NONE>("v1 >= v2: " + SSTR( v1 >= v2));
	logger.log<logger::NONE>("v1 == v2: " + SSTR( v1 == v2));
	logger.log<logger::NONE>("v1 != v2: " + SSTR( v1 != v2));
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
	std::cout << "[GDB]===================================> br " << __FILE_NAME__ << ":" <<  __LINE__  << std::endl;
	logger.log<logger::NONE>("test_operator_index:");
	v1[(int) 1536415768 % v1.size()] = "un dos tres quatro";
	logger.log<logger::NONE>(v2[(int) 729014245 % v2.size()]);
	v1[(int) 1716550905 % v1.size()] = "amigo de la tornada";
	logger.log<logger::NONE>(v2[(int) 1949976254 % v2.size()]);
	v1[(int) 1581396024 % v1.size()] = "un";
	logger.log<logger::NONE>(v2[(int) 38106589 % v2.size()]);
	v1[(int) 1012970916 % v1.size()] = "amigo de pepito";
	logger.log<logger::NONE>(v2[(int) 1421770716 % v2.size()]);
	v1[(int) 1348486392 % v1.size()] = "";
	logger.log<logger::NONE>(v2[(int) 1369180049 % v2.size()]);
	logger.log<logger::NONE>("printing v1:");
	monkey::print_full_vect<C>(v1, "v1");
	logger.log<logger::NONE>("printing v2:");
	monkey::print_full_vect<C>(v2, "v2");
}
