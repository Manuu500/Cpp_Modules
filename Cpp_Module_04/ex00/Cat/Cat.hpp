/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:11:15 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/27 16:37:05 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    private:

    public:
        Cat();
        Cat(const std::string& name);
        Cat(const Cat& r);
        Cat& operator=(const Cat& r);
        ~Cat();
        void makeSound() const;
};

#endif