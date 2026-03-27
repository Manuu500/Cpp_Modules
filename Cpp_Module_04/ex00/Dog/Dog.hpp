/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:12:22 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/27 16:37:05 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal {
    private:

    public:
        Dog();
        Dog(const std::string& name);
        Dog(const Dog& r);
        Dog& operator=(const Dog& r);
        ~Dog();
        void makeSound() const;
};

#endif