// bigest of two
#include<stdio.h>
void main()
{
	int a,b;
	int c;
	printf("enter two numbers: \n");
	scanf("%d %d",&a,&b);
	
	c=(a>b)?a:b;
	printf("the larger number is: %d",c);
}
