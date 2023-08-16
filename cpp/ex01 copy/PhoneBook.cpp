/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:50 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/16 10:35:43 by abenlahb         ###   ########.fr       */
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
    this->array[i].funView();
}

PhoneBook::~PhoneBook()
{
}