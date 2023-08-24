/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:45:55 by manujime          #+#    #+#             */
/*   Updated: 2023/08/24 18:42:35 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : value(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &source)
{
    //std::cout << "Copy constructor called" << std::endl;
    value = source.getRawBits();
}

// Destructor
Fixed::~Fixed(void)
{
    //std::cout << "Destructor called" << std::endl;
}

// Assignment operator
Fixed &Fixed::operator=(const Fixed &source)
{
    //std::cout << "copy assignment operator called" << std::endl;
    this->value = source.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

// Constructor from int
Fixed::Fixed(const int val)
{
    //std::cout << "Int constructor called" << std::endl;
    this->value = val << this->bits;
}

// Constructor from float
Fixed::Fixed(const float val)
{
    //std::cout << "Float constructor called" << std::endl;
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

// Comparison operators
bool Fixed::operator>(const Fixed &source) const
{
    return this->value > source.getRawBits();
}

bool Fixed::operator<(const Fixed &source) const
{
    return this->value < source.getRawBits();
}

bool Fixed::operator>=(const Fixed &source) const
{
    return this->value >= source.getRawBits();
}

bool Fixed::operator<=(const Fixed &source) const
{
    return this->value <= source.getRawBits();
}

bool Fixed::operator==(const Fixed &source) const
{
    return this->value == source.getRawBits();
}

bool Fixed::operator!=(const Fixed &source) const
{
    return this->value != source.getRawBits();
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &source) const
{
    return Fixed(this->toFloat() + source.toFloat());
}

Fixed Fixed::operator-(const Fixed &source) const
{
    return Fixed(this->toFloat() - source.toFloat());
}

Fixed Fixed::operator*(const Fixed &source) const
{
    return Fixed(this->toFloat() * source.toFloat());
}

Fixed Fixed::operator/(const Fixed &source) const
{
    return Fixed(this->toFloat() / source.toFloat());
}

// Increment operators
Fixed &Fixed::operator++(void) // prefix
{
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int) // postfix
{
    Fixed tmp(*this);
    
    this->value++;
    return tmp;
}

// Decrement operators
Fixed &Fixed::operator--(void)
{
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    this->value--;
    return tmp;
}

// Min and max functions
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a.getRawBits() < b.getRawBits() ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a.getRawBits() < b.getRawBits() ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}