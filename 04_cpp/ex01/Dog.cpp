/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:56:50 by manujime          #+#    #+#             */
/*   Updated: 2023/08/31 23:48:53 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	_brain = new Brain();
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &source) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = source;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog		&Dog::operator=(Dog const &source)
{
	std::cout << "Dog assignment operator called" << std::endl;
	_type = source.getType();
	if (_brain != NULL)
		delete _brain;
	_brain = new Brain(*source._brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}