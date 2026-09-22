/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauBureaucat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:08:32 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/09/22 10:15:42 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucat.hpp"
#include <iostream>

Bureaucat::Bureaucat() : name("Bureaucat"), grade(150) {
	std::cout << "Bureaucat default constructor called" << std::endl;
}

Bureaucat::Bureaucat(const std::string& name) : name(name), grade(150) {
	std::cout << "Bureaucat name constructor called" << std::endl;
}

Bureaucat::Bureaucat(const Bureaucat &other) : name(other.name), grade(other.grade) {
	std::cout << "Bureaucat copy constructor called" << std::endl;
}

Bureaucat &Bureaucat::operator=(const Bureaucat &other) {
	std::cout << "Bureaucat copy assignment operator called" << std::endl;
	if (this != &other) {
		grade = other.grade;
	}
	return *this;
}

Bureaucat::~Bureaucat() {
	std::cout << "Bureaucat destructor called" << std::endl;
}

const char* Bureaucat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Bureaucat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const std::string& Bureaucat::getName() const
{
    return name;
}

int Bureaucat::getGrade() const
{
    return grade;
}

void Bureaucat::incrementGrade(int amount)
{
    if (this->grade - amount < 1)
        throw Bureaucat::GradeTooHighException();
    this->grade = this->grade - amount;
}

void Bureaucat::decrementGrade(int amount)
{
    if (this->grade + amount > 150)
        throw Bureaucat::GradeTooLowException();
    this->grade = this->grade + amount;
}
