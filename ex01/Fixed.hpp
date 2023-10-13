/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:33:37 by mneri             #+#    #+#             */
/*   Updated: 2023/10/10 15:25:29 by mneri            ###   ########.fr       */
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
		Fixed(const int fixed);
		Fixed(const float frac);
		~Fixed(void);

		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		int getRawBits(void) const;
		void setRawBits( int const raw );
};
std::ostream &operator<<(std::ostream &out, Fixed const &value);
