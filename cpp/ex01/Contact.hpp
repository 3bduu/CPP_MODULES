/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb < abenlahb@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:20 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/16 17:08:53 by abenlahb         ###   ########.fr       */
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
    std::string getFirstName()
    {
       return firstName;
    }
    std::string getLastName()
    {
       return lastName;
    }
    std::string getNickName()
    {
       return nickName;
    }
    std::string getPhoneNbr()
    {
       return phoneNbr;
    }
    std::string getDarkestSecret()
    {
       return darkestSecret;
    }
    int getIndexContatc()
    {
       return indexContact + 1;
    }
    //------------------------
    void setFirstName(std::string firstname)
    {
       firstName = firstname;
    }
     void setLastName(std::string lastname)
    {
       lastName = lastname;
    }
     void setNicktName(std::string nickname)
    {
       nickName = nickname;
    }
     void setPhonenbr(std::string phonenbr)
    {
       phoneNbr = phonenbr;
    }
    void setDarkestSecret(std::string darkestsecret)
    {
       darkestSecret = darkestsecret;
    }
    void setIndex(int index)
    {
       indexContact = index;
    }
    void    funFill();
    void    funView();
    void    funCoutTenOnly(std::string str);
};


#endif