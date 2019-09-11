#include"Node.h"

template<class T>
bool LinkedList<T>::IsEmpty()
{
	return head==tail;
}

template<class T>
void LinkedList<T>::AddToTail(T elem)
{
	Node<T> *temp=new Node<T>;
	temp->SetData(elem);
	if(IsEmpty())
	{
		head->SetNext(temp);
		tail->setNext(temp);
	}
	else
	{
		temp->SetNext(nullptr);
		tail->SetNext(temp);
		tail=temp;
	}
}

template<class T>
void LinkedList<T>::DisplayAll()
{
	Node<T> *temp=head;
	while(temp!=nullptr)
	{
		cout<<temp->GetData()<<"-->";
		temp=temp->GetNext();
	}
	cout<<"NULL"<<endl;
}
