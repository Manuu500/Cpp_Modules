/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:11:15 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:10:43 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain   *brain;
    public:
        Cat();
        Cat(const std::string& name);
        Cat(const Cat& r);
        Cat& operator=(const Cat& r);
        ~Cat();
        void makeSound() const;
};

#endif