/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:53:39 by manujime          #+#    #+#             */
/*   Updated: 2023/06/27 15:47:10 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void replace(std::string filename, std::string s1, std::string s2)
{
	std::string line;
	std::ifstream infile;
	std::ofstream outfile;
	size_t pos;

	infile.open(filename);
	if (!infile.is_open())
	{
		std::cout << "Error: " << filename << " not found" << std::endl;
		return ;
	}
	filename.append(".replace");
	outfile.open(filename);
	while (std::getline(infile, line))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1);
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
}