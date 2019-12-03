#include"Bank.h"
                BankAcc::BankAcc()
		{
			amount=0;
		}
		BankAcc::BankAcc(int amount):amount(amount)
		{

		}

		int BankAcc::GetAmount() const
		{
			return amount;
		}
		 void BankAcc::Deposit()
		 {
			 int amt=100;
			cout<<"Total balance (After deposition) is: "<<(amount+=amt)<<endl;;
		 }
		 void BankAcc::Withdrawl()
		 {
			 int amt=200;
			cout<<"Total balance (After Withdrawl) is: "<<(amount-=amt)<<endl;;
		 }
		BankAcc::~BankAcc()
		{
			cout<<"\nBank account destroyed";
		}

		SavingAcc::SavingAcc():BankAcc()
		{
		IRate = 4;
		TB = 0;
		}
		SavingAcc::SavingAcc(float amount,float IRate,float TB):BankAcc(amount)
		{
		IRate = IRate;
		TB = TB;
		}

		void SavingAcc::CalInt()
		{
			TB=BankAcc::GetAmount();
			TB=TB+(TB*(IRate/100));
			cout<<"Total Balance (After Interest Rate)"<<TB<<endl;

		}
		void SavingAcc::displayBal()
		{
			cout<<"total bal with "<< IRate<<" % interest:"<<TB<<endl;
		}

                CurrentAcc::CurrentAcc():BankAcc()
                {
                IRate = 5.5;
                TB = 0;
                }
                CurrentAcc::CurrentAcc(float amount,float IRate,float TB):BankAcc(amount)
                {
                IRate = IRate;
                TB = TB;
                }

                void CurrentAcc::CalInt()
                {
                        TB=BankAcc::GetAmount();
                        TB=TB+(TB*(IRate/100));
                        cout<<"Total Balance (After Interest Rate)"<<TB<<endl;

                }
                void CurrentAcc::displayBal()
                {
                        cout<<"total bal with "<< IRate<<" % interest:"<<TB<<endl;
                }


