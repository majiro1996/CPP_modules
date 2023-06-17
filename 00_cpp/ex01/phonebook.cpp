/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:10:01 by manujime          #+#    #+#             */
/*   Updated: 2023/06/17 19:04:20 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


//this function of the contact class pompts the user to enter the contact's
//information, and stores it in the class' private variables
void    contact::add(void)
{
	std::cout << "Please enter the following information:\n";
	std::cout << "First name: ";
	std::cin >> this->first_name;
	std::cout << "Last name: ";
	std::cin >> this->last_name;
	std::cout << "Nickname: ";
	std::cin >> this->nickname;
	std::cout << "Postal address: ";
	std::cin >> this->postal_address;
	std::cout << "Email address: ";
	std::cin >> this->email_address;
	std::cout << "Phone number: ";
	std::cin >> this->phone_number;
	std::cout << "Birthday date: ";
	std::cin >> this->birthday_date;
}

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
	std::string input;
	phonebook   pb;

	input = "";
	std::cout << "Welcome to the phonebook!\n";
	while (input.compare("EXIT"))
	{
		std::cout << "Please enter a command:\n";
		std::cout << "ADD, SEARCH, EXIT\n";
		std::cin >> input;
		input = ft_clean_spaces(input);
		std::cout << "You entered: " << input << "\n";
	//	ft_command(input, pb);
	}
	return (0);
}