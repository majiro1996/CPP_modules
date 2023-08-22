/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:56:37 by manujime          #+#    #+#             */
/*   Updated: 2023/08/22 16:31:12 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->_count = 0;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &source)
{
	*this = source;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &source)
{
	if (this != &source)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i])
				delete this->_materias[i];
			this->_materias[i] = source._materias[i]->clone();
		}
		this->_count = source._count;
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	if (this->_count < 4)
	{
		this->_materias[this->_count] = m;
		this->_count++;
	}
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	return (NULL);
}

