/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:18:02 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:51:06 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

int main (void)
{	
	Zombie *zombie = newZombie("Zombito");
	zombie->announce();
	randomChump("manuel");
	delete(zombie);

	return 0;
}