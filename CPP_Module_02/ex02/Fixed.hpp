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
		bool operator>(const Fixed& other) const; 
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;
        Fixed operator+(const Fixed& other);
        Fixed operator-(const Fixed& other);
        Fixed operator*(const Fixed& other);
        Fixed operator/(const Fixed& other);
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        static Fixed& min(Fixed& val1, Fixed& val2);
        static Fixed& max(Fixed& val1, Fixed& val2);
        static const Fixed& min(const Fixed& val1, const Fixed& val2);
        static const Fixed& max(const Fixed& val1, const Fixed& val2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& val);

# endif