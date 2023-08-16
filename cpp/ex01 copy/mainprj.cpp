/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprj.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:32:58 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/16 10:36:06 by abenlahb         ###   ########.fr       */
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
        if(cmd == "ADD")
            test.funAdd();
        else if (cmd == "SEARCH")
            test.funSearch();
        else if(cmd == "EXIT")
        {
            std::cout << "EXIT";
            return 1;
        }
        else if(cmd.empty())
            std::cout << "";
        else
            std::cout << "Wrong Command\n";
    }
    return 0;
}