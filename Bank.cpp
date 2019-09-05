#include<iostream>
#include<string>
using namespace std;
class BankAcc
{
	private:
		int amount;
	public:
		BankAcc()
		{
			amount=0;
		}
		BankAcc(int amount):amount(amount)
		{

		}

		int GetAmount() const
		{
			return amount;
		}
		 void Deposit(int amt=100)
		 {
			cout<<"Total balance (After deposition) is: "<<(amount+=amt);
		 }
		 void Withdrawl(int amt=200)
		 {
			cout<<"Total balance (After Withdrawl) is: "<<(amount-=amt);
		 }
		~BankAcc()
		{
			cout<<"\nBank account destroyed";
		}
};

class SavingAcc:public BankAcc
{
	private:
		float IRate=4;
		float TB;

	public:
		SavingAcc():BankAcc()
		{
		IRate = 4;
		TB = 0;
		}
		SavingAcc(float amount,float IRate,float TB):BankAcc(amount)
		{
		IRate = IRate;
		TB = TB;
		}

		void CalInt()
		{
			TB=BankAcc::GetAmount();
			TB=TB+(TB*(IRate/100));
			cout<<"Total Balance (After Interest Rate)"<<TB;

		}
		void displayBal()
		{
			cout<<"total bal with "<< IRate<<" % interest:"<<TB<<endl;
		}
};
/*class SavingAcc : public BankAcc
  {
  private:
  int IRate;
  float TB;
  float SI;

  public:
  SavingAcc()
  {
  IRate = 4;
  TB = 0;
  SI = 0;
  }
  SavingAcc(int amount,int IRate,int TB, float SI):BankAcc(amount)
  {
  IRate = IRate;
  TB = TB;
  SI = SI;
  }

  void CalInt()
  {
  cout<<"enter no of years:"<<endl;
  cin>>n;
  SI=amount*IRate/100;
  TB=amount+SI;

  }
  void displayBal()
  {
  cout<<"total bal with 4% interest:"<<Stotal<<endl;
  }
  };

*/
int main()
{
	/*	BankAcc b1;
		SavingAcc s1;
		CurrentAcc s2;
		s1.CalInt();
		s1.displayBal();
		s2.CalInt();
		s2.displayBal();
		*/	
	SavingAcc s1(1000,4,0);
	s1.Deposit();
	s1.Withdrawl();
	s1.CalInt();
	s1.BankAcc::Deposit();
	return 0;
}


