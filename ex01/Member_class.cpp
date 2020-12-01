/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Member_class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sfeith <sfeith@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/01 13:12:15 by sfeith        #+#    #+#                 */
/*   Updated: 2020/12/01 14:20:40 by sfeith        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Member_class.hpp"

/*
** Constructor / Destructor
 */
 
Member::Member(void){
    return ;
}
Member::~Member(void){
    return ;
}


/*
** Setters
 */
 
void        Member::set_first_name(std::string str)
{
    this->first_name = str;
}

/*Getters
**
*/


std::string     Member::get_first_name(void)
{
    return(this->first_name);
}