/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 09:34:38 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/12 09:43:15 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
    std::cout << "Serializer constructor should not be called because it is private" << std::endl;
}

Serializer::Serializer(Serializer const &src)
{
    std::cout << "Serializer copy constructor should not be called because it is private" << std::endl;
    *this = src;
}

Serializer::~Serializer(void)
{
    std::cout << "Serializer destructor should not be called because constructor is private" << std::endl;
}

Serializer &Serializer::operator=(Serializer const &src)
{
    std::cout << "Serializer assignation operator should not be called because it is private" << std::endl;
    if (this != &src)
        (void)src;
    return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}
