/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 08:39:43 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/06 09:30:09 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>

class AForm;

class Intern {
    private:
        static AForm *createShrubbery(const std::string &target);
        static AForm *createRobotomy(const std::string &target);
        static AForm *createPresidential(const std::string &target);
            
    public:
        Intern();
        explicit Intern(const std::string& target);
        Intern(const Intern& r);
        Intern& operator=(const Intern& r);
        ~Intern();
        AForm *makeForm(const std::string &formName, const std::string &target) const;
};

#endif