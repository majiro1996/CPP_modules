/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:56:37 by manujime          #+#    #+#             */
/*   Updated: 2023/08/22 14:04:29 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->_count = 0;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &source)
{
	*this = source;
	return ;
}

