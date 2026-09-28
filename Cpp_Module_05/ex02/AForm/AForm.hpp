/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:24:37 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/09/28 09:43:26 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iosfwd>
# include "../Bureaucat/Bureaucat.hpp"

class Form {
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
        
        Form();
        Form(const std::string& name);
        Form(const std::string& name, int grade_sign, int grade_exec);
        Form(const Form& r);
        Form& operator=(const Form& r);
        ~Form();
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;
        void beSigned(const Bureaucat& b);
        virtual void abstract() = 0;
};

std::ostream& operator<<(std::ostream& os, Form const& b);


#endif