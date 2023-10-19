/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:30:28 by mneri             #+#    #+#             */
/*   Updated: 2023/10/19 15:36:16 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main()
{
	Point a(0, 0);
	Point b(4 , 0);
	Point c(2, 3);
	Point point(1 , 1);
	bool check = bsp(a, b, c, point);
	if(check == true)
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;
}