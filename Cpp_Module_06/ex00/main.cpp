/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:53:24 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/12 09:29:26 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    (void) argc;
	std::string user_input;

	if (argv[1] && !argv[2])
	{
		user_input = argv[1];
		ScalarConverter::convert(user_input); 	
	}
	else
		std::cout << "No aguments provided or too many arguments ..." << std::endl;
	return (0);
}