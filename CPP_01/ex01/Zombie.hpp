/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:33:39 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/12 09:01:26 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void announce( void );
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
#endif