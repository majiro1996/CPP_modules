/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:24:59 by manujime          #+#    #+#             */
/*   Updated: 2023/08/11 12:13:33 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

# define SCAV_HP 100
# define SCAV_EP 50
# define SCAV_AD 20

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ~ScavTrap(void);

        void    guardGate(void);
        void    attack(std::string const & target);

};

#endif