/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:33:32 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/12 09:02:56 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(){
    std::string cmd;
    int n;
    int j;
    
    n = 4;
    Zombie *z = zombieHorde(n,"Hoal");
    j = -1;
    while(++j < n)
        z[j].announce();
    delete[] z;
}