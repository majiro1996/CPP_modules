/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:59:37 by manujime          #+#    #+#             */
/*   Updated: 2023/06/19 18:23:38 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "contact.hpp"

//phonebook class
class   phonebook
{
    public:
        phonebook(void);
        ~phonebook(void);
        void    init(void);
        void    add(void);
        void    list(void);
        void    search(void);
        void    exit(void);
    private:
        contact	contacts[8];
        int		count;
};

#endif