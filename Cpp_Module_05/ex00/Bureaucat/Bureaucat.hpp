/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauBureaucat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:08:27 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/09/22 10:10:48 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCAT_HPP
# define BUREAUCAT_HPP

#include <string>
#include <exception>

class Bureaucat {
  
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

        Bureaucat();
        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade(int amount);
        void decrementGrade(int amount);
        Bureaucat(const std::string& name);
        Bureaucat(const Bureaucat& r);
        Bureaucat& operator=(const Bureaucat& r);
        ~Bureaucat();
};

std::ostream& operator<<(std::ostream& os, Bureaucat const& b);

#endif