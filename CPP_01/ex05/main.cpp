/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:47:48 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/11 10:46:00 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(){
    Harl test;
    std::string str;
    
    getline(std::cin,str);
    while(!std::cin.eof())
    {
        test.complain(str);
        getline(std::cin,str);
    }
    return (0);
}