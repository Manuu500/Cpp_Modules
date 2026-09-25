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
#include "../Form/Form.hpp"
#include <iostream>

Bureaucat::Bureaucat() : name("Bureaucat"), grade(150) {
	std::cout << "Bureaucat default constructor called" << std::endl;
}

Bureaucat::Bureaucat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw Bureaucat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucat::GradeTooLowException();
    std::cout << "Bureaucat name/grade constructor called" << std::endl;
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

void Bureaucat::incrementGrade()
{
    if (this->grade - 1 < 1)
        throw Bureaucat::GradeTooHighException();
    --this->grade;
}

void Bureaucat::decrementGrade()
{
    if (this->grade + 1 > 150)
        throw Bureaucat::GradeTooLowException();
    ++this->grade;
}

void Bureaucat::signForm(Form& f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->name << " signed " << f.getName() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << this->name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, Bureaucat const& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << '.';
    return os;
}
