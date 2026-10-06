/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:24:37 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/06 09:22:55 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iosfwd>
# include <string>
# include <exception>

class Bureaucrat;

class AForm {
    private:

        const std::string name;
        const int grade_sign;
        const int grade_exec;
        bool is_signed;
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

        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        AForm();
        AForm(const std::string& name);
        AForm(const std::string& name, int grade_sign, int grade_exec);
        AForm(const AForm& r);
        AForm& operator=(const AForm& r);
        virtual ~AForm();
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;
        void beSigned(const Bureaucrat& b);
        void checkExecution(const Bureaucrat& executor) const;
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, AForm const& b);


#endif