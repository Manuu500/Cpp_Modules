/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:17:35 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/07 16:25:34 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : num(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		num = other.num;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value) : num(value * 256){
    std::cout << "Int constructor called" << std::endl;  
}

Fixed::Fixed(const float value) : num(roundf(value * (1 * 256))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed Fixed::operator*(const Fixed& other) {
	Fixed result;
	result.num = (num * other.num) >> frac;
	return result;
}

bool Fixed::operator<(const Fixed& other) const {
	return  num < other.num;
}

bool Fixed::operator>(const Fixed& other) const {
	return  num > other.num;
}

Fixed& Fixed::operator++(void) {
	++num;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++num;
	return tmp;
}

float Fixed::toFloat( void ) const{
    return static_cast<float>(num) / (1 << frac);
}

int Fixed::toInt( void ) const{
    return num >> frac;    
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	else
		return b;
}

const Fixed Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	else
		return b;
}

const Fixed Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	else
		return b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}