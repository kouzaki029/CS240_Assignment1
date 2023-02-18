#pragma once
ref class ATM
{
public:
	enum class state { START, PIN, ACCOUNT, TRANSACT };
	int customerNumber = 0;
	int customerPIN = 0;
	enum class accountType { CHECKING, SAVINGS };
	enum class transaction { DEPOSIT, WITHDRAW };

	void setCustomerNumber(int number)
	{
		customerNumber = number;
	}
	int getCustomerNumber()
	{
		return customerNumber;
	}
};