/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:48 by descamil          #+#    #+#             */
/*   Updated: 2025/04/24 09:42:35 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

bool stringToInt(const std::string &input, int &result)
{
	std::istringstream iss(input);
	iss >> result;
	return (!iss.fail() && iss.eof());
}

std::string	formatField(const std::string& str)
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

int	getNumber()
{
	int index;

	stringToInt(getInput("Enter index: "), index);
	if (index > 0 && index < 8)
		return (index);
	std::cerr << "Invalid index: " << std::endl;
	return (-1);
}

bool	PhoneBook::printTable()
{
	bool empty = true;

	for (int i = 0; i < 8; i++)
	{
		if (_contacts[i].getFirstName().empty())
			continue ;
		printContact(i);
		empty = false;
	}
	return (empty);
}

void	PhoneBook::SearchByName()
{
	int	index;
	
	if (printTable())
	{
		std::cerr << "The list is empty" << std::endl;
		return ;
	}
	index = getNumber();
	if (index == -1)
		return ;
	if (_contacts[index].getFirstName().empty())
		std::cout << "Contact not found." << std::endl;
	else
		printContact(index);
}
