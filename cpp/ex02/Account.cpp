/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:06:08 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/17 17:42:19 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include<iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
    _nbAccounts++;
    
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _totalAmount += _amount; 
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

void Account::displayAccountsInfos(void){
    std::cout << "acounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const{
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit ){
    
    _totalNbDeposits++;
    _nbDeposits++; 
    std::cout << "index:" << _accountIndex << ";";;
    std::cout << "p_amount:" << _amount << ";";
    _amount += deposit;
    _totalAmount += deposit; 
    std::cout << "deposits:" << deposit << ";";
    std::cout << "amount:" <<  _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ){
    _totalNbWithdrawals++;
    _nbWithdrawals++; 
    std::cout << "index:" << _accountIndex << ";";;
    std::cout << "p_amount:" << _amount << ";";
    if(withdrawal > _amount)
    {
        std::cout << "withdrawal:" << "refused" << std::endl ;
        return false;
    }
    std::cout << "withdrawal:" << withdrawal << ";";
    _amount -= withdrawal;
    std::cout << "amount:" <<  _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}
Account::~Account(void){
        std::cout << "Good bye";
}

// int Account::getNbAccounts(void){
//     return _nbAccounts;
// }

// int Account::getTotalAmount(void){
//     return _totalAmount;
// }

// int Account::getNbDeposits(void){
//     return _totalNbDeposits;
// }

// int Account::getNbWithdrawals(void){
//     return _totalNbWithdrawals;
// }
