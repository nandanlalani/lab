#include<stdio.h>

void main()
{
	int a;
	printf("Enter a number: \n");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("The number entered is zero");
	}
	else if(a>0)
	{
		printf("The number entered is positive");
	}
	else if(a<0)
	{
		printf("The number entered is negative");
	}
}
