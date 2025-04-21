/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:27 by descamil          #+#    #+#             */
/*   Updated: 2025/04/21 19:19:20 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

void	PhoneBook::SetContact(std::string new_contact)
{
	int i;
	for (i = 0; i < 8; i++)
	{
		if (contacts[i].empty())
		{
			contacts[i] = new_contact;
			break ;
		}
	}
	// if (i == 8)
		
}
