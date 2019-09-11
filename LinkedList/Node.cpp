#include"Node.h"

template<class T>
T Node<T>::GetData()
{
	return data;
}
template<class T>

void Node<T>::SetData(T elem)
{
	data=elem;
}

template<class T>
Node<T>& Node<T>::GetNext()
{
	return next;
}

template<class T>
void Node<T>::SetNext(Node& n)
{
	next=n;
}
