/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:45:55 by manujime          #+#    #+#             */
/*   Updated: 2023/08/09 14:25:31 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &source)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = source;
}

// Destructor
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

// Assignment operator
Fixed &Fixed::operator=(const Fixed &source)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->value = source.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

// Constructor from int
Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = val << this->bits;
}

// Constructor from float
Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(val * (1 << this->bits));
}

// Convert to float
float Fixed::toFloat(void) const
{
    return (float)this->value / (float)(1 << this->bits);
}

// Convert to int
int Fixed::toInt(void) const
{
    return this->value >> this->bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &source)
{
    out << source.toFloat();
    return out;
}