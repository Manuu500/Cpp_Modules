/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:08:27 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/01 11:28:03 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iosfwd>
#include <string>
#include <exception>

class AForm;

class Bureaucrat {

    private:
        const std::string name;
        int grade;
    public:

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        Bureaucrat(const std::string& name);
        Bureaucrat(const Bureaucrat& r);
        Bureaucrat& operator=(const Bureaucrat& r);
        ~Bureaucrat();
        void signForm(AForm& f);
        void executeForm(AForm const & form) const;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& b);

#endif
