#include<iostream>
using namespace std;


class Node{
	public:
	int val ;
	Node* Next;
	Node(int v)
	{
		val=v;
		Next=0;
	}
};

class Linkedl{
	public:
		Node* head;
		Node* tail;
		int size;
		Linkedl()
		{
			head=0;
			tail=0;
			size=0;	
		}
		void insert(int v)
		{
			Node * temp=new Node(v);
			if(size==0)
			{
				head=tail=temp();
			}
			else
			{
				tail->Next=temp;
				tail=temp;
			}
			size++;
		}	
		
		void display()
		{
			Node* temp= &head;
			for(int i=0;temp!=0;i++)
			{
				cout<<temp->val<<endl;
				temp=temp->Next;
			}
		}
		
		
		
};
int main()
{
	Linkedl ll;
	ll.insert(20);
	ll.insert(30);
	ll.display();
	
	return 0;	
}
