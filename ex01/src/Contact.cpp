/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:29 by descamil          #+#    #+#             */
/*   Updated: 2025/04/23 12:10:37 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

std::string	getInput(std::string prompt)
{
	std::string input = "";
	std::cout << prompt;
	while(input.empty())
	{
		std::cout << "\r" + prompt;
		std::getline(std::cin, input);
	}
	return (input);
}

void	Contact::fillContact()
{
	_FirstName = getInput("First Name: ");
}