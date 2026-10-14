/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:53:29 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/12 09:21:22 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP 

# include <iostream> 
# include <string> 
# include <iomanip>
# include <cstdlib>
# include <climits> 
# include <cfloat> 
# include <cmath>
# include <limits> 

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
    public:
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();
        static void convert(const std::string& type);
        static bool is_char(std::string type);
        static bool is_float(std::string type);
        static bool is_double(std::string type);
        static bool is_int(std::string type);
        static void literal_to_char(std::string type);
        static void literal_to_int(std::string type);
        static void literal_to_float(std::string type);
        static void literal_to_double(std::string type);
        static bool	handle_pseudo_literals(std::string type);
};

#endif