/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:18:02 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/18 14:45:20 by mruiz-ur         ###   ########.fr       */
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
	std::string name;
	
	std::cin >> name;
	Zombie *heapZ = z.newZombie(name);
	heapZ->announce();
	delete(heapZ);

	return 0;
}