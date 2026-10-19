/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:37:45 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/19 15:49:12 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C> {

    public:
    
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack &operator=(const MutantStack &other);
        ~MutantStack();

        typedef typename C::iterator iterator;
        iterator begin();
        iterator end();
};

# include "MutantStack.tpp"

#endif