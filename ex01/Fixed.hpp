
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private :
		int rawBits;
		const static int fractBits;

	public :
		Fixed();
		Fixed(const Fixed &nb);
		Fixed(const int &nb);
		Fixed(const float &nb);
		Fixed  &operator=(const Fixed &nb);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &nb);

#endif