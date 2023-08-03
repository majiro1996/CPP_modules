/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:17:30 by manujime          #+#    #+#             */
/*   Updated: 2023/08/03 12:41:08 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde;
	std::stringstream ss;
	int		i;

	i = 0;
	horde = new Zombie[N];
	while (i < N)
	{
		ss << name << i;
		horde[i].setName(ss.str());
		ss.str("");
		i++;
	}
	return (horde);
}
