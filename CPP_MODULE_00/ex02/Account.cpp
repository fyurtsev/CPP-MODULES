#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

int	Account::checkAmount(void) const{return (this->_amount);}
int	Account::getNbAccounts( void ) {return (Account::_nbAccounts);}
int	Account::getTotalAmount(void){return (Account::_totalAmount);}
int	Account::getNbDeposits(void){return (Account::_totalNbDeposits);}
int	Account::getNbWithdrawals( void ){return (Account::_totalNbWithdrawals);}

void	Account::_displayTimestamp(void)
{
	time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout	<< "accounts:" << _accountIndex << ";total:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" 
	<< Account::_totalAmount << ";deposits:" 
	<< Account::_totalNbDeposits << ";withdrawals:" 
	<< Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount() << ";deposit:";
	this->_amount += deposit;
	this->_totalNbDeposits++;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << deposit << ";amount:" << this->checkAmount() << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();	
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount() << ";withdrawal:";
	if(this->_amount - withdrawal < 0){std::cout << "refused" << std::endl; return(false);}
	this->_amount -= withdrawal;
	this->_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << this->checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl; 
	return(true);
}

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
    this->_displayTimestamp();
    std::cout   << "index:" << this->_accountIndex << ";amaount:"
                << this->_amount << ";created\n";
}

Account::~Account()
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<";closed\n";
}
