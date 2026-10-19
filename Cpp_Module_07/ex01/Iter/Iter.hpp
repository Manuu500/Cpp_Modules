/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:55:03 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/17 20:09:42 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T, typename F>
void iter(T *arrayAddress, int arrayLength, void(*func)(F)) {
  for (int i = 0; i < arrayLength; i++)
    func(arrayAddress[i]);
}

#endif