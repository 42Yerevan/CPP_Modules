# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int fractional = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed& fixed);
		Fixed& Fixed::operator=(const Fixed& fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

# endif