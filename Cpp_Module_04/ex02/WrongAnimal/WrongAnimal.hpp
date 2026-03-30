/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:44:31 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/27 16:50:52 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string& name);
        WrongAnimal(const WrongAnimal& r);
        WrongAnimal& operator=(const WrongAnimal& r);
        ~WrongAnimal();
        const std::string& getType() const;
        void makeSound() const; 
};

#endif