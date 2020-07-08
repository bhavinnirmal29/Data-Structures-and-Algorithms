//Doubly Linked List
#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *flink;
	struct node *rlink;
}*p,*q,*ptr;
struct node *list=NULL;
void insert();
void deletion();
void main()
{
	int ch=1;
	clrscr();
	switch(ch)
	{
		printf("1-Insert\n2-Delete\n3-Display\n4-Exit\n");
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		case 1:
		{
			insert();
			break;
		}
		case 2:
		{
			deletion();
			break;
		}
		case 3:
		{
			display();
		}
		case 4:
		{
			exit(0);
		}
		default:
		{
			printf("Invalid Input\n");
		}
	}
	getch();
}
void insert()
{
