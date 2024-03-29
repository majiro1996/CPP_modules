/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:39:41 by manujime          #+#    #+#             */
/*   Updated: 2023/08/31 19:42:59 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &source)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = source;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &source)
{
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = source._ideas[i];
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index > 99)
	{
		std::cout << "Invalid idea index" << std::endl;
		return ("");
	}

	return (this->_ideas[index]);
}

void		Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index > 99)
	{
		std::cout << "Invalid idea index" << std::endl;
		return ;
	}
	
	this->_ideas[index] = idea;
}
