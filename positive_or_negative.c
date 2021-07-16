// +Ve or -ve interger 
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number to check whether it is positve or negative number ");
	scanf("%d",&num);
	// +Ve or -ve interger 
	if(num>=0)
	{
		printf("Entered number is +ve number");
	}
	else if(num<0)
	{
		printf("Entered number is -ve number");
	}
	return 0;
}
