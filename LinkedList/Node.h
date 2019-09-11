#include<iostream>
using namespace std;

template<class T>
class Node
{
	private:
	T data;
	Node *next;

	public:
		T GetData();
		void SetData(T);
		Node& GetNext();
		void SetNext(Node&);

};

template<class T>
class LinkedList
{
	private:
		Node<T> *head=nullptr;
		Node<T> *tail=nullptr;

	public:
		bool IsEmpty();
		void AddToTail(T);
		void DisplayAll();
};
