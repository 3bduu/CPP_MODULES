/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:37:44 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/10 14:37:45 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    _type = type;
}

Weapon::~Weapon(){
}

const std::string& Weapon::getType(){
    return _type;
}

void Weapon::setType(std::string type){
    _type = type;
}