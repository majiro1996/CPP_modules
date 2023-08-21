/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:56:50 by manujime          #+#    #+#             */
/*   Updated: 2023/08/21 13:00:33 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &source)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = source;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog		&Dog::operator=(Dog const &source)
{
	std::cout << "Dog assignment operator called" << std::endl;
	_type = source.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}

