/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:08:38 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/09/25 16:42:31 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucat.hpp"
#include "Form.hpp"
#include <iostream>

static void printSection(const std::string& title)
{
    std::cout << "\n=== " << title << " ===" << std::endl;
}

int main()
{
    try
    {
        printSection("Constructors");
        Bureaucat boss("Boss", 1);
        Bureaucat intern("Intern", 150);
        Bureaucat copy(boss);
        Bureaucat assigned;
        assigned = intern;

        std::cout << boss << std::endl;
        std::cout << intern << std::endl;
        std::cout << copy << std::endl;
        std::cout << assigned << std::endl;

        printSection("Constructor Exceptions");
        try
        {
            Bureaucat bad("Bad", 0);
            std::cout << bad << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cout << "Invalid Bureaucat: " << e.what() << std::endl;
        }

        try
        {
            Form badForm("Bad form", 0, 151);
            std::cout << badForm << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cout << "Invalid Form: " << e.what() << std::endl;
        }

        printSection("Grade Exceptions");
        
        try
        {
            boss.incrementGrade();
        }
        catch (const std::exception& e)
        {
            std::cout << "incrementGrade exception: " << e.what() << std::endl;
        }

        try
        {
            intern.decrementGrade();
        }
        catch (const std::exception& e)
        {
            std::cout << "decrementGrade exception: " << e.what() << std::endl;
        }

        printSection("Form Signing");
        Form easyForm("Contract", 150, 150);
        Form hardForm("Top secret", 1, 1);
        std::cout << easyForm << std::endl;
        std::cout << hardForm << std::endl;
        intern.signForm(easyForm);
        intern.signForm(hardForm);
        boss.signForm(hardForm);
        std::cout << easyForm << std::endl;
        std::cout << hardForm << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}