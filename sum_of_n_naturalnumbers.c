//  sum of n natural numbers using for loop 
#include<stdio.h>
int main()
{
	int i,n ,sum=0 ;
	printf("Enter the number to find sum of n natural numbers\n  ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n sum = %d",sum);
	return 0;
}
