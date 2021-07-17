// To check whether a number is a Prime Number or not !
#include<stdio.h>
int main()
{
	int i,n,div=0;
	printf("Enter Number ! \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		if(n%i==0)
		{
			div++;
		}	
	}
	if(div==2)
	{
		printf("Prime Number !");
	}
	else 
	{
		printf("Not Prime Number !");	
	}
		
}
