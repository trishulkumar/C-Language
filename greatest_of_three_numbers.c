// greatest of three numbers 
#include<stdio.h>
int main()
{
	int a=0,b=0,c=0 ;
	printf("Enter the three numbers by giving single space \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is big\n ",a);
	}
	else if (b>a && b>c)
	{
		printf("%d is big ",b);
	}
	else 
		printf("%d is big ",c);
	return 0;
}

