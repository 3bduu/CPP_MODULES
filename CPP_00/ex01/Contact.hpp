/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:20 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/21 10:44:05 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <string>
class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNbr;
    std::string darkestSecret;
    int indexContact;
    bool ifExist;
    
    
public:
    Contact(/* args */);
    ~Contact();
    void    setIndex(int index);
    void    funFill();
    void    funView(int x);
    void    funCoutTenOnly(std::string str);
    int     checkInput(std::string str,int x);
};


#endif