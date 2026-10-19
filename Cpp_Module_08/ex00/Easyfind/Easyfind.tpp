/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:23:07 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/18 17:28:01 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

template <typename T> void easyfind(T container, int toBeFound) {
    
  typename T::iterator it;
  
  it = std::find(container.begin(), container.end(), toBeFound);
  if (it == container.end())
    throw ValueNotFound();
  std::cout << "Found the value> " << toBeFound << " in the position > "
            << std::distance(container.begin(), it) << std::endl;
}

const char *ValueNotFound::what() const throw() {
  return "Exception: The value was not found in the container";
}