/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Member_class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/01 11:07:20 by sfeith        #+#    #+#                 */
/*   Updated: 2020/12/01 13:37:51 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMBER_CLASS_HPP
 # define MEMBER_CLASS_HPP
    
# include <string.h>
# include <iostream>
# include <iomanip>
#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio>

const   int     MAX_MEMBER      = 8;

class       Member
{
public:
    Member(void);
    ~Member(void);

    void				set_first_name(std::string str);
	

	std::string			get_first_name(void);


	
private:
	std:: string		first_name;
	
};


void        add_member(Member phonebook[], int i);
void        show_phonebook(Member phone_book[], int member_range);


#endif