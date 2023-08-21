/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:00:54 by manujime          #+#    #+#             */
/*   Updated: 2023/08/21 13:02:13 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_H
# define CAT_H

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &source);
		~Cat(void);

		Cat		&operator=(Cat const &source);

		void	makeSound(void) const;
};

#endif