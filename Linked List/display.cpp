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

//void disprec(Node* head)
//{
//	if(head==0)
//	{
//		return ;
//	}
//	
//	cout<<head->val<<endl;
//	disprec(head->Next);
//	
//}

void disp(Node head)
{
	Node* temp= &head;
	for(int i=0;temp!=0;i++)
	{
		cout<<temp->val<<endl;
		temp=temp->Next;
	}
}
int main()
{
	Node a(20);
	Node b(30);
	Node c(40);
	Node d(50);
	
	a.Next=&b;
	b.Next=&c;
	c.Next=&d;
	d.Next=0;	
	
	Node* temp= &a;
	
//	cout<<temp->Next->Next->Next->val<<endl;
	
	
//	while(temp!=0)
//	{
//		cout<<temp->val<<endl;
//		temp=temp->Next;
//
//	}
//	return 0;
//	


 disp(a); 


}
