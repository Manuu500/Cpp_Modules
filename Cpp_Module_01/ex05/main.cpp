/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:53:04 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/08 09:52:13 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <Harl.hpp>

int main (void)
{
	Harl h;
	std::string level;
	std ::cout << "Elige entre las siguientes opciones: INFO, DEBUG, WARNING, ERROR" << std::endl;
	std::cin >> level;
	
	h.complain(level);
	return 0;
}