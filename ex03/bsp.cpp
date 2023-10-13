/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:14:13 by mneri             #+#    #+#             */
/*   Updated: 2023/10/13 15:39:03 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed abs(Fixed ABS)
{
	if(ABS < 0)
		return ABS * -1;
	else
		return ABS;
}

Fixed area(Point const a, Point const b, Point const c)
{
   return abs((a.getX() * (b.getY() - c.getY()) + 
   			b.getX() * (c.getY() - a.getY())  +
			c.getX() * (a.getY() - b.getY())) / 2);
}
  

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = area(a, b, c);
	Fixed A1 = area(point, b, c);
	Fixed A2 = area(a, point, c);
	Fixed A3 = area(a, b, point);
	Fixed totArea = A1 + A2 + A3;
	if(A == totArea)
		return true;
	else
		return false;
}