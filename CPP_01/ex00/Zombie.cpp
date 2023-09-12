/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:45:55 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/08 11:27:48 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void Zombie::announce( void ){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}

Zombie::Zombie(std::string name){
    _name = name;
}

Zombie::~Zombie(){
    std::cout << "Zombie " << _name << " :Cleand" << std::endl;
}