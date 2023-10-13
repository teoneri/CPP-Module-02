/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:33:30 by mneri             #+#    #+#             */
/*   Updated: 2023/10/11 14:47:18 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fix_num = 0;
	std::cout << "Default constructor called" << std::endl;
}
		
Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;

}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if(this != &fixed)
	{
		this->fix_num = fixed.getRawBits();
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::Fixed(const int fixed)
{
	fix_num = fixed << Fixed::bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fixed)
{
	fix_num = (fixed * (1 << Fixed::bits));
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->fix_num;
}

void Fixed::setRawBits( int const raw )
{
	this->fix_num = raw;
	// std::cout << "setRawBits called" << std::endl;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fix_num / (float)(1 << Fixed::bits));
}

int Fixed::toInt( void ) const
{
	return (this->fix_num >> Fixed::bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}