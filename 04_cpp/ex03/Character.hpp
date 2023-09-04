/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:50:17 by manujime          #+#    #+#             */
/*   Updated: 2023/09/04 08:39:16 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
	protected:
		std::string		_name;

	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &source);
		virtual ~Character(void);

		Character	&operator=(Character const &source);

		AMateria		*_inventory[4];
		std::string const	&getName(void) const;
		void				setName(std::string const &name);
		void				printInventory(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif