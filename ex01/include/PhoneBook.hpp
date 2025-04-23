/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:01:23 by descamil          #+#    #+#             */
/*   Updated: 2025/04/23 21:48:12 by daniel-esca      ###   ########.fr       */
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
		std::string	getFirstName() const { return _FirstName; }
		std::string	getSecondName() const { return _SecondName; }
		std::string	getNickname() const { return _Nickname; }
		std::string	getPhoneNumber() const { return _PhoneNumber; }
		std::string	getSecret() const { return _Secret; }
		void	fillContact();
		
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
		typedef void(PhoneBook::*Pointer)();
		
		void		printContact(int i);
		void		createPhoneBook();
		static const std::string FunctionNames[3];
		static Pointer	Functions[3];
};

#endif
