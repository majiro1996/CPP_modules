/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:48:50 by manujime          #+#    #+#             */
/*   Updated: 2023/08/24 18:23:27 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
    (Fixed) this->_x = 0;
    (Fixed) this->_y = 0;
    //std::cout << "Point default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
    //std::cout << "Point constructor called" << std::endl;
}

Point::Point(Point const &source): _x(source.getX()), _y(source.getY())
{
    //std::cout << "Point copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &source)
{
    //std::cout << "Point assignment operator called" << std::endl;
    if (this != &source)
    {
        (Fixed) _x = source.getX();
        (Fixed) _y = source.getY();
    }
    return (*this);
}

Point::~Point(void)
{
    //std::cout << "Point destructor called" << std::endl;
}

Fixed Point::getX(void) const
{
    return (this->_x);
}

Fixed Point::getY(void) const
{
    return (this->_y);
}