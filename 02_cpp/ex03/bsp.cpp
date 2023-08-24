/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:49:00 by manujime          #+#    #+#             */
/*   Updated: 2023/08/24 18:20:21 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed absolute(Fixed const a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

//returns the area of a triangle
Fixed Area(Point const a, Point const b, Point const c)
{
	Fixed area;

	area = absolute((a.getX() * (b.getY() - c.getY())) +
		(b.getX() * (c.getY() - a.getY())) +
		(c.getX() * (a.getY() - b.getY())));

	return (area / 2);
}

bool		bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaA = Area(point, a, b);
	Fixed areaB = Area(point, b, c);
	Fixed areaC = Area(point, c, a);

	std::cout << point.getX() << " " << point.getY() << std::endl;


	if (areaA + areaB + areaC == Area(a, b, c))
		return (1);
	return (0);
}