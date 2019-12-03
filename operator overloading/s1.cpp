#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		int rno;
		string name;
	public:
	/*	student(int rolno,string Name)
		{
			rno=rolno;
			name=Name;
		}
	*/	friend istream & operator>>(istream & is, student & st)
		{
			cout<<"Enter your roll no and name:";
			cin>>st.rno>>st.name;
		}
		friend ostream & operator<<(ostream & os, const student & st)
		{
			cout<<"Roll no:"<<st.rno<<"\tName:"<<st.name<<endl;
		}
};
int main()
{
//	student s1(1,"Ashish");
	student s2;
	cin>>s2;
	cout<<s2;
	return 0;
}

