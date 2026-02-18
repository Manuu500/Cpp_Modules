/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:19:48 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/18 17:42:36 by mruiz-ur         ###   ########.fr       */
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

void Zombie::announce(void)
{
	std::cout << this->name + ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    free_zombie(Zombie *z)
{
    delete[] z;
}