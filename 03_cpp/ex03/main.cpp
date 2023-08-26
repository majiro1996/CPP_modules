/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:55:38 by manujime          #+#    #+#             */
/*   Updated: 2023/08/26 23:46:34 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"


int main(void)
{
    DiamondTrap diamondTrap("DiamondKing");
    DiamondTrap antiDiamondTrap("AntiDiamond");

    diamondTrap.attack("AntiDiamond");
    antiDiamondTrap.takeDamage(diamondTrap.getAttackDamage());
    antiDiamondTrap.beRepaired(10);
    antiDiamondTrap.guardGate();
    antiDiamondTrap.highFivesGuys();
    diamondTrap.whoAmI();

    return (0);
}