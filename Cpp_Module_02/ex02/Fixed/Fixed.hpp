/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:17:32 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/08 10:30:01 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Fixed
{
private:
	static const int frac = 8;
	int num;
public:
	Fixed();
	Fixed(const Fixed& r);
	Fixed& operator=(const Fixed& r);
	~Fixed();
	Fixed(const int r);
	Fixed(const float f);
	float toFloat( void ) const;
	int toInt( void ) const;
	
	bool operator<(const Fixed& other) const;
	bool operator>(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;
	Fixed& 			operator++(void);
	Fixed 			operator++(int);
	static 			Fixed& max(Fixed& a, Fixed& b);
	static const 	Fixed& max(const Fixed& a, const Fixed& b);
	static 			Fixed& min(Fixed& a, Fixed& b);
	static const 	Fixed& min(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
