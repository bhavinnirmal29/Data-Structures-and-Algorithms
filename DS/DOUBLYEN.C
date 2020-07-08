//Doubly Linked List
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *flink;
	struct node *rlink;
}*p,*q,*ptr;
struct node *list=NULL;
int item;
void display();
void insert();
void deletion();
void main()
{
	int ch=0;
	clrscr();
	while(ch>=0)
	{
		printf("1-Insert\n2-Delete\n3-Display\n4-Exit\n");
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		if(ch==1)
		{
			insert();
		}
		else if(ch==2)
		{
		       deletion();
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			exit(0);
		}
		else
		{
			printf("Invalid Input\n");
		}
	}
	getch();
}
void insert()
{
	printf("Enter Element : ");
	scanf("%d",&item);
	if(list==NULL)
	{
		list=(struct node*)malloc(sizeof(struct node));
		list->data=item;
		list->flink=NULL;
		list->rlink=NULL;
		ptr=list->flink;
	}
	else
	{
		p=(struct node*)malloc(sizeof(struct node));
		p->data=item;
		p->flink=NULL;
		while(q)
		{
			q=q->flink;
		}
		q=p;
		p->rlink=q;
		ptr=ptr->flink;
	}
}

void display()
{
	q=list;
	while(q)
	{
		printf("%d\n",q->data);
		q=q->flink;
	}
}
void deletion()
{
	q=list;
	list=list->flink;
	list->rlink=NULL;
	free(q);
}