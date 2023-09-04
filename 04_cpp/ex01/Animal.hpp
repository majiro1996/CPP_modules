/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:44:37 by manujime          #+#    #+#             */
/*   Updated: 2023/09/04 09:11:03 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &source);
		virtual ~Animal(void);

		Animal			&operator=(Animal const &source);

		std::string		getType(void) const;
		void			setType(std::string type);

		virtual void	makeSound(void) const;
		
	protected:
		std::string	_type;
};

#endif