/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:31:21 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/06/25 15:53:52 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap c("Pepe");
    ClapTrap a("Antonio");
    ScavTrap d("Pochita");
    FragTrap x("Manu");
    
    std::cout << a.getLife() << std::endl;
    c.attack(a.getName());
    a.takeDamage(5);
    std::cout << a.getLife() << std::endl;
    a.takeDamage(10);
    d.attack(a.getName());
    std::cout << a.getLife() << std::endl;
    d.guardGate();
    a.attack(d.getName());
    x.attack(d.getName());
    x.highFivesGuys();
    
    return 0;
}