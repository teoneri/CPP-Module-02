/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:13:46 by mneri             #+#    #+#             */
/*   Updated: 2023/10/13 14:05:43 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

class Point
{
	private:
		Fixed const x_;
		Fixed const y_;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &point);
		Point &operator=(const Point &point);
		~Point();
		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);