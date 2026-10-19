/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:10:55 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/19 15:08:52 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : max_(N) {
    std::cout << "Span constructor called" << std::endl;
}

Span::Span() : max_() {
    std::cout << "Default constructor called!" << std::endl;
}

Span::Span(const Span& other) {
    *this = other;
    std::cout << "Span name constructor called" << std::endl;
}

Span& Span::operator=(const Span& other) {
    std::cout << "Span copy assignment operator called" << std::endl;
    if (this != &other) {
        max_ = other.max_;
        numberList_ = other.numberList_;
    }
    return *this;
}

Span::~Span() {
    std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(int num)
{
    if (this->numberList_.size() + 1 > this->max_)
        throw maxCapacityException();
    this->numberList_.push_back(num);
}

int Span::longestSpan()
{
    if (this->numberList_.size() < 2)
        throw noSpanFound();

    std::vector<int>::iterator max_num;
    std::vector<int>::iterator min_num;

    max_num = std::max_element(this->numberList_.begin(), this->numberList_.end());
    min_num = std::min_element(this->numberList_.begin(), this->numberList_.end());
    return (abs(*max_num - *min_num));
}

int Span::shortestSpan()
{
    if (this->numberList_.size() < 2)
        throw noSpanFound();
    
    std::sort(this->numberList_.begin(), this->numberList_.end());
    std::vector<int>::iterator it = this->numberList_.begin();
    int diff = abs(*it - *(it + 1));
    
    while (it + 1 != this->numberList_.end())
    {
        if (abs(*it - *(it + 1)) < diff)
            diff = abs(*it - *(it + 1));
        it++;
    }
    return (diff);
}

const char *Span::maxCapacityException::what() const throw()
{
    return ("Span has reached its maximum capacity");
}

const char *Span::noSpanFound::what() const throw()
{
    return ("At least two numbers are required to find a span");
}