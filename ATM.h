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
	ATM::transaction currentTransaction = transaction::DEPOSIT;
	double transactionAmount = 0;

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
	void setTransaction(transaction type)
	{
		currentTransaction = type;
	}
	void setTransactionAmount(double number)
	{
		transactionAmount = number;
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
	ATM::transaction getTransaction()
	{
		return currentTransaction;
	}
	double getTransactionAmount()
	{
		return transactionAmount;
	}
};
