/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:32:16 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/27 15:43:24 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"
#include <iostream>

FlagTrap::FlagTrap() : ClapTrap("FlagTrap")  {
    this->life = 100; 
    this->energy = 100;
    this->attack_pts = 30;
    std::cout << "FlagTrap default constructor called" << std::endl;
}

FlagTrap::FlagTrap(const std::string& name) : ClapTrap(name) { 
    this->life = 100;
    this->energy = 100;
    this->attack_pts = 30; 
    std::cout << "Name constructor called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &other) : ClapTrap(other) {
	std::cout << "FlagTrap copy constructor called" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &other) {
	std::cout << "FlagTrap copy assignment operator called" << std::endl;
	if (this != &other)
        ClapTrap::operator=(other);
	return *this;
}

FlagTrap::~FlagTrap() {
	std::cout << "FlagTrap destructor called" << std::endl;
}

void FlagTrap::attack(const std::string& target) {
    if (this->life <= 0 || this->energy <= 0)
        std::cout << "FlagTrap is dead, cant attack" << std::endl;
    else {
        this->energy--;
        std::cout << "FlagTrap " << this->name << " attacks " << target
            << ", causing " << this->attack_pts << " points of damage!" << std::endl;
    }
}

void FlagTrap::highFivesGuys(void) {
    std::cout << "FlagTrap " << this->name
              << "does a high five to everyone!" << std::endl;
}

