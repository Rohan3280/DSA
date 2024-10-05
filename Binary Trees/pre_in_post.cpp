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
	//to print the no of levels 
	if(temp==NULL)
	{
		return 0;
	}
	
	int nol;
	return nol=1+max(levels(temp->left),levels(temp->right));
	
}

void dispt(node* root)
{
	//to display in preorder
	if(root== NULL)
	{
		return;
	}
	cout<<root->val<<endl;
	dispt(root->left);
	dispt(root->right);
}
void preorder(node * root)
{
	if(root==0)
	{
		return;
	}
	cout<<root->val<<endl;
	preorder(root->left);
	preorder(root->right);
}
void inorder(node * root)
{
	if(root==0)
	{
		return;
	}
	preorder(root->left);
	cout<<root->val<<endl;
	preorder(root->right);
}
void postorder(node * root)
{
	if(root==0)
	{
		return;
	}
	preorder(root->left);
	preorder(root->right);
	cout<<root->val<<endl;
}

int btsum(node * temp)
{
	//to print sum of btree
	if(temp==NULL)
	{
		return 0;
	}
	int sum =0;
    return sum=temp->val+btsum(temp->left)+btsum(temp->right);

}

void nlevele(node* root,int lev,int tar)
{
	//to print elements of nth level
	if(root==0)
	{
		return;
	}
	if(lev==tar)
	{
		cout<<root->val<<endl;
		return;
	}
	nlevele(root->left,lev+1,tar);
	nlevele(root->right,lev+1,tar);
	
}

int main()
{
	//our elements as nodes
	node*a =new node(1);
	node*b =new node(2);
	node*c =new node(3);
	node*d =new node(4);
	node*e =new node(5);
	node*f =new node(6);
	node*g =new node(7);
	node*h =new node(8);	
	//joint to make a tree
	a->left=b;
	a->right=c;
	b->left=d;
	b->right=e;
	c->left=f;
	c->right=g;
	d->left=h;
	//calling functions
	nlevele(a,0,1);
	
	return 0;
}
