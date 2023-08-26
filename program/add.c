#include<stdio.h>

void main()
{
	int a=5,b=10;
	int c;
	c=a+b;
	printf("The addition of two number with out scanf: %d",c);
	
	printf("\nEnter two numbers: \n");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("Addition of two number with scanf: %d",c);
}
