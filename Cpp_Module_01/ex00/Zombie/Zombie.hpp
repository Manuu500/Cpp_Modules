/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:17:48 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/18 17:14:14 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

using namespace std;


class Zombie {
	private:
		std::string name;
	public:
		Zombie* newZombie( std::string name );
	    void    setName(const std::string& firstName);
		std::string getName(void) const;
		void announce( void );
};

void randomChump( std::string name );

#endif