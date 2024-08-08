class Node{
	public:
	int val ;
	Node* Next;
	Node(int v)
	{
		val=v;
	}
};

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
	
	Node *temp= new Node(10);
	*temp->Next=a;
		
	for(int i=0;temp->Next==0;i++)
	{
		cout<<temp->val<<endl;
		temp=temp->Next;
	}
	return 0;
	
}
