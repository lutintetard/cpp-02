#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedpoint(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedpoint = val * pow(2, fractionnal);
}

Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedpoint = val * pow(2, fractionnal);
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedpoint = other.getRawBits() * pow(2, fractionnal);
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedpoint / pow(2, fractionnal)); 
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedpoint = raw; 
}

float	Fixed::toFloat(void) const
{
	return (_fixedpoint / pow(2, fractionnal));
}

int	Fixed::toInt(void) const
{
	return (_fixedpoint / pow(2, fractionnal));
}

int const	Fixed::fractionnal = 8;
