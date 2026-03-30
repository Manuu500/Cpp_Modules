/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:19:44 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:54:53 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zArray = new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
        zArray[i].setName(name);
        zArray[i].announce();
    }
    return (zArray);
}
