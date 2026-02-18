/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:06:50 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/18 18:15:17 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon {
    private:
        std::string type;
    public:
    	std::string getType(void) const;
        void        setType(const std::string& type);
}

#endif