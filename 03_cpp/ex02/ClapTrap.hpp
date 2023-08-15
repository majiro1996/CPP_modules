/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:49:30 by manujime          #+#    #+#             */
/*   Updated: 2023/08/11 12:14:14 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define CLAP_HP 10
#define CLAP_EP 10
#define CLAP_AD 0

class ClapTrap
{
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &source);
        ~ClapTrap(void);

        ClapTrap &operator=(ClapTrap const &source);

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};
