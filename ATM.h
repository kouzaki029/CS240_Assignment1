#pragma once
ref class ATM
{
public:
	enum class state { START, PIN, ACCOUNT, TRANSACT };
	ATM::state currentState = state::START;
	int customerNumber = 0;
	int customerPIN = 0;
	enum class accountType { CHECKING, SAVINGS };
	enum class transaction { DEPOSIT, WITHDRAW };

	void setState(state type)
	{
		currentState = type;
	}
	void setCustomerNumber(int number)
	{
		customerNumber = number;
	}
	int getCustomerNumber()
	{
		return customerNumber;
	}
	ATM::state getState()
	{
		return currentState;
	}
};
