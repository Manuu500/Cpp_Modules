/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 15:40:41 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/17 17:15:01 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>

class Fixed {
	private:
		static const int frac = 8;
		int		num;
	public:
		Fixed();
		Fixed(const Fixed& r);
		Fixed& operator=(const Fixed& r);
		~Fixed();
		Fixed(const int r);
		Fixed(const float f);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
