/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:31:21 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/07 15:20:58 by mruiz-ur         ###   ########.fr       */
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
    std::cout << a.getLife() << std::endl;
    a.beRepaired(20);
    std::cout << a.getLife() << std::endl;
    
    return 0;
}