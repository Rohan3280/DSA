#include<iostream>
using namespace std;
class node{
	public:
		int val;
		node* left;
		node* right;
		node(int x)
		{
			val=x;
			this->left=0;
			this->right=0;
		}
		
};

int levels(node * temp)
{
	if(temp==NULL)
	{
		return 0;
	}
	
	int nol;
	return nol=1+max(levels(temp->left),levels(temp->right));
	
}

void dispt(node* root)
{
	if(root== NULL)
	{
		return;
	}
	cout<<root->val<<endl;
	dispt(root->left);
	dispt(root->right);
}

int btsum(node * temp)
{
	if(temp==NULL)
	{
		return 0;
	}
	int sum =0;
    return sum=temp->val+btsum(temp->left)+btsum(temp->right);

}

int main()
{
	
	node*a =new node(1);
	node*b =new node(2);
	node*c =new node(3);
	node*d =new node(4);
	node*e =new node(5);
	node*f =new node(6);
	node*g =new node(7);
	node*h =new node(8);	
	
	a->left=b;
	a->right=c;
	b->left=d;
	b->right=e;
	c->left=f;
	c->right=g;
	d->left=h;
	cout<<levels(a)<<endl;
	
	return 0;
}
