#include"node.cpp"
template<class T>
class linklist
{
	private:
		Node<T>* head;
		Node<T>* tail;
	public:
		linklist():head(nullptr),tail(nullptr)
	{}
              bool IsFull()
	      {
		      return false;
	      }
              bool IsEmpty()
	      {
		    return(head==nullptr && tail==nullptr);
	      }
	      bool AddAtEnd(T ele)
		      {
				Node<T>* temp= new Node<T>;
				temp->setdata(ele);
				temp->setnext(nullptr);
				if(IsEmpty())
				{
					head=tail=temp;
				}
				else
				{
				 tail->setnext(temp);
				 tail=temp;
				}
		      }
	      void display()
	      {
		      Node<T>* t=new Node<T>;
		      t=head;
		      while(nullptr!=t)
		      {
			      cout<<t->getdata()<<"-->";
			      t=t->getnext();
		      }
		      cout<<"null";
		      
	      }
};
/*
int main()
{
	linklist<int> ll;
	ll.AddAtEnd(11);
	ll.AddAtEnd(22);
	ll.AddAtEnd(33);
	ll.display();
	return 0;
}

*/

