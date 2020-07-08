#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *lnode;
	struct node *rnode;
}*root;
void main()
{
	struct node *getnode();
	void initnode(struct node*,int);
	void preorder(struct node*);
	void inorder(struct node*);
	void postorder(struct node*);
	clrscr();
	root=getnode();
	initnode(root,2);			//2 is depth
	printf("\nPreorder : \n");
	preorder(root);
	printf("\nInorder : \n");
	inorder(root);
	printf("\nPostorder : \n");
	postorder(root);
	getch();
}
struct node *getnode()
{
	return(struct node*)malloc(sizeof(struct node));
}
void initnode(struct node *root,int n)
{
	if(n>=0)
	{
		printf("Enter Data : ");
		scanf("%d",&(root->data));
		root->lnode=getnode();
		root->rnode=getnode();
		initnode(root->lnode,n-1);
		initnode(root->rnode,n-1);
	}
	else
	{
		root->lnode=NULL;
		root->rnode=NULL;
	}
}						//End of function
void preorder(struct node *root)
{
	if(root->lnode!=NULL&root->rnode!=NULL)
	{
		printf("Data = %d",root->data);
		preorder(root->lnode);
		preorder(root->rnode);
	}
}
void inorder(struct node *root)
{
	if(root->lnode!=NULL&root->rnode!=NULL)
	{
		inorder(root->lnode);
		printf("Data = %d ",root->data);
		inorder(root->rnode);
	}
}
void postorder(struct node *root)
{
	if(root->lnode!=NULL&root->rnode!=NULL)
	{
		postorder(root->lnode);
		postorder(root->rnode);
		printf("Data = %d ",root->data);
	}
}




