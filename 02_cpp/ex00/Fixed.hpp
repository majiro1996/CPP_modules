/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:45:58 by manujime          #+#    #+#             */
/*   Updated: 2023/08/24 11:31:02 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed &source);
        Fixed &operator=(const Fixed &source);
        ~Fixed(void);
        int getRawBits(void) const;
        void setRawBits(int const raw);
    
    private:
        int value;
        static const int bits = 8;
};

# endif