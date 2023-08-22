/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:55:06 by manujime          #+#    #+#             */
/*   Updated: 2023/08/22 16:19:27 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materias[4];
		int			_count;

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &source);
		virtual ~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &source);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif