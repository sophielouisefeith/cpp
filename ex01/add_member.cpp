/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_member.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/01 12:58:45 by sfeith        #+#    #+#                 */
/*   Updated: 2020/12/01 13:38:39 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Member_class.hpp"

void    add_member(Member phonebook[], int i)
{
    Member       person;
    std::string str;
    
    std::cout << "First Name: ";
	std::cin >> str;
	person.set_first_name(str);

	phonebook[i] = person;
    
}