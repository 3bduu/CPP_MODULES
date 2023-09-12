/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:05:35 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/11 19:05:37 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Replace.hpp"

int main(int ac,char **av)
{
    if(ac != 4){
        std::cout << "File name - Str 1 (toFind)- Str 2 (toReplace)"<< std::endl;
        return (1);
    }
    Replace file(av[1]);
    file.changeMethod(av[2],av[3]);
    return (0);
}