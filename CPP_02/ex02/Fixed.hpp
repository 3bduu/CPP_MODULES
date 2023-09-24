/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:18:04 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/21 09:18:05 by abenlahb         ###   ########.fr       */
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

        bool  operator>(const Fixed &obj) const ;
        bool  operator<(const Fixed &obj) const ;
        bool  operator>=(const Fixed &obj) const ;
        bool  operator==(const Fixed &obj) const ;
        bool  operator!=(const Fixed &obj) const ;
        bool  operator<=(const Fixed &obj) const ;
        Fixed  operator+(const Fixed &obj) const ;
        Fixed  operator-(const Fixed &obj) const ;
        Fixed  operator*(const Fixed &obj) const ;
        Fixed  operator/(const Fixed &obj) const ;
        Fixed& operator++(void);
        Fixed  operator++(int); 
        Fixed& operator--(void);
        Fixed  operator--(int);
        static Fixed& min(Fixed &fobj,Fixed &sobj);
        static const Fixed& min(const Fixed &fobj,const Fixed &sobj);
        static Fixed& max(Fixed &fobj,Fixed &sobj);
        static const Fixed& max(const Fixed &fobj,const Fixed &sobj);
};
std::ostream& operator<<(std::ostream& cout,Fixed const &tmp);
#endif