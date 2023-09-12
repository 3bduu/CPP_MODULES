/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:43:32 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/08 11:30:43 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(){
    Zombie z("JaQen");
    z.announce();
    randomChump("Abdelilah");
    Zombie *heap = newZombie("Mr Alloc");
    heap->announce();
    delete heap;
    
}