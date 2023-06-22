/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:31:09 by manujime          #+#    #+#             */
/*   Updated: 2023/06/20 17:45:28 by manujime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(int initial_deposit)
{
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    Account::_totalNbDeposits = 0;
    Account::_totalNbWithdrawals = 0;
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
    Account::_totalNbDeposits = 0;
    Account::_totalNbWithdrawals = 0;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int     Account::checkAmount(void) const
{
    return (this->_amount);
}

void    Account::displayStatus(void) const
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::_displayTimestamp(void)
{
    time_t  now = time(0);
    tm      *ltm = localtime(&now);

    std::cout << "[" << 1900 + ltm->tm_year;
    std::cout << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_mday;
    std::cout << "_";
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_sec;
    std::cout << "] ";
}

int     Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int     Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int     Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int     Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}
