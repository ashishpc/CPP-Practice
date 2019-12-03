#include"Node.h"

int main()
{
	LinkedList<int> *ll=new LinkedList<int>;
	ll->AddToTail(11);
	/*ll.AddToTail(22);
	ll.AddToTail(33);
	ll.AddToTail(44);*/
	ll->DisplayAll();
	return 0;
}
