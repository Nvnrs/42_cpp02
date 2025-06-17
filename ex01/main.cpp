#include "Fixed.hpp"
#include <iostream>
#include <bitset>

int main( void ) {
	// int test
	// Fixed test;
	// int val = 8388607;

	// test = val;
	// std::cout << "GetValue :" << test.getRawBits() << std::endl;
	// std::cout << "Fixed in bits =" << std::bitset<32>(test.getRawBits())  << std::endl;
	// std::cout << "Val in bits = " << std::bitset<32>(val)  << std::endl;
	// std::cout << "To int " << test.toInt() << std::endl;

	// float test
	float f = 42.42;
	Fixed test;

	test = f;
	std::cout << "GetValue :" << test.getRawBits() << std::endl;
	std::cout << "Fixed in bits =" << std::bitset<32>(test.getRawBits())  << std::endl;
	std::cout << "Val in bits = " << std::bitset<32>(f)  << std::endl;
	std::cout << "To float " << test.toFloat() << std::endl;
	return 0;
}