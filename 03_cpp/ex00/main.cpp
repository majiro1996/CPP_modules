/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:55:38 by manujime          #+#    #+#             */
/*   Updated: 2023/08/10 20:56:32 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Claptrap");

    claptrap.attack("Randy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    return (0);
}