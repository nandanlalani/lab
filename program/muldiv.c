#include<stdio.h>

void main()
{
	int a,m,d;
	printf("Enter a number: \n");
	scanf("%d",&a);
	m=a<<1;
	printf("Multiply: %d",m);
	d=a>>1;
	printf("\nDivide: %d",d);
}
