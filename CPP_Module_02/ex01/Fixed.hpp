# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int fixed_point;
		static const int fractional = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int val);
		Fixed(float const val);
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed& fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& val);

# endif