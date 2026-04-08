/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:32:16 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/08 10:02:54 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")  {
    this->life = 100; 
    this->energy = 50;
    this->attack_pts = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) { 
    this->life = 100;
    this->energy = 50;
    this->attack_pts = 20; 
    std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other)
        ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->life <= 0 || this->energy <= 0)
        std::cout << "ScavTrap is dead, cant attack" << std::endl;
    else {
        this->energy--;
        std::cout << "ScavTrap " << this->name << " attacks " << target
            << ", causing " << this->attack_pts << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << this->name
              << " is now in Gate keeper mode" << std::endl;
}
