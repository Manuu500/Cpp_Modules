/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 09:05:06 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/30 09:10:04 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
};

#endif