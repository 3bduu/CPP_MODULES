/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:06:32 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/11 19:06:34 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(){

    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str << " : " << str << std::endl;
    std::cout << stringPTR << " : " << *stringPTR << std::endl;
    std::cout << &stringREF << " : " << stringREF << std::endl;
}