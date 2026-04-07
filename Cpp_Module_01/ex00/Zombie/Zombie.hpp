/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:17:48 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/07 14:55:51 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string name);
	    void    setName(const std::string& firstName);
		std::string getName(void) const;
		void announce( void ) const;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif