/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:59:37 by manujime          #+#    #+#             */
/*   Updated: 2023/06/17 16:34:24 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

//contact class
class   contact
{
    public:
        //contact(void);
        //~contact(void);
        void    add(void);
        void    search(void);
        void    exit(void);
    private:
        int        index;
        int        count;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string postal_address;
        std::string email_address;
        std::string phone_number;
        std::string birthday_date;
};

//phonebook class
class   phonebook
{
    public:
        //phonebook(void);
        //~phonebook(void);
        void    add(void);
        void    search(void);
        void    exit(void);
    private:
        contact	contacts[8];
        int		count;
};

#endif