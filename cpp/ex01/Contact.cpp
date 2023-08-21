/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:47 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/21 11:07:31 by abenlahb         ###   ########.fr       */
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
    if(std::cin.eof())
        exit(0);
    while(in.empty())
    {
        std::cout << "Enter The " << str << std::endl;
        std::getline(std::cin,in);
        if(std::cin.eof())
            exit(0);
    }
    return in;
}

int Contact::checkInput(std::string str,int x){
    int i;

    i = -1;
    while(str[++i]){
        if(!x && !std::isdigit(str[i]))
            return 1;
        if(x==1 && !std::isalpha(str[i]))
            return 1;
        if(x==2 && !std::isalpha(str[i]) && !std::isdigit(str[i]))
            return 2;
    }
    return 0;
}

void Contact::funFill(){
    
    firstName = enterValue("First Name");
    while (checkInput(firstName,1))
        firstName = enterValue("ALPHA ONLY\nFirst Name :");
    lastName = enterValue("Last Name");
    while (checkInput(lastName,1))
        lastName = enterValue("ALPHA ONLY\nLast Name :");
    nickName = enterValue("NickName");
    while (checkInput(nickName,1))
        nickName = enterValue("ALPHA ONLY\nLast Name :");
    phoneNbr = enterValue("Phone Number");
    while (checkInput(phoneNbr,0))
        phoneNbr = enterValue("DIGITS ONLY\nPhone Number :");
    darkestSecret = enterValue("Darkest Secret");
    while (checkInput(darkestSecret,2))
        darkestSecret = enterValue("DIGITS || ALPHA ONLY\nDarkest Secret :");
    ifExist = true;
}

void Contact::funView(int x){
    std::string str;
    if(ifExist!=true){
        if(x)
            std::cout << "----> Unavailable <----\n";
        return ;
    }
    std::cout << "--------------------\n"; 
    std::cout << indexContact+1 << " | ";
    if(!x){
        funCoutTenOnly(firstName);
        funCoutTenOnly(lastName);
        funCoutTenOnly(nickName);
    }
    else{
        std::cout << firstName << " | ";
        std::cout << lastName << " | ";
        std::cout << nickName << " | ";
        std::cout << phoneNbr << " | ";
        std::cout << darkestSecret << " | ";
    }
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

void Contact::setIndex(int index)
{
    indexContact = index;
}

Contact::~Contact()
{
}