#include<stdio.h>
int main()
{
	int i;
	printf("Enter the number to check whether the number is even or not\n ");
	scanf("%d",&i);
	if(i%2==0)
	{
		printf("%d is Even Number.\n",i);
	}
	else 
	printf("%d is a Odd Number.\n",i);
	return 0;
}
