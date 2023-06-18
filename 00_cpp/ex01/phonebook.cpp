/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:10:01 by manujime          #+#    #+#             */
/*   Updated: 2023/06/18 18:21:34 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//this function prints the initial prompt for the user to enter a command
void    phonebook::init(void)
{
	std::cout << "Welcome to the phonebook!\n";
	std::cout << "Please enter a command:\n";
	std::cout << "ADD, SEARCH, EXIT\n";
}
