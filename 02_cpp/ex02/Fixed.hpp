/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:45:58 by manujime          #+#    #+#             */
/*   Updated: 2023/08/24 17:58:32 by manujime         ###   ########.fr       */
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

        bool    operator>(const Fixed &source) const;
        bool    operator<(const Fixed &source) const;
        bool    operator>=(const Fixed &source) const;
        bool    operator<=(const Fixed &source) const;
        bool    operator==(const Fixed &source) const;
        bool    operator!=(const Fixed &source) const;

        Fixed   operator+(const Fixed &source) const;
        Fixed   operator-(const Fixed &source) const;
        Fixed   operator*(const Fixed &source) const;
        Fixed   operator/(const Fixed &source) const;
        
        Fixed   &operator++(void);
        Fixed   operator++(int);
        Fixed   &operator--(void);
        Fixed   operator--(int);
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

        static Fixed          &min(Fixed &a, Fixed &b);
        static Fixed          &max(Fixed &a, Fixed &b);
        static const Fixed    &min(const Fixed &a, const Fixed &b);
        static const Fixed    &max(const Fixed &a, const Fixed &b);

    private:
        int          value;
        static const int bits = 8; 
};

std::ostream &operator<<(std::ostream &out, const Fixed &source);
# endif