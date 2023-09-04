/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:03:52 by manujime          #+#    #+#             */
/*   Updated: 2023/09/04 09:03:11 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << std::endl;
	std::cout << "meta->getType(): " << meta->getType() << std::endl;
	std::cout << "j->getType(): " << j->getType() << std::endl;
	std::cout << "i->getType(): " << i->getType() << std::endl;
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal	*meta2 = new WrongAnimal();
	const WrongAnimal	*j2 = new WrongCat();
	const WrongCat		*i2 = new WrongCat();

	std::cout << std::endl;
	std::cout << "meta2->getType(): " << meta2->getType() << std::endl;
	std::cout << "j2->getType(): " << j2->getType() << std::endl;
	std::cout << "i2->getType(): " << i2->getType() << std::endl;
	std::cout << std::endl;
	j2->makeSound();
	meta2->makeSound();
	i2->makeSound();
	std::cout << std::endl;
	delete meta2;
	delete j2;
	delete i2;

	return (0);
}
