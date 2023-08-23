/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:06:08 by abenlahb          #+#    #+#             */
/*   Updated: 2023/08/20 16:47:36 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include<iostream>
#include<ctime>
#include<iomanip>

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
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

void Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout << "acounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit ){
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";;
    std::cout << "p_amount:" << _amount << ";";
    if(deposit < 0)
    {
        std::cout << "deposit:" << "refused" << std::endl ;
        return ;
    }
    _amount += deposit;
    _totalAmount += deposit; 
     _totalNbDeposits++;
    _nbDeposits++;
    std::cout << "deposits:" << deposit << ";";
    std::cout << "amount:" <<  _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";;
    std::cout << "p_amount:" << _amount << ";";
    if(withdrawal > _amount || withdrawal < 0)
    {
        std::cout << "withdrawal:" << "refused" << std::endl ;
        return false;
    }
    std::cout << "withdrawal:" << withdrawal << ";";
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << "amount:" <<  _amount << ";";
    _nbWithdrawals++; 
    _totalNbWithdrawals++;
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

void Account::_displayTimestamp(void){
    std::time_t currenTime;
    std::tm *t;
    
    std::time(&currenTime);
    t = std::localtime(&currenTime);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", t);

    std::cout << buffer ;
}
int Account::getNbAccounts(void){
    return _nbAccounts;
}

int Account::getTotalAmount(void){
    return _totalAmount;
}

int Account::getNbDeposits(void){
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
    return _totalNbWithdrawals;
}