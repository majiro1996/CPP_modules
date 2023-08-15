/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:33:57 by manujime          #+#    #+#             */
/*   Updated: 2023/08/11 12:16:21 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = CLAP_HP;
    this->_energyPoints = CLAP_EP;
    this->_attackDamage = CLAP_AD;
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
        this->_name = source._name;
        this->_hitPoints = source._hitPoints;
        this->_energyPoints = source._energyPoints;
        this->_attackDamage = source._attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
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
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
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
    if (this->_hitPoints > 10)
        this->_hitPoints = 10;
    std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
}