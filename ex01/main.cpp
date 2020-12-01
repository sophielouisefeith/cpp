/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/01 10:47:48 by sfeith        #+#    #+#                 */
/*   Updated: 2020/12/01 16:29:32 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Member_class.hpp"


static      void        phone_menu(void)
{
    std::cout << "list of valid commands :" << std ::endl;
    // hier uitleggen wat alle commands betekenen 
}


int         main(void)
{

        int             contact_num = 0;
        std::string     command;
        Member         phonebook[8];

        std::cout << "Hello and welcome the phone book that can hold only 8 contacts!!" << std::endl;

        while (1)
        {
            phone_menu();
            std::cin >> command;
            if ( command == "EXIT")
            {
                std::cout << " Ciao members, till never "<< std::endl;
                break;
            }
            else if (command == "ADD")
            {
                if (contact_num == 8)
                {
                    std::cout << "The phonebook is full" << std::endl;
                    continue ; 
                }
                add_member(phonebook, contact_num);
                std::cout << "Contact is added" << std::endl;
                contact_num++;
            }
            else if (command == "SEARCH")
                show_phonebook(phonebook, contact_num);
        }
        
        return (0);
}