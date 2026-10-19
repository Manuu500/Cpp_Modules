/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:06:23 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/19 15:18:26 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int *generateRandomNumbers(int n)
{
    int *num = new int[n];    
    for (int i = 0; i < n; i++)
    {
        num[i] = std::rand() % 10000 + 1;
    }
    return num;                   
}


int main()
{
    int n = 10000;
    int *nums = generateRandomNumbers(n);
    Span sp = Span(n);


    for (int i = 0; i < n; i++)
    {
        sp.addNumber(nums[i]);
        std::cout << nums[i] << '\n';
    }
    
    std::cout << "Shortest number: " << sp.shortestSpan() << std::endl;
    std::cout << "Largest number: " << sp.longestSpan() << std::endl;
    delete[] nums;
    nums = 0;  
    return 0;
}

// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }