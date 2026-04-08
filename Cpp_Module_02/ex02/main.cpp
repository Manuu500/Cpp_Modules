/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:17:37 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/08 10:35:52 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << (a == a) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	//All operators besides subject
	// Fixed c(10.5f);
	// Fixed d(2.25f);

	// std::cout << "---- extra operator checks ----" << std::endl;
	// std::cout << "c = " << c << " | d = " << d << std::endl;
	// std::cout << "c + d = " << (c + d) << std::endl;
	// std::cout << "c - d = " << (c - d) << std::endl;
	// std::cout << "c / d = " << (c / d) << std::endl;
	// std::cout << "c > d  : " << (c > d) << std::endl;
	// std::cout << "c < d  : " << (c < d) << std::endl;
	// std::cout << "c >= d : " << (c >= d) << std::endl;
	// std::cout << "c <= d : " << (c <= d) << std::endl;
	// std::cout << "c == d : " << (c == d) << std::endl;
	// std::cout << "c != d : " << (c != d) << std::endl;
	// std::cout << "min(c, d) = " << Fixed::min(c, d) << std::endl;
	// std::cout << "max(c, d) = " << Fixed::max(c, d) << std::endl;
	return 0;
}