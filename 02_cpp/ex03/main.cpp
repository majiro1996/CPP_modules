/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:46:01 by manujime          #+#    #+#             */
/*   Updated: 2023/08/24 18:27:32 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main(void) 
{
    Point a(0, 0);
    Point b(0, 5);
    Point c(5, 0);
    Point point(2, 2);
    Point point2(2, 50);

    if (bsp(a, b, c, point))
        std::cout << "Point is inside the triangle!!!!" << std::endl;
    else
        std::cout << "Point is outside the triangle!!!!" << std::endl;

    if (bsp(a, b, c, point2))
        std::cout << "Point is inside the triangle!!!!" << std::endl;
    else
        std::cout << "Point is outside the triangle!!!!" << std::endl;
}