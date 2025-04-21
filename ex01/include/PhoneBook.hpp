/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:23 by descamil          #+#    #+#             */
/*   Updated: 2025/04/21 19:19:35 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "include/include.hpp"

class PhoneBook
{
	private:
		std::string	contacts[8];
	public:
		PhoneBook() {};
		~PhoneBook() {};
		void		SetContact(std::string new_contact);
		// void		GetContact(std::string search_contact);
};

class Contact
{
	
};

#endif
