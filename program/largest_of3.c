#include<stdio.h>

void main()
{
	int a,b,c;
	printf("Enter three number to find the largest of them: \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("The largest number is: %d",a);
		}
		else
		{
		    printf("The largest number is: %d",c);	
		}
	}
	else if(b>a)
	{
		if(b>c)
		{
			printf("The latgest number is: %d",b);
		}
		else
		{
			printf("The largest number is: %d",c);
		}
	}	
	
}
