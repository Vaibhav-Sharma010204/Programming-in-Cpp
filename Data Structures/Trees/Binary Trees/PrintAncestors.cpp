#include<iostream>
#include<queue>


using namespace std;
//Program to print all the ancestors of a given node in a tree

struct BinaryTreeNode{
	int data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;
};


bool FindAncestors(struct BinaryTreeNode *root,int data)
{
	//base condition
	if(root==NULL)
		return false;
	

		if(root->data == data)
		{	
			return true;
		}
		
		//Otherwise, recur down to the left and right subtrees
		
		bool left = FindAncestors(root->left,data);
		bool right = FindAncestors(root->right,data);
			
		if(left || right) 
		{
			cout<<root->data<<" ";
			
		}
		
			
		
}


int LevelOrderAncestors(struct BinaryTreeNode *root,int data)
{
	if(!root) return 0;
	
	queue<BinaryTreeNode *> q;
	BinaryTreeNode *temp,*temp1;
	vector<int> v;
	
	
	q.push(root);
	v.push_back(root->data);
	
	while(!q.empty())
	{
		temp = q.front();
		q.pop();

			if(temp->left->data==data || temp->right->data==data)
			{
			
				v.push_back(temp->data);
				vector<int>::iterator i;
				for(i=v.begin();i!=v.end();i++)
				{
					cout<<*i<<" ";	
				}
				return 1;	
			}
		
		
		if(temp->left)	q.push(temp->left);
			
		if(temp->right) q.push(temp->right);
		
	
		
	}
	
	return 0;
}

void Insert( struct BinaryTreeNode **root,int data)
{
	struct BinaryTreeNode *new_node = new BinaryTreeNode();
	struct BinaryTreeNode *temp;
	queue<BinaryTreeNode *> q;
	new_node->data = data;
	new_node->left=NULL;
	new_node->right=NULL;
	
	if(*root==NULL)
	{
		*root = new_node;
		return;
	}
	
	q.push(*root);
	
	while(!q.empty())
	{
		temp  = q.front();
		q.pop();
		
		if(temp->left==NULL)
		{
			temp->left = new_node;
			return;
			
			
		}
		
		else
		{
			q.push(temp->left);
		}
			
		if(temp->right==NULL)
		{
			temp->right = new_node;
			return;
			
		}	
		
		else
		{
			q.push(temp->right);
		}
	}
	
}


 

int main()
{
	
	struct BinaryTreeNode *root1=NULL;
	
	Insert(&root1,1);
	Insert(&root1,2);
	Insert(&root1,3);
	Insert(&root1,4);
	Insert(&root1,5);
	Insert(&root1,6);
	Insert(&root1,7);
	Insert(&root1,8);
	Insert(&root1,9);
	Insert(&root1,10);
	Insert(&root1,11);

	FindAncestors(root1,11);
	
	cout<<endl;
	
	LevelOrderAncestors(root1,11);
	return 0;
}
