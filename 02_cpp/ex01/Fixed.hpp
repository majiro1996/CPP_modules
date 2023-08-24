/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:45:58 by manujime          #+#    #+#             */
/*   Updated: 2023/08/24 11:43:58 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed &source);
        Fixed(const int val);
        Fixed(const float val);
        ~Fixed(void);
        
        Fixed   &operator=(const Fixed &source);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

    private:
        int          value;
        static const int bits = 8; 
};

std::ostream &operator<<(std::ostream &out, const Fixed &source);

# endif