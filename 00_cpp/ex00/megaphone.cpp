/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:16:57 by manujime          #+#    #+#             */
/*   Updated: 2023/07/17 13:09:41 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //for cout
#include <cctype> //for toupper
#include <algorithm> //for transform
#include <string> //for string

//this function takes strings as arguments and prints them in uppercase
//if no arguments are passed, it prints a message
// int	main(int argc, char **argv)
// {

//     for (int c = 1; c < argc; c++)
//     {
//         for (int k = 0; argv[c][k]; k++)
//             std::cout << (char)std::toupper(argv[c][k]);
//         if (c < argc - 1)
//             std::cout << " ";
//     }
//     if (argc == 1)
//         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
//     std::cout << "\n";
//     return (0);
// }

int main(int argc, char **argv)
{
    std::string str;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < argc; i++)
        {
            str.assign(argv[i]);
            std::transform(str.begin(), str.end(), str.begin(), ::toupper);
            std::cout << str;
            if (i < argc - 1)
                std::cout << " ";
        }
    }
    std::cout << "\n";
    return (0);
}
