/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:19:13 by manujime          #+#    #+#             */
/*   Updated: 2023/08/21 13:21:05 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const &source)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = source;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &source)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	this->setType(source.getType());
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Neeeooowww!!..." << std::endl;
}