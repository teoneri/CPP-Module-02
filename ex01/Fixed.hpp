/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teo <teo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:33:37 by mneri             #+#    #+#             */
/*   Updated: 2023/10/18 14:25:20 by teo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fix_num;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		Fixed( int fixed);
		Fixed( float frac);
		~Fixed(void);

		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		int getRawBits(void) const;
		void setRawBits( int const raw );
};
std::ostream &operator<<(std::ostream &out, Fixed const &value);
