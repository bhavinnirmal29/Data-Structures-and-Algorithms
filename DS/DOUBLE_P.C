//Double Pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,i=7,j=2;
	int **aptr;
	clrscr();
	p=&i;
	printf("i =%d \n",*p);
	p=&j;
	printf("j =%d \n ",*p);
	aptr=&p;
	printf("\np = %d",**aptr);
	getch();
}
