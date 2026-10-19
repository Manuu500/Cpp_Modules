/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:07:57 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/19 15:15:12 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

class Span {
    private:

        unsigned int max_;
        std::vector<int> numberList_;
        Span();
    public:

        explicit Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int num);
        int  longestSpan();
        int  shortestSpan();
        
        class maxCapacityException : public std::exception {
            const char *what() const throw();
        };
        class noSpanFound : public std::exception {
            const char *what() const throw();
        };
};

#endif