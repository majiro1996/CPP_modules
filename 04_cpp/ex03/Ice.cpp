/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:40:13 by manujime          #+#    #+#             */
/*   Updated: 2023/08/22 11:44:17 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	
}

Ice::Ice(Ice const &source)
{
	*this = source;
}

Ice::~Ice(void)
{
	
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
