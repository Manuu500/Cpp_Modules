/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:19:50 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/02/18 17:42:32 by mruiz-ur         ###   ########.fr       */
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
	    void    setName(const std::string& firstName);
		std::string getName(void) const;
		void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
void    free_zombie(Zombie *z);

#endif