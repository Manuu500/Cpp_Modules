/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:11:09 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/27 16:37:05 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"){
	this->type =  "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string& name) : Animal(name) {
	this->type = name;
    std::cout << "Cat name constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
        Animal::operator=(other);
	return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::makeSound(void) const {
    std::cout << this->type << " ha maullado" << std::endl;
}