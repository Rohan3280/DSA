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
				head=tail=temp;
			}
			else
			{
				tail->Next=temp;
				tail=temp;
			}
			size++;
		}
		
		void insertathead(int v)
		{
			Node * temp=new Node(v);
			if(size==0)
			{
				head=tail=temp;
			}
			else
			{
				temp->Next=head;
				head=temp;
			}
			size++;
		}	
		
		void display()
		{
			Node* temp= head;
			for(int i=0;temp!=0;i++)
			{
				cout<<temp->val<<endl;
				temp=temp->Next;
			}
		}
		
		void delend()
		{
			Node* temp=head;
			while(true){
			
	
			if(temp->Next==tail)
			{
				temp->Next=0;
				tail=temp;
				break;
			}
			temp=temp->Next;
		}
	}
		
		
};
int main()
{
	Linkedl ll;
	ll.insert(20);
	ll.insert(30);
	ll.insertathead(23);
	ll.insertathead(33);
	ll.display();
	ll.delend();
	cout<<"		"<<endl;
	ll.display();
	return 0;	
}
