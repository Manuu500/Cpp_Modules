/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:25:17 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/14 10:35:29 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

    template <typename T> 
    void swap(T &a, T &b)
    {
        T tmp = a;
        a = b;
        b = tmp;
    };

    template <typename T>
    T min(T &a, T &b)
    {
        return (a < b ? a : b); 
    };

    template <typename T>
    T max(T &a, T &b)
    {
        return (a > b ? a : b); 
    };

#endif