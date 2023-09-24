/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:29:49 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/17 18:42:41 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _fixedpoint_v;
        static const int  _fractional_bits = 8;
        
    public:
        Fixed();
        ~Fixed();
        Fixed( const int n );
        Fixed( const float n );
        Fixed(const Fixed& obj);
        Fixed& operator=(const Fixed& tmp);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

};
std::ostream& operator<<(std::ostream& cout,Fixed const &tmp);
#endif