# include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = fixed.fixed_point;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&fixed != this)
			this->fixed_point = fixed.fixed_point;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return this->fixed_point;
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}