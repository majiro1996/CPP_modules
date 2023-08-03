/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:47:19 by manujime          #+#    #+#             */
/*   Updated: 2023/06/26 10:55:46 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <sstream>

class Zombie
{
    private:
        std::string	name;
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void	announce(void);
        void    setName(std::string name);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name);

#endif
