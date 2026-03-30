/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:11:09 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:11:06 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"){
	this->type =  "Cat";
	this->brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string& name) : Animal(name) {
	this->type = name;
	this->brain = new Brain();
    std::cout << "Cat name constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other) {
        Animal::operator=(other);
		*this->brain = *other.brain;
	}
	return *this;
}

Cat::~Cat() {
	delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::makeSound(void) const {
    std::cout << this->type << " ha maullado" << std::endl;
}