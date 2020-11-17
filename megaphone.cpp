/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 16:17:47 by sfeith        #+#    #+#                 */
/*   Updated: 2020/11/17 16:17:49 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio>

void	toupperConvert(char str[])
{
	while (*str)
		std::cout << (char)toupper(*str++);
}

int 	main(int argc, char* argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
		toupperConvert(argv[i]);
	std::cout << std::endl;
	return (0);
}