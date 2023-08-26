//leap year
#include<stdio.h>

void main()
{
	int y,y1;
	printf("Enter a number: \n");
	scanf("%d",&y);
	y1=y%4;
	if(y1==0)
	{
		printf("It is a leap year");
	}
	else
	{
		printf("It is a non leap year");
	}
}
