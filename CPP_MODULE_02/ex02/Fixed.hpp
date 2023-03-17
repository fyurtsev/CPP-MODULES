#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fixednumber;
    static int const bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& oth);
	Fixed &operator=(Fixed const &fixed);
	Fixed(const int number);
	Fixed(const float number);

	float toFloat(void) const;
	int toInt(void)const;
    int		getRawBits() const;
	void	setRawBits(int const raw);

    bool  operator>(const Fixed& oth) const;
    bool  operator<(const Fixed& oth) const;
    bool  operator<=(const Fixed& oth) const;
    bool  operator>=(const Fixed& oth) const;
    bool  operator==(const Fixed& oth) const ;
    bool  operator!=(const Fixed& oth) const;

	Fixed operator+(const Fixed& oth) const;
    Fixed operator-(const Fixed& oth) const;
    Fixed operator*(const Fixed& oth) const;
    Fixed operator/(const Fixed& oth) const;

    Fixed &operator++();//ön(++)    !
    Fixed operator++(int);//son(++) !
    Fixed &operator--();//          !
    Fixed operator--(int);//        !

    static Fixed& min(Fixed &f1, Fixed &f2);
	static const Fixed& min(const Fixed &f1, const Fixed &f2);
	static Fixed& max(Fixed &f1, Fixed &f2);
	static const Fixed& max(const Fixed &f1, const Fixed &f2);
};
std::ostream& operator << (std::ostream&, const Fixed&);

#endif