/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:55:38 by manujime          #+#    #+#             */
/*   Updated: 2023/08/26 23:49:07 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap first("R2D2");
    ClapTrap second("C3PO");

    first.attack("C3PO");
    second.takeDamage(first.getAttackDamage());
    second.attack("R2D2");
    first.takeDamage(second.getAttackDamage());
    first.beRepaired(2);
    second.beRepaired(2);
    first.attack("C3PO");
    second.takeDamage(first.getAttackDamage());
    second.attack("R2D2");
    second.takeDamage(first.getAttackDamage());
    second.beRepaired(42);

    return (0);
}