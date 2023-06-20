/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:10:01 by manujime          #+#    #+#             */
/*   Updated: 2023/06/20 13:14:39 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//constructor
phonebook::phonebook(void)
{
}

//destructor
phonebook::~phonebook(void)
{
}

void	phonebook::add(void)
{
	static int	i = 0;

	if (i < 8)
	{
		this->contacts[i].in();
		i++;
	}
	else
		i = 0;
}

void	phonebook::exit(void)
{
	std::cout << "Goodbye!" << std::endl;
}

//prints the list of contacts
//each contact is printed on a single line
//truncated to 10 characters
//if the contact's name is longer than 10 characters, it is truncated and a '.' is added
//if there are no contacts, it prints a message
void	phonebook::list(void)
{
	int i;

	i = 0;
	if (this->contacts[0].get_first_name() == "")
	{
		std::cout << "No contacts to display." << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < 8)
	{
		if (this->contacts[i].get_first_name() != "")
		{
			std::cout << "         " << i << "|";
			this->contacts[i].list();
		}
		i++;
	}
	this->search();
}

void	phonebook::search(void)
{
	int i;
	int index;

	i = 0;
	std::cout << "Please enter the index of the contact of your choice: ";
	std::cin >> index;
	if (!(index > 0 && index < 8))
	{
		std::cout << "Invalid index.\n";
		this->search();
		return ;
	}
	while (i < 8)
	{
		if (i == index)
		{
			this->contacts[i].out();
			return ;
		}
		i++;
	}
}

//this function prints the initial prompt for the user to enter a command
void    phonebook::init(void)
{
	std::cout << "Please enter a command:\n";
	std::cout << "ADD, SEARCH, EXIT\n";
}
