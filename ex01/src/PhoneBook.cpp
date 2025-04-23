/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:43 by descamil          #+#    #+#             */
/*   Updated: 2025/04/23 21:48:22 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

const std::string PhoneBook::FunctionNames[3] = {"ADD", "SEARCH", "EXIT"};

PhoneBook::Pointer PhoneBook::Functions[3] = {
	&PhoneBook::AddContact,
	&PhoneBook::SearchByName,
	&PhoneBook::Exit
};

void	PhoneBook::createPhoneBook()
{
	std::string input = "";
	PhoneBook	book;
		
	std::cout << "PHONE BOOK\n";
	while (_running)
	{
		std::getline(std::cin, input);
		if (input.empty())
			continue ;
		for (int i = 0; i < 3; i++)
		{
			if (input == FunctionNames[i])
				(this->*Functions[i])();
		}
	}
}
