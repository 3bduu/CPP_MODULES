/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:47 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/16 12:08:25 by abenlahb         ###   ########.fr       */
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
    while(in.empty())
    {
        std::cout << "Enter The " << str << std::endl;
        std::getline(std::cin,in);
    }
    return in;
}

void Contact::funFill(){
    
    this->setFirstName(enterValue("First Name"));
    this->setLastName(enterValue("Last Name"));
    this->setNicktName(enterValue("NickName"));
    this->setPhonenbr(enterValue("Phone Number"));
    this->setDarkestSecret(enterValue("Darkest Secret"));
    this->ifExist = true;
}

void Contact::funView(){
    std::string str;
    if(this->ifExist==false){
        std::cout << "----> Unavailable <----\n";
        return ;
    }
    std::cout << "--------------------\n"; 
    std::cout << this->getIndexContatc() << " | ";
    this->funCoutTenOnly(getFirstName());
    this->funCoutTenOnly(getLastName());
    this->funCoutTenOnly(getNickName());
    std::cout << "\n--------------------\n";
}

void Contact::funCoutTenOnly(std::string str){
    int i;

    i = -1;
    while(str[++i]){
        if(i >= 10)
        {
            std::cout << ".";
            break;
        }
        std::cout << str[i];
    }
    std::cout << " | ";
}

Contact::~Contact()
{
}