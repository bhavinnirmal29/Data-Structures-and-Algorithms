#include<stdio.h>
#include<conio.h>
int ITEM,FRONT,REAR,QUEUE[10];
void insert(int ITEM)
{
	if(FRONT==1 && REAR==10 || FRONT==REAR+1)
	{
		printf("OverFlow Condition");
	}

	if(FRONT==NULL)
	{
		FRONT=1;
		REAR=1;
	}
	else
	{
		REAR=REAR+1;
	}
	QUEUE[REAR]=ITEM;
}
void delet()
{
	if(FRONT==NULL)
	{
		printf("UnderFlow Condition");
	}
	QUEUE[FRONT]=ITEM;
	if(FRONT==REAR)
	{
		FRONT=NULL;
		REAR=NULL;
	}
	else if(FRONT==10)
	{
		FRONT=1;
	}
	else
	{
		FRONT=FRONT+1;
	}
}
void main()
{
	int i;
	clrscr();
	insert(2);
	insert(4);
	insert(7);
	delet();
	insert(10);
	insert(1);
	printf("Elements of queue\n");
	for(i=1;i<=REAR;i++)
	{
		printf("%d\n",QUEUE[i]);
	}
	delet();
	printf("Elements of QUEUE\n");
	for(i=1;i<=REAR;i++)
	{
		printf("%d\n",QUEUE[i]);
	}
	getch();
}
