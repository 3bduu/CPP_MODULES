/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:47:42 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/11 10:48:01 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl(/* args */){
}

Harl::~Harl(){
}

void Harl::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error(){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ){
    void (Harl::*funcPtr[4])() = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
    int i = 0;
    
    while(i < 4 && levels[i].compare(level))
        i++;
    if (i <= 3)
    {
        std::cout << "-> ";
        (this->*funcPtr[i])();
    }
}