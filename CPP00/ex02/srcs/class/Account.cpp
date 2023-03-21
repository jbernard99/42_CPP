/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:13:46 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/21 14:39:25 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Account.hpp"
#include <iostream>
#include "Account.hpp"


void Account::displayAccountsInfos(void)
{
}

void Account::makeDeposit(int deposit)
{
}

bool Account::makeWithdrawal(int withdrawal)
{
	return false;
}

int Account::checkAmount(void) const
{
	return 0;
}

void Account::displayStatus(void) const
{
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

Account::Account(int initial_deposit)
{
}

Account::~Account(void)
{
}

