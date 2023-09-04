/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:17:09 by manujime          #+#    #+#             */
/*   Updated: 2023/09/04 08:55:18 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
	AMateria		*cure = new Cure();
	AMateria		*ice = new Ice();

	MateriaSource	*src = new MateriaSource();
	src->learnMateria(cure);
	src->learnMateria(ice);
	src->learnMateria(cure);
	src->learnMateria(ice);
	src->printMaterias();

	delete cure;
	delete ice;

	Character		*me = new Character("me");
	Character		*bob = new Character("bob");

	
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));


	AMateria		*tmp = src->createMateria("cure");

	me->equip(tmp);
	delete tmp;

	me->printInventory();

	me->use(0, *bob);
	me->use(1, *bob);

	me-> unequip(4);
	tmp = me-> _inventory[3];
	me-> unequip(3);
	delete tmp;
	tmp = me-> _inventory[2];
	me-> unequip(2);
	delete tmp;

	me->printInventory();
	*bob = *me;
	
	bob->setName("Ron");
	bob->printInventory();
	
	AMateria *floor;

	floor = me->_inventory[0];
	me->unequip(0);
	delete floor;
	floor = me->_inventory[1];
	me->unequip(1);
	delete floor;
	
	floor = bob->_inventory[0];
	bob->unequip(0);
	delete floor;
	floor = bob->_inventory[1];
	bob->unequip(1);
	delete floor;
	bob->unequip(1);

	delete bob;
	delete me;
	delete src;

	return (0);
}