/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:47:14 by mruiz-ur          #+#    #+#             */
/*   Updated: 2026/03/17 13:02:38 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int _num;
		static const int frac = 8;
	public:
		Fixed(void);                     
		Fixed(const Fixed& r);           
		Fixed& operator=(const Fixed& r);
		~Fixed();            
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif