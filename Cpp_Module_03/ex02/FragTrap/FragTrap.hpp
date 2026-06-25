/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:33:17 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/06/25 15:53:13 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    private:
        
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& r);
        FragTrap& operator=(const FragTrap& r);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);
};

    #endif