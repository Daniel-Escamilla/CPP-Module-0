/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:15:39 by descamil          #+#    #+#             */
/*   Updated: 2025/04/24 10:55:32 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;
int Account::_nbAccounts = 0;

void Account::_displayTimestamp( void )
{
	std::time_t	time = std::time(NULL);
	std::tm*	localTime = std::localtime(&time);
	char		buffer[32];
	
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", localTime);
	std::cout << buffer;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

int Account::checkAmount() const
{
	return _amount;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" 
	<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_nbAccounts++;

	_displayTimestamp();
	std::cout << "index:"  << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:"  << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_amount += deposit;
	_nbDeposits += 1;

	int	before = _amount - deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << before << ";deposit:"
	<< deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int p_amount = _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount;

	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	_nbWithdrawals += 1;
	_amount -= withdrawal;
	_totalNbWithdrawals += 1;
	_totalAmount -= withdrawal;

	std::cout << ";withdrawal:" << withdrawal << ";amount:"
	<< _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
