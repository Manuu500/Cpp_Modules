/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:06:43 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/08 09:39:27 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

Human_B::Human_B(std::string name) : name(name), weapon(NULL) {}

void Human_B::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void Human_B::attack()
{
    if (this->weapon == NULL)
    {
        std::cout << this->name << " attacks with their bare hands" << std::endl;
        return;
    }
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}