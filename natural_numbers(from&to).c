//  sum of n natural numbers using for loop and from number and to number 
#include<stdio.h>
int main()
{
	int from,to,i,sum=0 ;
	printf("Enter the number to find sum of n natural numbers\n  ");
	printf("Enter from number \n");
	scanf("%d",&from);
	printf("Enter to number \n");
	scanf("%d",&to);
	for(i=from;i<=to;i++)
	{
		sum=sum+i;
	}
	printf("\n sum = %d",sum);
	return 0;
}
