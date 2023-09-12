/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:05:49 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/11 19:05:51 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class Replace
{
    private:
        std::string _ifilename;
        std::string _ofilename;
    public:
        Replace(std::string filename);
        ~Replace();

        void    changeMethod(std::string s1,std::string s2);
};
#endif