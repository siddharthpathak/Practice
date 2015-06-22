#include<iostream>
using namespace std;


struct node
{
	int data;
	node *left;
	node *right;

};

struct node* createnode(int x)
{
	struct node* node=new(struct node);
	node->data=x;
	node->left=NULL;
	node->right=NULL;
	return node;
}

struct node* insertnode(int x, struct node* root)
{
	
	if(root==NULL)
	{
	  return createnode(x);
	}
	if(x<root->data)
		root->left=insertnode(x,root->left);
	else if(x>root->data)
		root->right=insertnode(x,root->right);
	return root;
}

void print_tree(struct node* root)
{
	if(root!=NULL)
	{
		print_tree(root->left);
		print_tree(root->right);
				cout<<root->data<<endl;
	}
}
int main()
{
	int x;
	struct node* root=NULL;
	cout<<"Enter root element\n";
	cin>>x;
	root=createnode(x);
	while(true)
	{
	cout<<"Enter data to be added\n -1 to stop";
	cin>>x;
	if(x==-1)
		break;
	insertnode(x,root);
	}
	print_tree(root);


	

	return 1;
}
