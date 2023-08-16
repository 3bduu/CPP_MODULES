/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:28 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/16 12:42:09 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"Contact.hpp"
class PhoneBook
{
private:
    Contact array[8];
public:
    PhoneBook(/* args */);
    ~PhoneBook();
    void funAdd();
    void funSearch();
    void funExit();
};


#endif