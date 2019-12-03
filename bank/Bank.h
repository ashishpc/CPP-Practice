#include<iostream>
#include<string>
using namespace std;
class BankAcc
{
	private:
		int amount;
	public:
		BankAcc();
		BankAcc(int amount);

		int GetAmount() const;
		 void Deposit();
		 void Withdrawl();
		~BankAcc();
};

class SavingAcc:public BankAcc
{
	private:
		float IRate=4;
		float TB;

	public:
		SavingAcc();
		SavingAcc(float amount,float IRate,float TB);

		void CalInt();
		void displayBal();
};
class CurrentAcc:public BankAcc
{
        private:
                float IRate=5.5;
                float TB;

        public:
                CurrentAcc();
                CurrentAcc(float amount,float IRate,float TB);

                void CalInt();
                void displayBal();

};
