/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:33:42 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/12 09:03:38 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *z = new Zombie[N];
    int i;

    i = -1;
    if(!z)
        return NULL;
    while(++i < N)
        z[i].setName(name);
    return (z);
}