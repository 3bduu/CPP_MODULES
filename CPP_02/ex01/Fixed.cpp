/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:29:51 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/24 21:46:29 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_fixedpoint_v(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int n ) : _fixedpoint_v(n << _fractional_bits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _fixedpoint_v(roundf(n *(1 << _fractional_bits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& tmp){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &tmp)
        this->_fixedpoint_v = tmp.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const{
    return _fixedpoint_v;
}

void Fixed::setRawBits( int const raw ){
    _fixedpoint_v = raw;
}

int Fixed::toInt( void ) const{
    return this->_fixedpoint_v >> _fractional_bits;
}

float Fixed::toFloat( void ) const{
    return static_cast<float>(this->_fixedpoint_v) / (1 << _fractional_bits);
}

std::ostream& operator<<(std::ostream& cout,Fixed const &tmp){
    cout << tmp.toFloat();
    return cout;
}