/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:24:39 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/09/25 16:46:45 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

Form::Form() : name("Form"), grade_sign(0), grade_exec(0), is_signed(0) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string& name) : name(name), grade_sign(0), grade_exec(0), is_signed(0) {
	std::cout << "Form name constructor called" << std::endl;
}

Form::Form(const std::string& name, int grade_sign, int grade_exec)
	: name(name), grade_sign(grade_sign), grade_exec(grade_exec), is_signed(0) {
	if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form full constructor called" << std::endl;
}

Form::Form(const Form &other) : name(other.name), grade_sign(other.grade_sign), grade_exec(other.grade_exec), is_signed(other.is_signed) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &other) {
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &other) {
		is_signed = other.is_signed;
	}
	return *this;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const std::string& Form::getName() const
{
    return name;
}

bool Form::getIsSigned() const
{
	return is_signed;
}

int Form::getGradeSign() const
{
	return grade_sign;
}

int Form::getGradeExec() const
{
	return grade_exec;
}

void Form::beSigned(const Bureaucat& b)
{
    if (b.getGrade() > grade_sign)
        throw Form::GradeTooLowException();
    is_signed = true;
}

std::ostream& operator<<(std::ostream& os, Form const& b)
{
	os << b.getName() << ", signed " << (b.getIsSigned() ? "true" : "false")
	   << ", sign grade " << b.getGradeSign()
	   << ", exec grade " << b.getGradeExec();
	return os;
}