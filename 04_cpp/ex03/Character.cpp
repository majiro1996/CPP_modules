/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:18:48 by manujime          #+#    #+#             */
/*   Updated: 2023/09/04 08:48:54 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Default Character constructor called." << std::endl;
	this->_name = "Default";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(std::string const &name)
{
	std::cout << "Named Character constructor called." << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(Character const &source)
{
	std::cout << "Character copy constructor called." << std::endl;
	*this = source;
	return ;
}

Character::~Character(void)
{
	std::cout << _name;
	std::cout << " Character destructor called." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			unequip(i);
	}
	return ;
}

Character	&Character::operator=(Character const &source)
{
	std::cout << "Character assignment operator called." << std::endl;
	this->_name = source.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (source._inventory[i])
			this->_inventory[i] = source._inventory[i]->clone();
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i <= 4; i++)
	{
		if (i == 4)
		{
			std::cout << _name << "'s inventory is full." << std::endl;
			return ;
		}
		if (!this->_inventory[i])
		{
			std::cout << _name << " equips " << m->getType() << std::endl;
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << _name << ": not a valid slot." << std::endl;
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	if (!this->_inventory[idx])
	{
		std::cout << _name << idx << " is already empty." << std::endl;
		return ;
	}
	std::cout << _name << " unequips " << this->_inventory[idx]->getType() << std::endl;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << _name << ": not a valid slot." << std::endl;
		return ;
	}
	if (!this->_inventory[idx])
	{
		std::cout << "No materia in the " << idx << " slot." <<std::endl;
		return ;
	}
	std::cout << _name << " ";
	this->_inventory[idx]->use(target);
}

void	Character::printInventory(void) const
{
	std::cout << _name << "'s inventory:" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			std::cout << i << ": " << this->_inventory[i]->getType() << std::endl;
		else
			std::cout << i << ": empty" << std::endl;
	}
}

void	Character::setName(std::string const &name)
{
	std::cout << _name << " is now known as " << name << std::endl;
	this->_name = name;
}