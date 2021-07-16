// To check whether it is as leap year or not 
#include<stdio.h>
int main()
{
	int year;
	printf("Enter Year !\n");
	scanf("%d",&year);
	if( (year%4==0 && year%100!=0) || (year%400==0) )
		printf("Leap Year !\n");
	else 
		printf("\nNot Leap Year !");
	return 0;
}

