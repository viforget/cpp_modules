#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int deposit ) {
	
	this->_amount = deposit;
	this->_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << Account::_nbAccounts << ";amount:" << deposit << ";created" << std::endl;
	Account::_nbAccounts += 1;
	return;
}

Account::~Account( void ) {

	return;
}

/*int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}*/

/*int	getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	displayAccountsInfos( void )
{
	return (Account::_nbAccounts);
}*/

void	Account::makeDeposit( int deposit) {
	
	//Account::_totalNbDeposits += 1;
	//Account::_totalAmount += deposit;
	this->_amount += deposit;
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}