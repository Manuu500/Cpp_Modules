/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:05:09 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:12:45 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
}

Brain::Brain(const Brain& other) {
	*this = other;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 99; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
}

