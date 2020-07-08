//Push Pop
#include<stdio.h>
#include<conio.h>
int TOP=-1,item,n=10;
int a[10];
int push(int item)
{
	if(TOP==n-1)
	{
	       return(printf("Overflow"));
	}
	else
	{
		TOP=TOP+1;
		a[TOP]=item;
		return(a[TOP]);
	}

}
int pop()
{
	if(TOP<0)
	{
	       return(printf("Underflow\n"));
	}
	else
	{
		item=a[TOP];
		TOP=TOP-1;
		return 1;
	}
}
void display_stack()
{
	int i;
	printf("Stack Elements : \n");
	if(TOP<0)
	{
		printf("Stack is Empty\n");
	}
	for(i=0;i<=TOP;i++)
	{
		printf("%d\n",a[i]);
	}
}
void main()
{
	int choice=0;
	clrscr();
	while(1)
	{
		printf("Enter the operation to be performed\n");
		printf("1-PUSH\n");
		printf("2-POP\n");
		printf("3-DISPLAY STACK\n");
		printf("4-EXIT\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter the element to be inserted\n");
			scanf("%d",&item);
			push(item);

		}
		else if(choice==2)
		{
			pop();
		}
		else if(choice==3)
		{
			display_stack();
		}
		else
		{
			exit();
		}
	}
	getch();
}