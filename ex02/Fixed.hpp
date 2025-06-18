
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
		bool  operator>=(const Fixed &nb) const;
		bool  operator<=(const Fixed &nb) const;
		bool  operator>(const Fixed &nb) const;
		bool  operator<(const Fixed &nb) const;
		bool  operator==(const Fixed &nb) const;
		bool  operator!=(const Fixed &nb) const;
		Fixed  operator+(const Fixed &nb) const;
		Fixed  operator-(const Fixed &nb) const;
		Fixed  operator*(const Fixed &nb) const;
		Fixed  operator/(const Fixed &nb) const;
		Fixed &operator++();   // Prefix increment operator.
   		Fixed operator++(int); // Postfix increment operator.
		Fixed& operator--(); // Prefix increment operator.
		Fixed operator--(int); // Postfix increment operator.
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;

		static Fixed &min(Fixed &n1, Fixed &n2);
		static Fixed min(const Fixed &n1, const Fixed &n2);
		static Fixed &max(Fixed &n1, Fixed &n2);
		static Fixed max(const Fixed &n1, const Fixed &n2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &nb);

#endif