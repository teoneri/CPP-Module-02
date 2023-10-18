/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teo <teo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:30:28 by mneri             #+#    #+#             */
/*   Updated: 2023/10/18 14:35:10 by teo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main()
{
	Point a(0, 0);
	Point b(10 , 30);
	Point c(20, 0);
	Point point(10 , 15);
	bool check = bsp(a, b, c, point);
	if(check == true)
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;
}