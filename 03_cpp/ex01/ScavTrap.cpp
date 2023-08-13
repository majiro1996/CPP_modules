/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:54:39 by manujime          #+#    #+#             */
/*   Updated: 2023/08/11 12:17:42 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hitPoints = SCAV_HP;
    this->_energyPoints = SCAV_EP;
    this->_attackDamage = SCAV_AD;

    std::cout << "ScavTrap " << this->_name << " created." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_name << " destroyed." << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode." << std::endl;
}

void    ScavTrap::attack(std::string const & target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
        return ;
    }
    this->_energyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap " << this->_name << " created." << std::endl;
}
