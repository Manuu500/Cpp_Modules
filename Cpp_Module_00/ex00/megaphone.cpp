/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:37:42 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/07 14:41:54 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }

    for(int i = 1; i < argc; i++)
    {
        std::string c = argv[i];
        for(size_t j = 0; j < c.length(); j++)
        {
            std::cout << (char)std::toupper(c[j]);
        }
    }
    std::cout << std::endl;
    return (0);
}