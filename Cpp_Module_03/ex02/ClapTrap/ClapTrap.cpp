/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:32:16 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/08 10:02:25 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : life(10), energy(10), attack_pts(5) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), life(10), energy(10), attack_pts(5) {
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
        name = other.name;
        life = other.life;
        energy = other.energy;
        attack_pts = other.attack_pts;
    }
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

const std::string& ClapTrap::getName() const {
    return this->name;
}

int ClapTrap::getLife() const {
    return this->life;
}

int ClapTrap::getEnergy() const {
    return this->energy;
}

int ClapTrap::getAttackPts() const {
    return this->attack_pts;
}

void ClapTrap::attack(const std::string& target) {
    if (this->life <= 0)
        std::cout << "ClapTrap " << this->name << " is dead, cant attack" << std::endl;
    else {
        this->energy--;
        std::cout << "ClapTrap " << this->name << " attacks " << target
            << ", causing " << this->attack_pts << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    this->life += amount;
    this->energy--;
    std::cout << "ClapTrap " << this->name << " repairs " << amount
        << " points of life to himself " << std::endl;  
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->life <= 0)
        std::cout << "ClapTrap " << this->name << "is dead, cant take more damage" << std::endl;
    else {
        this->life = this->life - 5;
        std::cout << "ClapTrap " << this->name << " gets " << amount
            << " points of damage!" << std::endl;   
    }
}
