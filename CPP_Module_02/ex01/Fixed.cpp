# include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = val << this->fractional;
}

Fixed::Fixed(float const val)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point = roundf(val * (1 << this->fractional));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

float Fixed::toFloat( void ) const
{
	return ( (float)this->fixed_point / (float)(1 << this->fractional) );
}

int Fixed::toInt( void ) const
{
	return (this->fixed_point >> this->fractional);
}

std::ostream& operator<<(std::ostream& os, const Fixed& val)
{
    os << val.toFloat();
    return os;
}