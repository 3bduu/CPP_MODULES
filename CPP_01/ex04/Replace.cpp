/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:05:43 by abenlahb          #+#    #+#             */
/*   Updated: 2023/09/12 18:52:12 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Replace.hpp"

Replace::Replace(std::string filename): _ifilename(filename){
    _ofilename = filename + ".replace";
}

Replace::~Replace(){ 
}

void Replace::changeMethod(std::string s1,std::string s2){
    std::ifstream inFile;
    std::ofstream outFile;
    std::string text;
    size_t p;

    inFile.open(_ifilename.c_str());
    if(inFile && std::getline(inFile,text,'\0'))
    {
        outFile.open(_ofilename.c_str());
        if(outFile)
        {
            p = text.find(s1);
            while(p != std::string::npos)
            {
                text.erase(p,s1.length());
                text.insert(p,s2);
                p = text.find(s1,p+s2.length());
            }
            outFile << text;
            outFile.close();
        }
        else
            std::cout << "FAILURE";
        inFile.close();
    }
    else
        std::cout << "FAILURE";
}