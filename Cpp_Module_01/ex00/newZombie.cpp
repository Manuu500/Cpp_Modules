/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:19:06 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/18 16:21:27 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

using namespace std;

Zombie* Zombie::newZombie( std::string name )
{
	Zombie *new_zombie = new Zombie();
	new_zombie->setName(name);
	return (new_zombie);
}
