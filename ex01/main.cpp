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

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( 10 );
// 	Fixed const c( 42.42f );
// 	Fixed const d( b );
// 	a = Fixed( 1234.4321f );
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// 	return 0;
// }


double positive_pow(double nb, double power)
{
	double output = nb;
	while (power > 1)
	{
		output*= nb;
		power--;
	}
	return output;
}

double negative_pow(double nb, double power)
{
	double output = nb;
	power*= -1;
	output = 1 / positive_pow(output, power);
	return output;
}

double	ft_pow(double nb, double power)
{
	if (power == 0)
		return 1;
	if (power < 0)
		return negative_pow(nb, power);
	return positive_pow(nb, power);
}

void	test(float n, float power)
{
	double exp = pow(n, power);
	double out = ft_pow(n, power);

	std::cout << "OUT : " << ft_pow(n, power);
	std::cout << " | EXP : " << pow(n, power); 
	if (exp != out)
		std::cout << "| KO" << std::endl;
	else
		std::cout << "| OK" << std::endl;
	
}

int	main()
{
	test(10, -1);   // Attendu : 0.1
	test(10, 0);    // Attendu : 1
	test(2, -3);    // Attendu : 0.125
	test(5, -2);    // Attendu : 0.04
	test(-2, -2);   // Attendu : 0.25
	test(-2, -3);   // Attendu : -0.125
	test(3, -4);    // Attendu : 0.012345679 (≈ 1 / 81)
	test(1, -100);  // Attendu : 1
	test(0.5, -2);  // Attendu : 4
	test(7, -0);    // Attendu : 1 (car -0 = 0)
	test(2, 3);     // Attendu : 8
	test(5, 2);     // Attendu : 25
	test(10, 1);    // Attendu : 10
	test(-2, 2);    // Attendu : 4
	test(-2, 3);    // Attendu : -8
	test(3, 0);     // Attendu : 1
	test(1, 100);   // Attendu : 1
	test(0.5, 2);   // Attendu : 0.25
	test(4, 5);     // Attendu : 1024
	test(7, 3);     // Attendu : 343
}

