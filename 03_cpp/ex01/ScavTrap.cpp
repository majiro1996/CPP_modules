/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:54:39 by manujime          #+#    #+#             */
/*   Updated: 2023/08/26 19:43:55 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap")
{
    this->_name = "ScavTrap";
    this->_hitPoints = SCAV_HP;
    this->_energyPoints = SCAV_EP;
    this->_attackDamage = SCAV_AD;
    std::cout << "default ScavTrap created." << std::endl;
}

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

ScavTrap::ScavTrap(ScavTrap const &source) : ClapTrap(source)
{
    std::cout << "ScavTrap " << this->_name << " copied." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &source)
{
    this->_name = source.getName();
    this->_hitPoints = source.getHitPoints();
    this->_energyPoints = source.getEnergyPoints();
    this->_attackDamage = source.getAttackDamage();

    std::cout << "ScavTrap " << this->_name << " assigned." << std::endl;
    return (*this);
}

void    ScavTrap::guardGate(void)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
        return ;
    }
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
