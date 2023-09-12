/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:49:30 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/12 08:44:51 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name) , _weapon(weapon){
}

HumanA::~HumanA(){
}

void HumanA::attack(){
    if(_weapon.getType() == "")
        std::cout << _name << " No Weapon" << std::endl;
    else
        std::cout << _name << " attacks with their" << this->_weapon.getType() << std::endl;
}