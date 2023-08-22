/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:22:02 by manujime          #+#    #+#             */
/*   Updated: 2023/08/22 16:07:50 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &source);
		virtual ~AMateria(void);

		AMateria	&operator=(AMateria const &source);

		std::string const	&getType(void) const; //Returns the materia type
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif