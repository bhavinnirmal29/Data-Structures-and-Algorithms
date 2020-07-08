//Dynamic Memory Allocation
#include<stdio.h>
#include<alloc.h>
#include<conio.h>
void main()
{

	int *a,n;
	int i;
	clrscr();
	printf("How many Elements you want to enter?\n");
	scanf("%d",&n);
	a=malloc(n*sizeof(int));
	printf("Enter %d Elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the Elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",*(a+i));
	}
	getch();
}