//Recursion
#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int num;
	clrscr();
	printf("Enter a number to find factorial\n");
	scanf("%d",&num);
	printf("Factorial of %d = %d",num,fact(num));
	getch();
}
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));
	}
}

