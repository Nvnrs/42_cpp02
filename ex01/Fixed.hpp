
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private :
		int rawBits;
		const static int fractBits;

	public :
		Fixed();
		Fixed(const Fixed &nb);
		Fixed  &operator=(const Fixed &nb);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif