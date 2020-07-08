//Program to demonstrate Memory Requirement using Structure
#include<stdio.h>
#include<conio.h>
struct demo_struct
{
	int i;
	float f;
	char c;
};
void main()
{
	struct demo_struct a1;
	clrscr();
	printf("Size of integer = %d bytes",sizeof(a1.i));
	printf("\nSize of float = %d bytes",sizeof(a1.f));
	printf("\nSize of character = %d bytes",sizeof(a1.c));
	getch();
}