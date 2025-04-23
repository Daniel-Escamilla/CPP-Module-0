/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:29 by descamil          #+#    #+#             */
/*   Updated: 2025/04/23 13:24:12 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

std::string	getInput(std::string prompt)
{
	std::string input = "";
	while(input.empty())
	{
		std::cout << prompt;
		std::getline(std::cin, input);
	}
	return (input);
}

void	Contact::fillContact()
{
	_FirstName = getInput("First Name: ");
	_SecondName = getInput("Second Name: ");
	_Nickname = getInput("Nickname: ");
	_PhoneNumber = getInput("Phone Number: ");
	_Secret = getInput("Dark Secret: ");
}