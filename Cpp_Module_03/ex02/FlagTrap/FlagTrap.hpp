/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:33:17 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/27 15:47:48 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {
    private:
        
    public:
        FlagTrap();
        FlagTrap(const std::string& name);
        FlagTrap(const FlagTrap& r);
        FlagTrap& operator=(const FlagTrap& r);
        ~FlagTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);
};

    #endif