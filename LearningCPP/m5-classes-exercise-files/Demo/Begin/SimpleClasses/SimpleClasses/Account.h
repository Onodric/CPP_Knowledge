#include <vector>
#include <string>
#include "Transaction.h"

// this header file is really an interface!
class Account
{
private:
	int balance;
	std::vector<Transaction> log;
public:
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool Withdraw(int amt);
	
};
