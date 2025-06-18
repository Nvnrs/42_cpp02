#include "Fixed.hpp"

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

const int Fixed::fractBits = 8;

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

Fixed::Fixed(const int &nb)
{
	std::cout << "Int constructor called\n";
	this->rawBits = nb << this->fractBits;
}

Fixed::Fixed(const float &nb)
{
	std::cout << "Float constructor called\n";
	this->rawBits = roundf(nb * ft_pow(2, this->fractBits));
}
Fixed &Fixed::operator=(const Fixed &nb)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(nb.getRawBits());
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &nb)
{
	os << nb.toFloat();
	return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called\n";
	return this->rawBits;
}
void Fixed::setRawBits( int const raw )
{
	this->rawBits = raw;
}

int Fixed::toInt( void ) const
{
	return this->rawBits >> this->fractBits;
}

float Fixed::toFloat( void ) const
{
	return this->rawBits /  ft_pow(2, this->fractBits);
}
