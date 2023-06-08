/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:16:57 by manujime          #+#    #+#             */
/*   Updated: 2023/06/08 15:18:09 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //for cout
#include <cctype> //for toupper

//this function takes strings as arguments and prints them in uppercase
//if no arguments are passed, it prints a message
int	main(int argc, char **argv)
{

    for (int c = 1; c < argc; c++)
    {
        for (int k = 0; argv[c][k]; k++)
            std::cout << (char)std::toupper(argv[c][k]);
    }
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n";
}

