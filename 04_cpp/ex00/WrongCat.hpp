/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:18:40 by manujime          #+#    #+#             */
/*   Updated: 2023/08/21 13:19:06 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &source);
		virtual ~WrongCat(void);

		WrongCat	&operator=(WrongCat const &source);

		void	makeSound(void) const;
};

#endif