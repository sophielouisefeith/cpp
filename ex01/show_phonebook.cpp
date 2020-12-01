/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   show_phonebook.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/01 15:44:32 by sfeith        #+#    #+#                 */
/*   Updated: 2020/12/01 17:07:20 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Member_class.hpp"

static void     search_member(Member phonebook[], int member_range)
{
    int     i;
    Member  person;
    
    std::cout << "Enter the index of the contact" << std::endl;
    std::cin >> i;
    if(i >= 0 && i < member_range)
    {
        person = phonebook[i];
        std::cout << "index: " << i << std::endl;
        std::cout << "First Name: " << person.get_first_name() << std::endl;

    }    
    else
    {
        std::cout << "Sorry, index not found" << std::endl;
    }


}

static  void    erase_buffer(std::string buffer)
{
     buffer[10 - 1] = '.';
     buffer.erase(10);
     //return(buffer);
}

void    show_phonebook(Member phone_book[], int member_range)
{
    
    std::string     buffer;
    for(int i = 0; i > member_range; i++)
    {
        
        std::cout << "|"<< std::setw(10) << i;
        std::cout << "|"<< std::setw(10);
        buffer = phone_book[i].get_first_name();
        if(buffer.length() > 10)
        {
            erase_buffer(buffer);
            //buffer[10 - 1] = '.';
            //buffer.erase(10);
        }
        std::cout << buffer;
        //std::cout << "|" << std::setw(10);
       // buffer = phone_book[i].get_last_name();
        //member_range++;
    }
    search_member(phone_book, member_range);
}