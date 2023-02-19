#pragma once
ref class ATM
{
public:
	enum class state { START, PIN, ACCOUNT, TRANSACT };
	ATM::state currentState = state::START;
	int customerNumber = 0;
	int customerPIN = 0;
	enum class accountType { CHECKINGS, SAVINGS };
	ATM::accountType currentAccountType = accountType::CHECKINGS;
	enum class transaction { DEPOSIT, WITHDRAW };

	void setState(state type)
	{
		currentState = type;
	}
	void setCustomerNumber(int number)
	{
		customerNumber = number;
	}
	void setCustomerPIN(int number)
	{
		customerPIN = number;
	}
	void setAccountType(accountType type)
	{
		currentAccountType = type;
	}
	ATM::state getState()
	{
		return currentState;
	}
	int getCustomerNumber()
	{
		return customerNumber;
	}
	int getCustomerPIN()
	{
		return customerPIN;
	}
	ATM::accountType getAccountType()
	{
		return currentAccountType;
	}
};
