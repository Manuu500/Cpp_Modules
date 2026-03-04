/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:06:45 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/25 13:04:08 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "Weapon.hpp"
using namespace std;

class Human_B {
    private:
        std::string name;
        Weapon *weapon;
    public:
        Human_B(std::string name);
        void setWeapon(Weapon &weapon);
        void attack();
};

#endif
