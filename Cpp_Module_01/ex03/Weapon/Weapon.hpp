/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:06:50 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:57:40 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>
#include <cstdlib>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string type);
    	std::string getType(void);
        void        setType(std::string type);
};

#endif