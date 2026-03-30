/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:02:40 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:23:02 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int size = 10;
    Animal* zoo[size];

    for (int i = 0; i < size / 2; ++i)
        zoo[i] = new Dog();
    for (int i = size / 2; i < size; ++i)
        zoo[i] = new Cat();

    for (int i = 0; i < size; ++i)
        delete zoo[i];

    return 0;
}