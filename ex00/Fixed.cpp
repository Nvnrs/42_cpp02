#include "Fixed.hpp"

int fractBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	rawBits = 0;
}
Fixed::Fixed(const Fixed &nb)
{
	std::cout << "Copy constructor called\n";
	*this = nb;
}
Fixed &Fixed::operator=(const Fixed &nb)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(nb.getRawBits());
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return this->rawBits;
}
void Fixed::setRawBits( int const raw )
{
	this->rawBits = raw;
}