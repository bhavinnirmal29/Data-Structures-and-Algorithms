//Program to demonstrate Memory Requirement
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1;
	float f=2.1;
	char c='B';
	clrscr();
	printf("Size of integer = %d bytes",sizeof(a));
	printf("\nSize of float = %d bytes",sizeof(f));
	printf("\nSize of character = %d bytes",sizeof(c));
	getch();
}