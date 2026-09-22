/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:08:38 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/09/22 11:29:16 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucat a;
        Bureaucat b("Alice");
        Bureaucat c(b);
        Bureaucat d;

        d = b;

        std::cout << a.getName() << ", grade " << a.getGrade() << std::endl;
        std::cout << b.getName() << ", grade " << b.getGrade() << std::endl;
        std::cout << c.getName() << ", grade " << c.getGrade() << std::endl;
        std::cout << d.getName() << ", grade " << d.getGrade() << std::endl;

        std::cout << "\ndecrementGrade:\n";
        a.decrementGrade(200);
        std::cout << a.getName() << ", grade " << a.getGrade() << std::endl;

        std::cout << "\nincrementGrade:\n";
        b.incrementGrade(200);
        std::cout << a.getName() << ", grade " << a.getGrade() << std::endl;

    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}