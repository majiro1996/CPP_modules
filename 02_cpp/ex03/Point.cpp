/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:48:50 by manujime          #+#    #+#             */
/*   Updated: 2023/08/16 19:52:57 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
    (Fixed) this->_x = 0;
    (Fixed) this->_y = 0;
    std::cout << "Point default constructor called" << std::endl;
}

Point::Point(float const x, float const y)
{
    (Fixed) this->_x = x;
    (Fixed) this->_y = y;
    std::cout << "Point constructor called" << std::endl;
}

Point::Point(Point const &source)
{
    std::cout << "Point copy constructor called" << std::endl;
    *this = source;
}

Point &Point::operator=(Point const &source)
{
    std::cout << "Point assignment operator called" << std::endl;
    if (this != &source)
    {
        (Fixed) this->_x = source._x;
        (Fixed) this->_y = source._y;
    }
    return (*this);
}

Point::~Point(void)
{
    std::cout << "Point destructor called" << std::endl;
}
