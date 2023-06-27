/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:28:09 by manujime          #+#    #+#             */
/*   Updated: 2023/06/27 15:10:35 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if (s1.empty() || s2.empty() || filename.empty())
	{
		std::cout << "Error: empty" << std::endl;
		return (1);
	}

	replace(filename, s1, s2);
}