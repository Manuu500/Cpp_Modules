/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:17:54 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/18 14:44:32 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

using namespace std;

void	Zombie::setName(const std::string& firstName) {
	this->name = firstName;
}

std::string	Zombie::getName(void) const {
	return (this->name);
}

Zombie* Zombie::newZombie( std::string name )
{
	Zombie *new_zombie = new Zombie();
	new_zombie->setName(name);
	return (new_zombie);
}

void Zombie::announce(void)
{
	std::cout << this->name + ": " << "braaaaaaaiiiiiinzzzzzzzzzz" << std::endl;
}