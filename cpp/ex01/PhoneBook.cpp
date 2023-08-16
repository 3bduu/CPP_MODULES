/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:50 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/16 21:10:45 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
}

void PhoneBook::funAdd(){
    static int i;
    if(i == 8)
        i = 0;
    this->array[i].funFill();
    this->array[i].setIndex(i);
    i++;
    
}

void PhoneBook::funSearch(){
    std::string cmd;
    int i;
    
    i = 0;
    while (i < 8){
        this->array[i-1].funView(0);
        i++;
    }
    std::cout << "Enter The Index of the Contact\n";
    std::getline(std::cin,cmd);
    while(!(cmd>"0" && cmd<"9"))
    {
        std::cout << "---> Enter an Index Between 1-8 <---\n";
        std::getline(std::cin,cmd);
    }
    i = std::atoi(cmd.c_str());
    if(cmd.empty())
        std::cout << "";
    else  
        this->array[i-1].funView(1);
}

void PhoneBook::funExit(){
    std::cout << "EXIT";
    exit(1);
}

PhoneBook::~PhoneBook()
{
}