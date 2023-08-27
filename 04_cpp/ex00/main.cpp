/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:03:52 by manujime          #+#    #+#             */
/*   Updated: 2023/08/27 16:29:08 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal	*regular = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << std::endl;
	std::cout << "regular->getType(): " << regular->getType() << std::endl;
	std::cout << "j->getType(): " << j->getType() << std::endl;
	std::cout << "i->getType(): " << i->getType() << std::endl;
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	regular->makeSound();
	std::cout << std::endl;
	
	delete regular;
	delete j;
	delete i;

	const WrongAnimal	*regular2 = new WrongAnimal();
	const WrongAnimal	*j2 = new WrongCat();

	std::cout << std::endl;
	std::cout << "regular2->getType(): " << regular2->getType() << std::endl;
	std::cout << "j2->getType(): " << j2->getType() << std::endl;
	std::cout << std::endl;
	j2->makeSound();
	regular2->makeSound();
	std::cout << std::endl;
	delete regular2;
	delete j2;
	
	return (0);
}
