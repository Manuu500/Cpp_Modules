/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:18:31 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/18 17:42:26 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

using namespace std;

int main (void)
{
    Zombie *zArray;
    int num = 7;
    
    zArray = zombieHorde(num, "manuel");
    free_zombie(zArray);
    return 1;
}