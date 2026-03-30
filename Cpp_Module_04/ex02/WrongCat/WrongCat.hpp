/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:47:51 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/27 16:51:38 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    private:

    public:
        WrongCat();
        WrongCat(const std::string& name);
        WrongCat(const WrongCat& r);
        WrongCat& operator=(const WrongCat& r);
        ~WrongCat();
        void makeSound() const;
};

#endif