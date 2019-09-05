#include"Bank.h"

int main()
{
/*	SavingAcc s1(1000,4,0);
	s1.Deposit();                           //Deposit()::BankAcc
	s1.Withdrawl();                         //Withdrawl()::BankAcc
	s1.CalInt();				//CalInt()::SavingAcc
	s1.BankAcc::Deposit();
*/
	CurrentAcc s2(2000,2,0);
	s2.Deposit();                           //Deposit()::BankAcc
	s2.Withdrawl();                         //Withdrawl()::BankAcc
	s2.CalInt();				//CalInt()::SavingAcc
	s2.BankAcc::Deposit();
	return 0;
}


