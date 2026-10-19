/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:23:05 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/18 17:26:14 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <iostream>
# include <vector>

template <typename T> void easyfind(T container, int toBeFound);

class ValueNotFound : public std::exception {
  virtual const char *what() const throw();
};
#include "Easyfind.tpp"

#endif