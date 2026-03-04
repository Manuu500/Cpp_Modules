/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:06:50 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/25 12:48:55 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string type);
    	std::string getType(void);
        void        setType(std::string type);
};

#endif