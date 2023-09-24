/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:54:07 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/17 10:42:03 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
class Fixed
{
    private:
        int _fixedpoint_v;
        static const int  _fractional_bits = 8;
        
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& obj);
        Fixed& operator=(const Fixed& tmp);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
#endif