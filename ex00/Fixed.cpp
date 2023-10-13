/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:33:30 by mneri             #+#    #+#             */
/*   Updated: 2023/10/03 14:43:20 by mneri            ###   ########.fr       */
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

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fix_num;
}

void Fixed::setRawBits( int const raw )
{
	fix_num = raw;
	std::cout << "setRawBits called" << std::endl;

}