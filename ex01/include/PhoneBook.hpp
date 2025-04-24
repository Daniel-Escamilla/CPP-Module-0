/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:23 by descamil          #+#    #+#             */
/*   Updated: 2025/04/24 08:41:25 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "include.hpp"

class	Contact
{
	private:
		std::string	_Secret;
		std::string	_FirstName;
		std::string	_Nickname;
		std::string	_SecondName;
		std::string	_PhoneNumber;
	public:
		Contact() {};
		~Contact() {};

		void		fillContact();

		std::string	getSecret() const { return _Secret; }
		std::string	getNickname() const { return _Nickname; }
		std::string	getFirstName() const { return _FirstName; }
		std::string	getSecondName() const { return _SecondName; }
		std::string	getPhoneNumber() const { return _PhoneNumber; }
		
};

class	PhoneBook
{
	private:
		int			_index;
		Contact		_contacts[8];
		bool		_running;

		void		AddContact();
		void		Exit();
		void		SearchByName();
	public:
		PhoneBook() : _index(0), _running(true){}
		~PhoneBook() {};

		bool		printTable();
		void		createPhoneBook();
		void		printContact(int i);

		typedef void(PhoneBook::*Pointer)();
		static Pointer	Functions[3];
		static const std::string FunctionNames[3];
};

std::string	getInput(std::string prompt);

#endif
