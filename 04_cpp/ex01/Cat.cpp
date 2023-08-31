/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:02:27 by manujime          #+#    #+#             */
/*   Updated: 2023/08/31 23:56:04 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	_brain = new Brain();
	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &source) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = source;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat		&Cat::operator=(Cat const &source)
{
	if (this == &source)
		return (*this);
	std::cout << "Cat assignment operator called" << std::endl;
	_type = source.getType();
	if (_brain != NULL)
		delete _brain;
	_brain = new Brain(*source._brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}
