/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:47:19 by manujime          #+#    #+#             */
/*   Updated: 2023/06/22 15:08:27 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string	_name;
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
