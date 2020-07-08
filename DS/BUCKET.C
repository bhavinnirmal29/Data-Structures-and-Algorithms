#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void displayArray(int arr[],int size)
{
	int i;
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
		printf("\t");
	}
}

//Returns the number of digits in the largest number from an array
int countMaxDigits(int arr[],int size)
{
	int digits=1,i;
	int max=arr[0];
	for(i=1;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	digits=(int)floor(log10(fabs(max)))+1;
	return digits;
}

void bucketSort(int arr[],int size,int d)
{
	int b[20],rem,i,j,k,ch,tens;
	ch=0;
	tens=1;
	while(ch<d)
	{
		j=0;
		k=0;
		while(k!=10)
		{
			i=0;
			while(i<size)
			{
				rem=(arr[i]/tens)%10;
				if(rem==k)
				{
					b[j++]=arr[i];
				}
				i++;
			}
			k++;
		}
		for(i=0;i<size;i++)
		{
			arr[i]=b[i];
		}
		printf("\nPass %d",ch+1);
		printf(":\t");
		displayArray(arr,size);
		tens*=10;
		ch++;
	}

}

void main()
{
	int a[20],n,i,digits;
	clrscr();
	printf("How many numbers do you want to enter?\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("INPUT:\n");
	displayArray(a,n);
	digits=countMaxDigits(a,n);
	bucketSort(a,n,digits);
	getch();
}