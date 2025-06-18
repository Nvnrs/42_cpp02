#include "Fixed.hpp"
#include <iostream>
#include <bitset>

// int main( void ) {
// 	// int test
// 	// Fixed test;
// 	// int val = 8388607;

// 	// test = val;
// 	// std::cout << "GetValue :" << test.getRawBits() << std::endl;
// 	// std::cout << "Fixed in bits =" << std::bitset<32>(test.getRawBits())  << std::endl;
// 	// std::cout << "Val in bits = " << std::bitset<32>(val)  << std::endl;
// 	// std::cout << "To int " << test.toInt() << std::endl;

// 	// float test
// 	float f = 42.42;
// 	Fixed test;

// 	test = f;
// 	std::cout << "GetValue :" << test.getRawBits() << std::endl;
// 	std::cout << "Fixed in bits =" << std::bitset<32>(test.getRawBits())  << std::endl;
// 	std::cout << "Val in bits = " << std::bitset<32>(f)  << std::endl;
// 	std::cout << "To float " << test.toFloat() << std::endl;
// 	return 0;
// }

int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}

