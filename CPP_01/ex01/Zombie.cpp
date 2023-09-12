/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:33:37 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/08 12:01:24 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void Zombie::announce( void ){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}

Zombie::Zombie(){
}

Zombie::~Zombie(){
    std::cout << "Zombie " << _name << " :Cleand" << std::endl;
}

void    Zombie::setName(std::string name) {
    this->_name = name;
}