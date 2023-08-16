/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:47 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/16 10:36:20 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"

Contact::Contact(/* args */)
{
}

std::string enterValue(std::string str)
{
    std::string in;
    
    std::cout << "Enter The " << str << std::endl;
    std::getline(std::cin,in);
    return in;
}

void Contact::funFill(){
    
    this->setFirstName(enterValue("First Name"));
    this->setLastName(enterValue("Last Name"));
    this->setNicktName(enterValue("NickName"));
    this->setPhonenbr(enterValue("Phone Number"));
    this->setDarkestSecret(enterValue("Darkest Secret"));
}

void Contact::funView(){
    std::cout << "--------------------\n";
    std::cout << this->getIndexContatc() << " | ";
    std::cout << this->getFirstName() << " | ";
    std::cout << this->getLastName() << " | ";
    std::cout << this->getNickName() << std::endl;
    std::cout << "--------------------\n";
}

void Contact::funCoutTenOnly(){
    
}

Contact::~Contact()
{
}