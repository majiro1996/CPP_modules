/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:55:38 by manujime          #+#    #+#             */
/*   Updated: 2023/08/26 23:48:41 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    scav("MA-42");
    ScavTrap    scav2("RO-24");
    ScavTrap    scav3("UwU-9000");

    scav.attack("RO-24");
    scav2.takeDamage(scav.getAttackDamage());
    scav2.beRepaired(10);
    scav2.guardGate();
    scav2 = scav3;
    scav2.guardGate();
    return (0);
}