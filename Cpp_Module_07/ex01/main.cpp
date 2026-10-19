/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 19:55:42 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/17 20:09:10 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void ft_addOneChar(char c) { std::cout << c << std::endl; }

int main() {
  std::string str = "me llamo manuel";
  char *copy = (char *)str.c_str();
  ::iter<char>(&copy[0], str.size(),
               ft_addOneChar);
  return 0;
}