/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:50 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/16 12:42:59 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
}

void PhoneBook::funAdd(){
    static int i;
    if(i == 2)
        i = 0;
    this->array[i].funFill();
    this->array[i].setIndex(i);
    i++;
    
}

void PhoneBook::funSearch(){
    std::string cmd;
    int i;
    std::cout << "Enter The Index of the Contact\n";
    std::getline(std::cin,cmd);
    if(cmd.empty())
        std::cout << "";
    i = std::stoi(cmd);
    if(i < 1 || i > 8)
        std::cout << "----> You can Just choose between 1-8 <----\n";
    else  
        this->array[i-1].funView();
}

void PhoneBook::funExit(){
    std::cout << "EXIT";
    exit(1);
}

PhoneBook::~PhoneBook()
{
}