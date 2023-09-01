/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:40:13 by manujime          #+#    #+#             */
/*   Updated: 2023/09/01 03:07:43 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	
}

Ice::Ice(Ice const &source) : AMateria("ice")
{
	*this = source;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called." << std::endl;
}

Ice		&Ice::operator=(Ice const &source)
{
	if (this != &source)
	{
		this->_type = source._type;
	}
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
