/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:03:59 by manujime          #+#    #+#             */
/*   Updated: 2023/06/26 11:09:01 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "address of str: " << &str << std::endl;
	std::cout << "address held by ptr: " << ptr << std::endl;
	std::cout << "address held by ref: " << &ref << std::endl;
	std::cout << "value of str: " << str << std::endl;
	std::cout << "value pointed to by ptr: " << *ptr << std::endl;
	std::cout << "value pointed to by ref: " << ref << std::endl;
}
