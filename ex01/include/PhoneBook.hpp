/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:23 by descamil          #+#    #+#             */
/*   Updated: 2025/04/23 11:42:49 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "include.hpp"

class	Contact
{
	private:
		std::string	_FirstName;
		std::string	_SecondName;
		std::string	_Nickname;
		std::string	_Secret;
		std::string	_PhoneNumber;
	public:
		Contact() {};
		~Contact() {};
		void	fillContact();
		
};

class	PhoneBook
{
	private:
		int			_index;
		Contact		_contacts[8];
	public:
		PhoneBook() {};
		~PhoneBook() {};
		void		AddContact();
		// void		SearchContact(std::string search_contact);
};


#endif
