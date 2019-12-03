#include"linkedlist.cpp"
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
	linklist<student> ll;
	student arr[3];

	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		ll.AddAtEnd(arr[i]);
	}
	ll.display();
	return 0;
}









/*
int main()
{
	linklist<student> ll;
	student s2,s3;
	cin>>s2;
	ll.AddAtEnd(s2);
	cin>>s3;
	ll.AddAtEnd(s3);
	ll.display();
	return 0;
}
*/
