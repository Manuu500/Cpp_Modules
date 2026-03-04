/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:06:40 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/25 12:58:33 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "Weapon.hpp"
using namespace std;

class Human_A {
    private:
        std::string name;
        Weapon &weapon;
    public:
        Human_A(std::string name, Weapon &weapon);
        void attack();
        void setWeapon(Weapon weapon);
};

#endif