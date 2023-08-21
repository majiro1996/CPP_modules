/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:22:02 by manujime          #+#    #+#             */
/*   Updated: 2023/08/21 17:24:59 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
	protected:

	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &source);
		virtual ~AMateria(void);

		AMateria	&operator=(AMateria const &source);

		std::string const	&getType(void) const; //Returns the materia type
};
