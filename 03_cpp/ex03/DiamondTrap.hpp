/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:21:32 by manujime          #+#    #+#             */
/*   Updated: 2023/08/14 16:30:10 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap(DiamondTrap const &source); // copy constructor
        DiamondTrap(std::string name); // constructor
        ~DiamondTrap(void); // destructor

        void    whoAmI(void); 
        using   ScavTrap::attack; // using ScavTrap's attack method
    
    private:
        std::string _name;
};

#endif