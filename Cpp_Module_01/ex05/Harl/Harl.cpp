/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:53:42 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:58:27 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <Harl.hpp>

void	Harl::debug(void)
{
	std::cout << "DEBUG: se ha llamado a la función debug" << std::endl; 
}

void	Harl::info(void)
{
	std::cout << "INFO: se ha llamado a la función info" << std::endl; 
}

void	Harl::warning(void)
{
	std::cout << "WARNING: se ha llamado a la función warning" << std::endl; 	
}

void	Harl::error(void)
{
	std::cout << "ERROR: se ha llamado a la función error" << std::endl; 		
}
/*
int	uwu(int a, int b)

void call(X)
(int)nombre(int, int)
(type que devuelte) normbre de variable(tipo de entrada, ...)

Funciones void
Void
Void
(void) fjdkls(void)
*/

void Harl::complain(std::string level)
{	
	std::string levels[4] = {"INFO", "DEBUG", "WARNING", "ERROR"};
	void (Harl::*funcs[4])(void) = {&Harl::info, &Harl::debug, &Harl::warning, &Harl::error};
	for(int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			return ;
		}
	}
}
