/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:33:30 by mneri             #+#    #+#             */
/*   Updated: 2023/10/19 15:43:29 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fix_num = 0;
	// std::cout << "Default constructor called" << std::endl;
}
		
Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;

}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if(this != &fixed)
	{
		this->fix_num = fixed.getRawBits();
	}
	// std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::Fixed(const int fixed)
{
	fix_num = fixed << Fixed::bits;
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float fixed)
{
	fix_num = (int)roundf(fixed * (1 << this->bits));
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->fix_num;
}

void Fixed::setRawBits( int const raw )
{
	this->fix_num = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / (float)(1 << Fixed::bits));
}

int Fixed::toInt( void ) const
{
	return this->fix_num >> Fixed::bits;
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

Fixed Fixed::operator+(const Fixed &other)
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator++()
{
	++this->fix_num;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed new_fix(*this);

	new_fix.fix_num = this->fix_num++;
	return new_fix;
}
	
Fixed Fixed::operator-(const Fixed &other)
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator--(int)
{
	Fixed new_fix(*this);

	new_fix.fix_num = this->fix_num--;
	return new_fix;
}

Fixed Fixed::operator--()
{
	--this->fix_num;
	return (*this);
}

Fixed Fixed::operator/(const Fixed &other)
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other)
{
	return Fixed(this->toFloat() * other.toFloat());
}


bool Fixed::operator>(const Fixed &other)
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other)
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other)
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other)
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other)
{
	return (this->getRawBits() == other.getRawBits());
}
bool Fixed::operator!=(const Fixed &other)
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed	&Fixed::min(Fixed &one, Fixed &two)
{
	if(one < two)
		return one;
	else
		return two;
}

Fixed	const &Fixed::min(Fixed const &one, Fixed const&two) 
{
	Fixed nonConstOne(one);  
    Fixed nonConstTwo(two);
	if(nonConstOne < nonConstTwo)
		return one;
	else
		return two;
}

Fixed	&Fixed::max(Fixed &one, Fixed &two)
{
	if(one > two)
		return one;
	else
		return two;
}

Fixed	const &Fixed::max(Fixed const &one, Fixed const &two) 
{
	Fixed nonConstOne(one);  
    Fixed nonConstTwo(two);
	if(nonConstOne > nonConstTwo)
		return one;
	else
		return two;
}
