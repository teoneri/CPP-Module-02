/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:13:57 by mneri             #+#    #+#             */
/*   Updated: 2023/10/13 14:05:29 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x_(Fixed(0)), y_(Fixed(0))
{
}

Point::Point(const float x, const float y) : x_(Fixed(x)), y_(Fixed(y))
{
}

Point::Point(const Point &point) : x_(point.x_), y_(point.y_)
{
}

Point &Point::operator=(const Point &point)
{
    if (this != &point)
    {
        Point temp(point);
        *this = temp;
    }
    return *this;
}

Fixed Point::getX() const
{
    return this->x_;
}

Fixed Point::getY() const
{
    return this->y_;
}

Point::~Point()
{
}

