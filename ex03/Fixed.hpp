/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:33:37 by mneri             #+#    #+#             */
/*   Updated: 2023/10/10 16:22:15 by mneri            ###   ########.fr       */
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
		Fixed(const int fixed);
		Fixed(const float frac);
		~Fixed(void);


		Fixed &operator=(const Fixed &fixed);
		Fixed operator+(const Fixed &other);
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator-(const Fixed &other);
		Fixed operator--();
		Fixed operator--(int);
		Fixed operator/(const Fixed &other);
		Fixed operator*(const Fixed &other);
		bool operator>(const Fixed &other);
		bool operator>=(const Fixed &other);
		bool operator<(const Fixed &other);
		bool operator<=(const Fixed &other);
		bool operator==(const Fixed &other);
		bool operator!=(const Fixed &other);
		
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		static Fixed	&min(Fixed &one, Fixed	&two);
		static Fixed	&max(Fixed &one, Fixed	&two);
		static Fixed	const &min(Fixed const &one, Fixed const &two);
		static Fixed	const &max(Fixed const &one, Fixed const &two);

		
		int getRawBits(void) const;
		void setRawBits( int const raw );
};
std::ostream &operator<<(std::ostream &out, Fixed const &value);
