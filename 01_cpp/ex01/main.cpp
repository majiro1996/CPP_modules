/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:38:12 by manujime          #+#    #+#             */
/*   Updated: 2023/08/07 13:09:44 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int getZombieNumber(void)
{
    int N;

    std::cout << "How many zombies do you want to create?" << std::endl;
    if (!(std::cin >> N))
    {
        if (std::cin.eof())
            exit(0);
        std::cout << "Invalid input. Try again." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return (getZombieNumber());
    }
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    return (N);
}

std::string getZombieName(void)
{
    std::string name;

    std::cout << "What name do you want to give them?" << std::endl;
    if (!(std::getline(std::cin, name)))
    {
        if (std::cin.eof())
            exit(0);
        std::cout << "Invalid input. Try again." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return (getZombieName());
    }
    return (name);
}

int main(void)
{
    Zombie	*horde;
    int		N;
    std::string	name;

    N = getZombieNumber();
    name = getZombieName();
    horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}
