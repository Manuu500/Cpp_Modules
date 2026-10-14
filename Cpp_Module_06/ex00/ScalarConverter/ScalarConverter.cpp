/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:53:27 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/12 09:23:02 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    *this = other;
	std::cout << "ScalarConverter name constructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    std::cout << "ScalarConverter copy assignment operator called" << std::endl;
    if (this != &other)
        (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter(){
    std::cout << "ScalarConverter destructor called" << std::endl;
}

bool ScalarConverter::handle_pseudo_literals(std::string type)
{
    std::string charMsg = "char: impossible";
    std::string intMsg = "int: impossible";
    
    if (type == "nanf" || type == "nan")
    {
        std::cout << charMsg << std::endl << intMsg << std::endl;
        std::cout << "float: nanf" << std::endl << "double: nan" << std::endl;
        return (true);
    }
    else if (type == "-inff" || type == "-inf")
    {
        std::cout << charMsg << std::endl << intMsg << std::endl;
        std::cout << "float: -inff" << std::endl << "double: -inf" << std::endl;
        return (true);
    }
    else if (type == "inff" || type == "inf" || type == "+inff" || type == "+inf")
    {
        std::cout << charMsg << std::endl << intMsg << std::endl;
        std::cout << "float: inff" << std::endl << "double: inf" << std::endl;
        return (true);
    }
    return (false);
}

//-------------------CHECKING_FUNCTIONS-------------------//

bool ScalarConverter::is_char(std::string type)
{
    if (isalpha(type[0]) && type.length() == 1)
        return true;
    return false;
}

bool ScalarConverter::is_int(std::string type)
{
    size_t i;
    long int tmp;

    i = 0;
    if (type[0] == '-' || type[0] == '+')
        i = 1;
    while (type[i])
    {
        if (!std::isdigit(type[i]) || i > 10)
            return (false);
        i++;
    }
    tmp = std::atol(type.c_str());
    if (tmp <= std::numeric_limits<int>::max()
            && tmp >= std::numeric_limits<int>::min())
        return true;
    else
        return false;
}

bool ScalarConverter::is_float(std::string type)
{
    size_t i;
    size_t count;

    count = 0;
    i = 0;
    if (type[0] == '-' || type[0] == '+')
        i = 1;
    while (type[i])
    {
        if (!std::isdigit(type[i]))
        {
            if (type[i] == '.')
            {
                count++;
                if (count > 1 || std::isdigit(type[i + 1]) == '0'
                        || type[i + 1] == '\0')
                    return false;      
            }
            else if ((type[i] == 'F' || type[i] == 'f') && count == 1 && type[i + 1] == '\0')
                return (true);
            else
                return (false);
        }
        i++;
    }
    return (false);
}

bool ScalarConverter::is_double(std::string type)
{
    size_t i;
    size_t count;

    count = 0;
    i = 0;
    if (type[0] == '-' || type[0] == '+')
        i = 1;
    while (type[i])
    {
        if (!std::isdigit(type[i]))
        {
            if (type[i] == '.')
            {
                count++;
                if (count > 1 || std::isdigit(type[i + 1]) || type[i + 1] == '\0')
                    return false;
            }
            else if ((type[i] == 'D' || type[i] == 'd') && count == 1
                        && type[i + 1] == '\0')
                        return true;
            else
                return (false);
        }
        i++;
    }
    if (count == 1)
        return (true);
    else
        return (false);
}

//--------------------------------------------------------//


//---------------------SCALAR_FUNCTIONS-------------------//

void   ScalarConverter::literal_to_char(std::string type)
{
    char c;

    c = type[0];
    if (type.length() == 1)
    {
        std::cout << "char: " << "'" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;  
    }
}


void   ScalarConverter::literal_to_int(std::string type)
{
    long i;

    i = std::atoll(type.c_str());
    std::cout << "char: ";
    if ((i >= 0 && i < 32) || (i == 127))
        std::cout << "Non displayable" << std::endl;
    else if (i < 0 || i > 127)
        std::cout << "impossible" << std::endl;
    else
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    if (i <= std::numeric_limits<long>::max() && i >= std::numeric_limits<long>::min() &&  type.length() < 10)
        std::cout << "int: " << i << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    if (std::abs(i) <= std::numeric_limits<float>::max())
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
    else
        std::cout << "float: impossible" << std::endl;
    if (std::abs(i) <= std::numeric_limits<double>::max())
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
    else
        std::cout << "double: impossible" << std::endl;
    return ;
}

void    ScalarConverter::literal_to_double(std::string literal)
{
    double d;
    
    if (handle_pseudo_literals(literal) == true)
        return ;
    d = std::atof(literal.c_str());
    std::cout << "char: ";
    if ((d >= 0 && d < 32) || (d == 127))
        std::cout << "Non displayable" << std::endl;
    else if (d < 0 || d > 127)
        std::cout << "impossible" << std::endl;
    else 
        std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
    if (d <= std::numeric_limits<long>::max() && d >= std::numeric_limits<long>::min() &&  literal.length() < 10)
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    if (std::abs(d) <= std::numeric_limits<float>::max())
    {
        if (static_cast<float>(d) == static_cast<int>(d))
            std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    }
    else
        std::cout << "float: impossible" << std::endl;
    if (std::abs(d) <= std::numeric_limits<double>::max())
        std::cout << "double: " << static_cast<double>(d) << std::endl;
    else
        std::cout << "double: impossible" << std::endl;
    return ;
}

void    ScalarConverter::literal_to_float(std::string type)
{
    float f;

    if (handle_pseudo_literals(type) == true)
        return ;
    f = std::strtof(type.c_str(), NULL);
    std::cout << "char: ";
    if ((f >= 0 && f < 32) || (f == 127))
        std::cout << "Non displayable" << std::endl;
    else if (f < 0 || f > 127)
        std::cout << "impossible" << std::endl;
    else 
        std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
    if (f <= std::numeric_limits<long>::max() && f >= std::numeric_limits<long>::min() &&  type.length() < 10)
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    if (std::fabs(f) <= std::numeric_limits<float>::max())
    {
        if (static_cast<float>(f) == static_cast<int>(f))
            std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
    }
    else
        std::cout << "float: impossible" << std::endl;
    if (std::fabs(f) <= std::numeric_limits<double>::max())
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    else
        std::cout << "double: impossible" << std::endl;
    return ;
}

//--------------------------------------------------------//

void ScalarConverter::convert(const std::string& type)
{
    if (handle_pseudo_literals(type) == false)
    {
        if (is_char(type))
            literal_to_char(type);
        if (is_int(type))
            literal_to_int(type);
        if (is_double(type))
            literal_to_double(type);
        if (is_float(type))
            literal_to_float(type);   
    }
}