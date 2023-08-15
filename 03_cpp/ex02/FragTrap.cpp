/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:54:39 by manujime          #+#    #+#             */
/*   Updated: 2023/08/11 13:30:51 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hitPoints = FRAG_HP;
    this->_energyPoints = FRAG_EP;
    this->_attackDamage = FRAG_AD;

    std::cout << "FragTrap " << this->_name << " created." << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " destroyed." << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " requests a high five!" << std::endl;
}

void    FragTrap::attack(std::string const & target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "FragTrap " << this->_name << " is out of energy!" << std::endl;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cout << "FragTrap " << this->_name << " is dead!" << std::endl;
        return ;
    }
    this->_energyPoints -= 1;
    std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " created." << std::endl;
}
