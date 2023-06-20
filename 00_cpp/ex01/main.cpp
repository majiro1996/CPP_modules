/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:18:44 by manujime          #+#    #+#             */
/*   Updated: 2023/06/20 13:14:36 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string ft_clean_spaces(std::string str)
{
	int first;
	int last;

	first = str.find_first_not_of(" \t\n\v\f\r");
	last = str.find_last_not_of(" \t\n\v\f\r");
	return (str.substr(first, (last - first + 1)));
}

int main(void)
{
	phonebook pb;
	std::string input;

	input = "";
	std::cout << "Welcome to the phonebook!\n";
	while (input.compare("EXIT") != 0)
	{
		pb.init();
		std::cin >> input;
		input = ft_clean_spaces(input);
		if (!input.compare("ADD"))
			pb.add();
		else if (!input.compare("SEARCH"))
			pb.list();
		else if (!input.compare("EXIT"))
		{
			pb.exit();
			return (0);
		}

		else
			std::cout << "Invalid command. Try again please\n";
	}
	return (0);
}