/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:21:32 by manujime          #+#    #+#             */
/*   Updated: 2023/08/26 23:43:19 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap(void);
        DiamondTrap(DiamondTrap const &source);
        DiamondTrap(std::string name);
        ~DiamondTrap(void);

        DiamondTrap &operator=(DiamondTrap const &source);

        void    whoAmI(void);

        using   ScavTrap::attack;
    private:
        //std::string _name;
};

#endif