/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 15:56:19 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/27 16:39:31 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "Animal";
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(const std::string& name) {
	this->type = name;
    std::cout << "Name constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
        this->type = other.type;
    }
	return *this;
}

Animal::~Animal() {
    std::cout << "Destructor called" << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << this->type << " ha hecho sonido" << std::endl;
}

const std::string& Animal::getType() const {
	return this->type;
}
