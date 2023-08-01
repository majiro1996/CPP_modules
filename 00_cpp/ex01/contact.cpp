/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:18:56 by manujime          #+#    #+#             */
/*   Updated: 2023/08/01 14:18:53 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//constructor
contact::contact(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

//destructor
contact::~contact(void)
{
}

//cleans the cin buffer
//fills a string with all the input from the user string
std::string fill(void)
{
	std::string input;

	std::cin.clear();
	std::getline(std::cin, input);
	return (input);
}

//this function of the contact class pompts the user to enter the contact's
//information, and stores it in the class' private variables
void    contact::in(void)
{
	std::cout << "Please enter the following information:\n";
	std::cout << "First name: ";
	std::cin.ignore();
	this->first_name = fill();
	std::cout << "Last name: ";
	this->last_name = fill();
	std::cout << "Nickname: ";
	this->nickname = fill();
	std::cout << "Phone number: ";
	this->phone_number = fill();
	std::cout << "Darkest secret: ";
	this->darkest_secret = fill();
	std::cout << this->first_name << " " << this->last_name << " has been added to the phonebook\n";
}

//prints the contact info
void	contact::out()
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

//prints contact info in a list format
//if the string is longer than 10 characters, it prints the first 9 characters and a dot
//if the string is shorter than 10 characters, it prints the string adding spaces to reach 10 characters
void	contact::list()
{
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->nickname << "|";
	std::cout << std::endl;
}

std::string		contact::get_first_name(void)
{
	return (this->first_name);
}