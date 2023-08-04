/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:23:21 by manujime          #+#    #+#             */
/*   Updated: 2023/06/27 16:46:03 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		std::cout << "Valid levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (0);
	}
	
	harl.complain(argv[1]);
	return (0);
}