//Self Referential Pointer
#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *link;

}*LIST;
void main()
{
	int n,i;
	clrscr();
	LIST=(struct node*)malloc(n*sizeof(int));
	LIST->data=7;
	LIST->link='\0';
	printf("Data = %d\n",LIST->data);
	getch();
}
