/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:37:33 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/10 15:13:44 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) ,_weapon(NULL){
}

HumanB::~HumanB(){
}

void HumanB::attack(){
    if(!_weapon || _weapon->getType() == "")
        std::cout << _name << " No Weapon" << std::endl;
    else
        std::cout << _name << " attacks with their" << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
    this->_weapon = &weapon;
}