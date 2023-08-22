/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:37:16 by manujime          #+#    #+#             */
/*   Updated: 2023/08/22 11:39:48 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	
}

Cure::Cure(Cure const &source)
{
	*this = source;
}

Cure::~Cure(void)
{
	
}

Cure	&Cure::operator=(Cure const &source)
{
	if (this != &source)
	{
		this->_type = source._type;
	}
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}