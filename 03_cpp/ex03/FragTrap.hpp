/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:24:59 by manujime          #+#    #+#             */
/*   Updated: 2023/08/11 13:29:03 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

# define FRAG_HP 100
# define FRAG_EP 100
# define FRAG_AD 30

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        ~FragTrap(void);

        void    highFivesGuys(void);
        void    attack(std::string const & target);

};

#endif