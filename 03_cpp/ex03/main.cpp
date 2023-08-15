/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:55:38 by manujime          #+#    #+#             */
/*   Updated: 2023/08/11 13:34:21 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap    frag("Frag");

    frag.attack("target");
    frag.highFivesGuys();
    frag.takeDamage(10);
    frag.beRepaired(10);
    
    return (0);
}