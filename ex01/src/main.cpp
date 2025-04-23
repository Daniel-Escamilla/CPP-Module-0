/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:37 by descamil          #+#    #+#             */
/*   Updated: 2025/04/23 11:45:31 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    for (int i = 0; i < 10; i++)  // Intentional loop to add more than 8 contacts
    {
        std::cout << "Adding contact " << i + 1 << ":\n";
        phoneBook.AddContact();
    }
    return 0;
}