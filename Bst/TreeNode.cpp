#include<iostream>
using namespace std;
template<class T>
class TreeNode
{
	private:
		int data;
		TreeNode<T> *left;
		TreeNode<T> *right;
	public:
		void setData(T temp)
		{
			data=temp;
		}
		T getData()
		{
			return data;
		}
		void setLeft(TreeNode<T> *temp)
		{
			left=temp;
		}
		TreeNode<T>* getLeft()
		{
			return left;
		}
		void setRight(TreeNode<T> *temp)
		{
			right=temp;
		}
		TreeNode<T>* getRight()
		{
			return right;
		}
};

		

