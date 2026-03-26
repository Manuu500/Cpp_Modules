/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:31:21 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/26 12:40:08 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap c("Pepe");
    ClapTrap a("Antonio");
    
    std::cout << a.getLife() << std::endl;
    c.attack(a.getName());
    a.takeDamage(5);
    std::cout << a.getLife() << std::endl;
    a.takeDamage(10);
    a.beRepaired(20);
    
    return 0;
}