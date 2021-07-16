//sum of n natural numbers 
#include<stdio.h>
int main()
{
	int n,sum ;
	printf("\n Enter the number to calculate n interges sum ");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("sum = %d",sum);
	return 0;
}
