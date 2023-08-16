/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb < abenlahb@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:50 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/16 17:18:02 by abenlahb         ###   ########.fr       */
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