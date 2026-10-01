/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:18:30 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/01 11:29:10 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "../AForm/AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        explicit PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& r);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& r);
        ~PresidentialPardonForm();

        virtual void execute(Bureaucrat const & executor) const;
};

#endif