/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:12:35 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/18 17:04:00 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <class T> class Array {
    private:
        T *array;
        unsigned int array_size;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        ~Array();
        unsigned int size() const;
        T &operator[](unsigned int i);
        const T &operator[](unsigned int i) const;
        class OutOfRange : public std::exception {
            const char *what() const throw();
        };
};

# include "Array.tpp"

#endif