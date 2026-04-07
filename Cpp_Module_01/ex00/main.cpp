/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:18:02 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/07 14:55:20 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

int main (void)
{	
	Zombie *zombito = newZombie("Zombito");
	const Zombie zombita = Zombie("zombita");
	zombita.announce();
	zombito->announce();
	randomChump("manuel");
	delete(zombito);

	return 0;
}