/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:18:02 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/18 17:13:22 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

using namespace std;


int main (void)
{
	Zombie z;
	
	Zombie *zombie = z.newZombie("Zombito");
	zombie->announce();
	randomChump("manuel");
	delete(zombie);

	return 0;
}