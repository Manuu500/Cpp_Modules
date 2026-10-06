/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:08:38 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/06 09:22:08 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "Intern/Intern.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));

	Bureaucrat boss("Boss", 1);
	Intern someRandomIntern;
	AForm *form;

	form = someRandomIntern.makeForm("robotomy request", "Bender");
	if (form)
	{
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
	}

	form = someRandomIntern.makeForm("coffee request", "Bender");
	if (form)
		delete form;

	return 0;
}