//Tower Of Hanoi
#include<stdio.h>
#include<conio.h>
void move(int n,char source,char dest,char spare);
void main()
{
	int n;
	clrscr();
	printf("Enter the number of rings : ");
	scanf("%d",&n);
	move(n,'A','C','B');
	getch();
}
void move(int n,char source,char dest,char spare)
{
	if(n==1)
	{
		printf("Move From %c to %c\n",source,dest);
	}
	else
	{
		move(n-1,source,spare,dest);
		move(1,source,dest,spare);
		move(n-1,spare,dest,source);
	}
}