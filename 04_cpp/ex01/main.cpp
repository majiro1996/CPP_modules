/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:03:52 by manujime          #+#    #+#             */
/*   Updated: 2023/09/01 00:02:20 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


void catBrain()
{
	Cat *snowball = new Cat();

	snowball->getBrain()->setIdea(0, "I need to get some food");
	snowball->getBrain()->setIdea(1, "Maybe italian?");
	snowball->getBrain()->setIdea(2, "I'm not sure");
	std::cout << "snowball idea : " << snowball->getBrain()->getIdea(0) << std::endl;
	std::cout << "snowball idea : " << snowball->getBrain()->getIdea(1) << std::endl;
	std::cout << "snowball idea : " << snowball->getBrain()->getIdea(2) << std::endl;
	std::cout << std::endl;
	Cat *snowball2 = new Cat();
	snowball2->getBrain()->setIdea(0, "I'm not hungry at all");
	snowball2->getBrain()->setIdea(1, "definitely not for italian");
	snowball2->getBrain()->setIdea(2, "I'm sure");
	std::cout << "snowball2 idea : " << snowball2->getBrain()->getIdea(0) << std::endl;
	std::cout << "snowball2 idea : " << snowball2->getBrain()->getIdea(1) << std::endl;
	std::cout << "snowball2 idea : " << snowball2->getBrain()->getIdea(2) << std::endl;
	std::cout << std::endl;
	*snowball2 = *snowball;

	delete snowball;
	
	std::cout << "snowball2 idea : " << snowball2->getBrain()->getIdea(0) << std::endl;
	std::cout << "snowball2 idea : " << snowball2->getBrain()->getIdea(1) << std::endl;
	std::cout << "snowball2 idea : " << snowball2->getBrain()->getIdea(2) << std::endl;

	delete snowball2;

	std::cout << "Cat brain test done" << std::endl;
	std::cout << std::endl;
}

void dogBrain()
{
	Dog *firulais = new Dog();

	firulais->getBrain()->setIdea(0, "I need to get some food");
	firulais->getBrain()->setIdea(1, "Maybe italian?");
	firulais->getBrain()->setIdea(2, "I'm not sure");
	std::cout << "firulais idea : " << firulais->getBrain()->getIdea(0) << std::endl;
	std::cout << "firulais idea : " << firulais->getBrain()->getIdea(1) << std::endl;
	std::cout << "firulais idea : " << firulais->getBrain()->getIdea(2) << std::endl;
	std::cout << std::endl;
	Dog *firulais2 = new Dog();
	firulais2->getBrain()->setIdea(0, "I'm not hungry at all");
	firulais2->getBrain()->setIdea(1, "definitely not for italian");
	firulais2->getBrain()->setIdea(2, "I'm sure");
	std::cout << "firulais2 idea : " << firulais2->getBrain()->getIdea(0) << std::endl;
	std::cout << "firulais2 idea : " << firulais2->getBrain()->getIdea(1) << std::endl;
	std::cout << "firulais2 idea : " << firulais2->getBrain()->getIdea(2) << std::endl;
	std::cout << std::endl;
	*firulais2 = *firulais;

	delete firulais;

	std::cout << "firulais2 idea : " << firulais2->getBrain()->getIdea(0) << std::endl;
	std::cout << "firulais2 idea : " << firulais2->getBrain()->getIdea(1) << std::endl;
	std::cout << "firulais2 idea : " << firulais2->getBrain()->getIdea(2) << std::endl;

	delete firulais2;

	std::cout << "Dog brain test done" << std::endl;
	std::cout << std::endl;
}

void arrayTest()
{
	Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << i << std::endl;
	}
	
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
		std::cout << i << std::endl;
	}

	std::cout << "Array test done" << std::endl;
	std::cout << std::endl;
}

int		main(void)
{
	arrayTest();
	catBrain();
	dogBrain();

	return (0);
}
