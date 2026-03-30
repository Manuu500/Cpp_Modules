/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:17:54 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:50:20 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"


Zombie::Zombie(std::string _name) :
	name(_name)
{}

void	Zombie::setName(const std::string& firstName) {
	this->name = firstName;
}

std::string	Zombie::getName(void) const {
	return (this->name);
}

void Zombie::announce(void)
{
	std::cout << this->name + ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}