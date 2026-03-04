/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:53:04 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/04 14:18:45 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <Harl.hpp>
using namespace std;

int main (void)
{
	Harl h;
	std::string level;
	std::cin >> level;
	
	h.complain(level);
	return 0;
}