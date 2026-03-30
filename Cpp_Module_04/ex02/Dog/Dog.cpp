/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:12:19 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:10:41 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog"){
	this->type =  "Dog";
	this->brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string& name) : Animal(name) {
	this->type = name;
	this->brain = new Brain();
    std::cout << "Dog name constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other) {
        Animal::operator=(other);
		*this->brain = *other.brain;
	}
	return *this;
}

Dog::~Dog() {
	delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::makeSound(void) const {
    std::cout << this->type << " ha ladrado" << std::endl;
}