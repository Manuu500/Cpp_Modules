/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:06:48 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/07 16:28:21 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type) {}

void	Weapon::setType(std::string _type) {
	this->type = _type;
}

std::string Weapon::getType(void) {
	if (this->type.empty())
		return ("bare hands");
	return (this->type);
}