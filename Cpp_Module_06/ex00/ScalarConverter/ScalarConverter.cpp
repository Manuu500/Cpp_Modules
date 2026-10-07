/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:53:27 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/07 13:41:30 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <cstdlib>

ScalarConverter::ScalarConverter(){
    std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    (void)other;
	std::cout << "ScalarConverter name constructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    std::cout << "ScalarConverter copy assignment operator called" << std::endl;
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter(){
    std::cout << "ScalarConverter destructor called" << std::endl;
}

void ScalarConverter::convert(const std::string& type)
{

    char value;

    if (type.length() == 1 && !std::isdigit(type[0]))
    {
        value = type[0];

        std::cout << "char: '" << value << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        std::cout << "float: " << std::fixed  << setprecision(1) << static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(value) << std::endl;
    }
    else if (type == "nan" || type == "+inf" || type == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;

        if (type == "nan")
        {
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
        }
        else
        {
            std::cout << "float: " << type << "f" << std::endl;
            std::cout << "double: " << type << std::endl;
        }
    }
    else if (type.length() > 1 && type[type.length() - 1] == 'f')
    {
        std::string number = type.substr(0, type.length() - 1);
        // Es un float
    }
    else if (type.find('.') != std::string npos)
    {
        // Es un double decimal
    }
    else
    {
        // Es un int decimal
    }
}