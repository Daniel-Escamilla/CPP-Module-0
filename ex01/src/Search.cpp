/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:48 by descamil          #+#    #+#             */
/*   Updated: 2025/04/23 21:56:27 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

std::string formatField(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return std::string(10 - str.length(), ' ') + str;
}

void	PhoneBook::printContact(int i)
{
	Contact &contact = _contacts[i];
	
	std::cout << std::setw(10) << std::right << i << " | "
	<< formatField(contact.getFirstName()) << " | "
	<< formatField(contact.getSecondName()) << " | "
	<< formatField(contact.getNickname()) << std::endl;
}

void	PhoneBook::SearchByName()
{
	int index;
	std::cout << "Enter index: ";
	std::cin >> index;
	for (int i = 0; i < 8; i++)
	{
		if (!(_contacts[index].getFirstName().empty()))
		{
			printContact(i);
			return;
		}
	}
	std::cout << "Contact not found.\n";
}
