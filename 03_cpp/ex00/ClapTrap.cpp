/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:33:57 by manujime          #+#    #+#             */
/*   Updated: 2023/08/26 14:02:19 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _hitPoints(CLAP_HP), _energyPoints(CLAP_EP), _attackDamage(CLAP_AD)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(CLAP_HP), _energyPoints(CLAP_EP), _attackDamage(CLAP_AD)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &source)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = source;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &source)
{
    std::cout << "ClapTrap assignment operator called" << std::endl;
    if (this != &source)
    {
        this->_name = source.getName();
        this->_hitPoints = source.getHitPoints();
        this->_energyPoints = source.getEnergyPoints();
        this->_attackDamage = source.getAttackDamage();
    }
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
        return ;
    } 
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return ;
    }
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
        return ;
    }
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    if (this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " has been killed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
        return ;
    }
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return ;
    }
    this->_energyPoints -= 1;
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}