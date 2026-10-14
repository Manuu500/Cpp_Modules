/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 09:34:45 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/10/12 09:41:42 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

typedef struct data {
    std::string s1;
    std::string s2;
    int n;
} Data;

class Serializer {
    private:
        Serializer(void);
        Serializer(Serializer const &src);
    public:
        ~Serializer(void);
        Serializer &operator=(Serializer const &src);
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
}

#endif