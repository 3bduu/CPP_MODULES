/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:38:37 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/14 11:39:20 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>

void UpperString(std::string str)
{
	int i;

	i = 0;
	while(str[i])
		std::cout << char(std::toupper(str[i++]));
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	while (av[i])
		UpperString(av[i++]);
	std::cout << std::endl;
	return 0;
}
