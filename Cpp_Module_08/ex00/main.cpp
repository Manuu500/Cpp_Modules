/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:28:16 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/18 17:36:03 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main() {
  std::vector<int> numbers;
  numbers.push_back(10);
  numbers.push_back(20);
  numbers.push_back(30);
  numbers.push_back(40);
  numbers.push_back(80);
  numbers.push_back(90);
  numbers.push_back(100);
  numbers.push_back(110);
  numbers.push_back(1000);
  numbers.push_back(2000);
  numbers.push_back(3);
  numbers.push_back(800);

  try {
    std::cout << "Searching for a value that exists:" << std::endl;
    easyfind(numbers, 110);
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << "Searching for a value that does not exist:" << std::endl;
    easyfind(numbers, 7000);
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}