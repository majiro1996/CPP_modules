/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:23:27 by manujime          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/08/07 13:48:08 by manujime         ###   ########.fr       */
=======
/*   Updated: 2023/08/06 20:45:26 by manujime         ###   ########.fr       */
>>>>>>> 1cacdcd046ead6a573b9f0707890a21434aec972
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
	std::cout << "I love having extra bacon for my"
	" 7XL-double-cheese-triple-pickle-special"
	" ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
	" You didn’t put enough bacon in my burger!"
	" If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
	" I’ve been coming for years"
	" whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string levels[4] = {"debug", "info", "warning", "error"};
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (level.compare(levels[i]) && i < 3)
		i++;
	if (i <= 3 && !level.compare(levels[i]))
		(this->*f[i])();
	else
		std::cout << "INVALID LEVEL" << std::endl;
}