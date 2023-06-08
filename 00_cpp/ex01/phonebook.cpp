/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:10:01 by manujime          #+#    #+#             */
/*   Updated: 2023/06/08 13:10:32 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    ft_command(std::string input)
{
    if (input == "ADD")
        std::cout << "ADD\n";
    else if (input == "SEARCH")
        std::cout << "SEARCH\n";
    else if (input == "EXIT")
        std::cout << "EXIT\n";
    else
        std::cout << "Invalid command.\n";
}

int main(void)
{
    std::string input;

    while (input != "EXIT")
    {
        std::cout << "Welcome to the phonebook!\n";
        std::cout << "Please enter a command:\n";
        std::cout << "ADD, SEARCH, EXIT\n";
        std::cin >> input;
        std::cout << "You entered: " << input << "\n";
        ft_command(input);
    }
    return (0);
}