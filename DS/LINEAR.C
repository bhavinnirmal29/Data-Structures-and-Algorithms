//Linear search

#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],a,n,temp,count;
	int i,j;
	clrscr();
	printf("How many numbers you want to enter?\n");
	scanf("%d",&n);
	printf("Enter %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("The numbers in ascending order are::\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",num[i]);
		printf("\n");
	}
	printf("Enter the number to be found\n");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		if(a==num[i])
		{
			printf("Number found\n");
			printf("Location = %d",i+1);
			break;
		}
		else
		{
			count++;
		}
	}
	if(count==n)
	{
		printf("Number not found");
	}
	getch();
}