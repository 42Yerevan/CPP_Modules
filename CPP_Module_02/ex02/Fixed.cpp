# include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point = 0;
}

Fixed::Fixed(const int val)
{
	this->fixed_point = val << this->fractional;
}

Fixed::Fixed(float const val)
{
    this->fixed_point = roundf(val * (1 << this->fractional));
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed(const Fixed& fixed)
{
	this->fixed_point = fixed.fixed_point;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
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

bool Fixed::operator>(const Fixed& other) const
{
    return (this->fixed_point > other.fixed_point);
}

bool Fixed::operator<(const Fixed& other) const
{
     return (this->fixed_point < other.fixed_point);
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->fixed_point >= other.fixed_point);
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->fixed_point <= other.fixed_point);
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->fixed_point == other.fixed_point);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->fixed_point != other.fixed_point);
}

Fixed Fixed::operator+(const Fixed& other)
{
    return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other)
{
    return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other)
{
    return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other)
{
    return (this->toFloat() / other.toFloat());
}

Fixed Fixed::operator++()
{
    Fixed temp;
    temp.fixed_point = ++fixed_point;
    return temp;
}

Fixed Fixed::operator--()
{
    Fixed temp;
    temp.fixed_point = --fixed_point;
    return temp;
}

Fixed Fixed::operator++(int)
{
    Fixed temp;
    temp.fixed_point = fixed_point++;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp;
    temp.fixed_point = fixed_point--;
    return temp;
}

Fixed const &Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
    return (obj1 > obj2 ? obj1 : obj2);
}

Fixed const &Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
    return (obj1 < obj2 ? obj1 : obj2);
}