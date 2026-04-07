/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:18:31 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/07 15:00:22 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

int main (void)
{
    Zombie *zArray;
    int num = 7;
    
    zArray = zombieHorde(num, "manuel");
    
    for (int i = 0; i < num; i++)
        zArray[i].announce();
    
    delete[] zArray;
    return 1;
}