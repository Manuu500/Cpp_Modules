/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:31:21 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/27 15:33:38 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap c("Pepe");
    ClapTrap a("Antonio");
    ScavTrap d("Pochita");
    
    std::cout << a.getLife() << std::endl;
    c.attack(a.getName());
    a.takeDamage(5);
    std::cout << a.getLife() << std::endl;
    a.takeDamage(10);
    d.attack(a.getName());
    std::cout << a.getLife() << std::endl;
    d.guardGate();
    a.attack(d.getName());
    
    return 0;
}