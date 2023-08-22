/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:28:45 by manujime          #+#    #+#             */
/*   Updated: 2023/08/22 16:28:13 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::AMateria(AMateria const &source)
{
	*this = source;
}

AMateria::~AMateria(void)
{
	
}

AMateria	&AMateria::operator=(AMateria const &source)
{
	if (this != &source)
	{
		this->_type = source._type;
	}
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void				AMateria::use(ICharacter &target)
{
	(void)target;
}
