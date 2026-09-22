/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 15:54:17 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/06/26 17:45:39 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal* w = new WrongCat();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongCat* c = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << w->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    w->makeSound();
    meta->makeSound();
    c->makeSound();
    delete(meta);
    delete(i);
    delete(j);
    delete(w);
    delete(c);
    
    return 0;
}