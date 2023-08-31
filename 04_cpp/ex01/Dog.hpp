/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:54:45 by manujime          #+#    #+#             */
/*   Updated: 2023/08/31 19:45:04 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_H
# define DOG_H

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &source);
		~Dog(void);

		Dog		&operator=(Dog const &source);

		void	makeSound(void) const;
		Brain	*getBrain(void) const;
	
	private:
		Brain	*_brain;
};

#endif