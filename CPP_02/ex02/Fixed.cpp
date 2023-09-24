/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:18:00 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/21 09:18:01 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedpoint_v(0){
}

Fixed::~Fixed(){
}

Fixed::Fixed( const int n ) : _fixedpoint_v(n << _fractional_bits) {
}

Fixed::Fixed( const float n ) : _fixedpoint_v(roundf(n *(1 << _fractional_bits))) {
}

Fixed::Fixed(const Fixed& obj){
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& tmp){
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

/* The 6 comparison operators: >, <, >=, <=, == and != */

bool Fixed::operator<(const Fixed &obj) const{
    return this->getRawBits() < obj.getRawBits();
}

bool Fixed::operator>(const Fixed &obj) const{
    return this->getRawBits() > obj.getRawBits();
}

bool Fixed::operator<=(const Fixed &obj) const{
    return this->getRawBits() <= obj.getRawBits();
}

bool Fixed::operator>=(const Fixed &obj) const{
    return this->getRawBits() >= obj.getRawBits();
}

bool Fixed::operator==(const Fixed &obj) const{
    return this->getRawBits() == obj.getRawBits();
}

bool Fixed::operator!=(const Fixed &obj) const{
    return this->getRawBits() != obj.getRawBits();
}

/* The 4 arithmetic operators +, -, *, and /*/
Fixed Fixed::operator+(const Fixed &obj) const{
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(const Fixed &obj) const{
    return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(const Fixed &obj) const{
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed &obj) const{
    return Fixed(this->toFloat() / obj.toFloat());
}

/* The 4 increment/decrement operators */
Fixed& Fixed::operator++(void){
    ++this->_fixedpoint_v;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed obj(*this);
    obj._fixedpoint_v=this->_fixedpoint_v++;
    return obj;
}

Fixed& Fixed::operator--(void){
    --this->_fixedpoint_v;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed obj(*this);
    obj._fixedpoint_v=this->_fixedpoint_v--;
    return obj;
}

/* Min && Max */
Fixed& Fixed::min(Fixed &fobj,Fixed &sobj){
    if(fobj.getRawBits() < sobj.getRawBits())
        return fobj;
    return sobj;
}

const Fixed& Fixed::min(const Fixed &fobj,const Fixed &sobj){
    if(fobj.getRawBits() < sobj.getRawBits())
        return fobj;
    return sobj;
}

Fixed& Fixed::max(Fixed &fobj,Fixed &sobj){
    if(fobj.getRawBits() > sobj.getRawBits())
        return fobj;
    return sobj;
}

const Fixed& Fixed::max(const Fixed &fobj,const Fixed &sobj){
    if(fobj.getRawBits() > sobj.getRawBits())
        return fobj;
    return sobj;
}