/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:23:27 by manujime          #+#    #+#             */
/*   Updated: 2023/06/27 16:45:18 by manujime         ###   ########.fr       */
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
}

void Harl::info(void)
{
	std::cout << "INFO" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string levels[4] = {"debug", "info", "warning", "error"};
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (level.compare(levels[i]) && i < 4)
		i++;
	if (i < 4)
		(this->*f[i])();
	else
		std::cout << "Invalid level" << std::endl;
}