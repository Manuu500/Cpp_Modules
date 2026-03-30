/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:06:36 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:57:25 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

Human_A::Human_A(std::string new_name, Weapon &new_weapon) : name(new_name), weapon(new_weapon) {};

void Human_A::attack(){
    std::cout << this->name << " attacks with their " << this->weapon.getType() << ::endl;
}

void Human_A::setWeapon(Weapon weapon)
{
    weapon.setType(weapon.getType());
}