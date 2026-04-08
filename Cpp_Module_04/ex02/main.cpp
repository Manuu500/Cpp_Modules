/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:02:40 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/04/08 10:12:53 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int size = 10;
    Animal* zoo[size];

    //DOESNT WORK
    // Animal a;
    // Animal *a = new Animal();
    
    //WORKS
    // Animal* p = new Dog();
    // Animal* q = new Cat();
    // p->makeSound(); q->makeSound();
    // delete p; delete q;

    for (int i = 0; i < size / 2; ++i)
        zoo[i] = new Dog();
    for (int i = size / 2; i < size; ++i)
        zoo[i] = new Cat();
    for (int i = 0; i < size; ++i)
        delete zoo[i];

    return 0;
}