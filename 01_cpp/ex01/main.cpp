/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:38:12 by manujime          #+#    #+#             */
/*   Updated: 2023/06/26 10:58:37 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie	*horde;
    int		N;
    std::string	name;

    N = 5; 
    name = "Zombie";
    horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}
