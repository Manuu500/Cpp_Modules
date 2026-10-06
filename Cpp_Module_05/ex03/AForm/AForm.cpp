/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:24:39 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/01 11:30:23 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

AForm::AForm() : name("AForm"), grade_sign(0), grade_exec(0), is_signed(false) {
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string& name) : name(name), grade_sign(0), grade_exec(0), is_signed(false) {
	std::cout << "AForm name constructor called" << std::endl;
}

AForm::AForm(const std::string& name, int grade_sign, int grade_exec)
	: name(name), grade_sign(grade_sign), grade_exec(grade_exec), is_signed(false) {
	if (grade_sign < 1 || grade_exec < 1)
		throw AForm::GradeTooHighException();
	if (grade_sign > 150 || grade_exec > 150)
		throw AForm::GradeTooLowException();
	std::cout << "AForm full constructor called" << std::endl;
}

AForm::AForm(const AForm &other) : name(other.name), grade_sign(other.grade_sign), grade_exec(other.grade_exec), is_signed(other.is_signed) {
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other) {
	std::cout << "AForm copy assignment operator called" << std::endl;
	if (this != &other) {
		is_signed = other.is_signed;
	}
	return *this;
}

AForm::~AForm() {
	std::cout << "AForm destructor called" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

const std::string& AForm::getName() const
{
	return name;
}

bool AForm::getIsSigned() const
{
	return is_signed;
}

int AForm::getGradeSign() const
{
	return grade_sign;
}

int AForm::getGradeExec() const
{
	return grade_exec;
}

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > grade_sign)
		throw AForm::GradeTooLowException();
	is_signed = true;
}

void AForm::checkExecution(const Bureaucrat& executor) const
{
	if (!is_signed)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > grade_exec)
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, AForm const& b)
{
	os << b.getName() << ", signed " << (b.getIsSigned() ? "true" : "false")
	   << ", sign grade " << b.getGradeSign()
	   << ", exec grade " << b.getGradeExec();
	return os;
}