#include"TreeNode.cpp"
#include<stdexcept>
using namespace std;
template<class T>
class BST
{
	private:
		TreeNode<T>* root;
	public:
		BST()
		{
			root=nullptr;
		}
		~BST()
		{
			Delete(root);
		}
		TreeNode<T> *getRootNode()
		{
			return root;
		}
		void Delete(TreeNode<T> * temp)
		{
			if(temp!=nullptr)
			{
				Delete(temp->getLeft());
				Delete(temp->getRight());
			}
			delete temp;
		}
		void PreOrder(TreeNode<T> *temp)
		{
			if(temp!=nullptr)
			{
			cout<<temp->getData()<<"\t";
			PreOrder(temp->getLeft());
			PreOrder(temp->getRight());
			}
		}
		void InOrder(TreeNode<T> *temp)
		{
			if(temp!=nullptr)
			{
			InOrder(temp->getLeft());
			cout<<temp->getData()<<"\t";
			InOrder(temp->getRight());
			}
		}
		void PostOrder(TreeNode<T> *temp)
		{
			if(temp!=nullptr)
			{
			PostOrder(temp->getLeft());
			PostOrder(temp->getRight());
			cout<<temp->getData()<<"\t";
			}
		}
		void Insert(T iData)
		{
			TreeNode<T> *t = new TreeNode<T>;
			t->setLeft(nullptr);
			t->setData(iData);
			t->setRight(nullptr);
			
			if(root == nullptr)
			{
				root=t;
			}
			else
			{
				TreeNode<T> *current = root;
				while(current!=nullptr)
				{
					if(iData==current->getData())
					{
						throw runtime_error("Duplicat values");
					}
					if(iData<current->getData())
					{
						if(current->getLeft()==nullptr)
						{
							current->setLeft(t);
							return;
						}
						else
						{
							current=current->getLeft();
						}
					}
					else
					{
						if(current->getRight()==nullptr)
						{
							current->setRight(t);
							return;
						}
						else
						{
							current=current->getRight();
						}
					}
				}
			}
		}
};
int menudriven()
{
	int choice;
	cout<<"\n********************MENU******************"<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"1.Insert"<<endl;
	cout<<"2.InOrder"<<endl;
	cout<<"3.PreOrder"<<endl;
	cout<<"4.PostOrder"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	return choice;
}

int main()
{
	BST<int> B1;
	int choice,a;
	while((choice=menudriven())!=0)
	{
		switch(choice)
		{
			case 1:{
				        cout<<"Enter an element : ";
					cin>>a;
					B1.Insert(a);
			       }break;
			case 2:{
				       B1.InOrder(B1.getRootNode());
			       }break;
			case 3:{
				       B1.PreOrder(B1.getRootNode());
			       }break;
			case 4:{
				       B1.PostOrder(B1.getRootNode());
			       }break;
			default:cout<<"Invalid choice"<<endl;
				break;
		}
	}
}







			

				
		
	
