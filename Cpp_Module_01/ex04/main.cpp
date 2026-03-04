/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:15:16 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/03 13:30:33 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

int main (int argc, char **argv)
{
	if (argc != 4)
		return 0;
	std::string line;
	std::ifstream file(argv[1]);
	std::ofstream file_replace;
	file_replace.open((std::string(argv[1]) + std::string(".replace")).c_str());
	size_t	word_pos;
	int arg1_count = strlen(argv[2]);
	// int	arg2_count = strlen(argv[3]);
	
	if (file.is_open())
	{
		while (std::getline(file,line))
		{
			word_pos = line.find(argv[2]);
			if (word_pos != std::string::npos)
			{
				line.replace(word_pos, arg1_count, argv[3]);
				file_replace << line << std::endl;	
			}
			else
			{
				file_replace << line << std::endl;
			}	
		}
	}
	else
		std::cout << "No se pudo abrir la linea" << std::endl;
	file.close();
	file_replace.close();
}