/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:37:47 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/19 15:50:06 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename C> MutantStack<T, C>::MutantStack() {
    std::cout << "MutantStack default constructor called!" << std::endl;
}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(const MutantStack<T, C> &other) {
    std::cout << "MutantStack copy constructor called!" << std::endl;
    *this = other;
}

template <typename T, typename C>
MutantStack<T, C> &MutantStack<T, C>::operator=(const MutantStack &other) {
    std::cout << "MutantStack copy assignment operator called!" << std::endl;
    if (this == &other)
        return (*this);
    std::stack<T, C>::operator=(other);
    return (*this);
}

template <typename T, typename C> MutantStack<T, C>::~MutantStack() {
    std::cout << "MutantStack destructor called!" << std::endl;
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin() {
    return this->c.begin();
}

template<typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::end() {
    return this->c.end();
}