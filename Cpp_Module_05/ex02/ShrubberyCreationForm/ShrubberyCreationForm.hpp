/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:49:02 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/09/28 10:27:34 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ShrubberyCreationForm : public AForm{
    private:
        
        std::string _target;
    public:

        ShrubberyCreationForm(std::string target);
}