/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:38:12 by manujime          #+#    #+#             */
/*   Updated: 2023/06/22 15:12:48 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie;

    zombie = newZombie("Mariano");
    zombie->announce();
    randomChump("Antonio");
    delete zombie;
    return (0);
}
