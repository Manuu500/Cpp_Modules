/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:44:34 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/06/26 16:32:19 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
	this->type = "WrongAnimal";
    std::cout << "Default constructor called for " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& name) {
	this->type = name;
    std::cout << "Name constructor called for " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "Copy constructor called for " << this->type << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
        this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << this->type << " ha hecho sonido" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return this->type;
}