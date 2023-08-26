//odd even with bitwise
#include<stdio.h>

void main()
{
	int num;
	printf("Enter a number to check odd even: \n");
	scanf("%d",&num);
	
	if((num & 1)==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
}
