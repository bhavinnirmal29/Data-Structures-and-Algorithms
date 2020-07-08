//stack push and pop
#include<stdio.h>
#include<conio.h>
#define n 10
int a[10],TOP=-1,numb;
void push(int x)
{
	printf("Push Function:\n");
	if(TOP>=10)
	{
		printf("OVERFLOW\n");
	}
	else
	{
		TOP++;
		a[TOP]=x;
		printf("The entered value has been stored in the stack\n");
	}
}//end of push

void pop()
{
	int numb;
	printf("Pop Function\n");
	if(TOP<0)
	{
		printf("UNDERFLOW\n");
	}
	else
	{
		numb=a[TOP];
		TOP--;
		printf("Pop operation performed on the value %d\n",numb);

	}
}//end of pop
void displayarr()
{
	int i;
	printf("Stack Elements : \n");
	if(TOP==-1)
	{
		printf("The stack is Empty\n");
	}
	for(i=0;i<=TOP;i++)
	{
		printf("%d\n",a[i]);
	}
}//end of displayarr()
void main()
{
	int i,numb;
	int choice;
	int number,ip;
	clrscr();
	for(i=1;i>0;i++)
	{
	printf("\n\nWhat do you want to perform?\n");
	printf("1.Push\n2.Pop\n3.Display array\n4.Exit\n");
	scanf("%d",&choice);
	if(choice==1)
		{
			printf("What number do you want to push?");
			scanf("%d",&number);
			push(number);
		}
	else if(choice==2)
		{
			pop();
		}
	else if(choice==4)
		{
			printf("End of program\n");
			break;
		}
	else if(choice==3)
		{
			displayarr(a);
		}
	else
		{
		printf("Invalid input...\n");
		}
	}//
getch();

}