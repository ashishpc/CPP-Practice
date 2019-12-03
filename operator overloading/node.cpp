#include<iostream>
using namespace std;
template<class T>
class Node
{
  private:
	  T data;
	  Node *next;
  public:
	  T getdata()
	  {
		  return data;
	  }
	  void setdata( T ele)
	  {
		  data=ele;
	  }
	  Node<T>* getnext()
	  {
		  return(next);
	  }
	  void setnext(Node<T> *temp)
	  {
      		next=temp;
	  }
};
		


