#include<iostream>
using namespace std;
class Animal
{
int weight;
public: 
	void SetWeight(int w)
	{
	weight = w;
	cout<<"weight :"<<weight;
	}
};

class Tiger : virtual public Animal
{
	int height;
	public: 
	void SetHeight(int h)
	{
	height = h;
	}
};

class Lion :  public Animal
{
	int length;
	public: 
	void Setlength(int l)
	{
	length = l;
	}
};


class Liger :  public Lion, public Tiger
{	
};
int main()
{
Liger lg;
cout<<"size:"<<sizeof(lg);
lg.Lion::SetWeight(10);
return 0;
}
