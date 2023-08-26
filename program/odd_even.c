#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter a number: \n");
	scanf("&d",&a);
	b=a%2;
	if(b==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("the number is odd");
	}
}
