/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:55:38 by manujime          #+#    #+#             */
/*   Updated: 2023/08/26 23:48:23 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap    frag("Marvin");
    ScavTrap    scav("Bender");
    ClapTrap    clap("R2D2");

    frag.highFivesGuys();
    scav.guardGate();
    clap.attack("Marvin");
    frag.takeDamage(clap.getAttackDamage());
    frag.attack("Bender");
    scav.takeDamage(frag.getAttackDamage());
    scav.attack("R2D2");
    clap.takeDamage(scav.getAttackDamage());
    frag.highFivesGuys();
    scav.beRepaired(10);

    return (0);
}