/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:32:58 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/21 10:13:37 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

int main()
{
    std::string cmd;
    PhoneBook test;
    while(1)
    {
        std::cout << "----Choose Your Command----" << std::endl;
        std::cout << "-> ADD\n" << "-> SEARCH\n" << "-> EXIT\n" << "~";
        std::getline(std::cin,cmd);
        if(std::cin.eof())
            break;
        if(cmd == "ADD")
            test.funAdd();
        else if (cmd == "SEARCH")
            test.funSearch();
        else if(cmd == "EXIT")
            test.funExit();
        else if(cmd.empty())
            std::cout << "";
        else
            std::cout << "Wrong Command\n";
    }
    return 0;
}


