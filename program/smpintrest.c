#include<stdio.h>

void main()
{
	float p,r,i,t;
	printf("Enter the principle amount: \n");
	scanf("%f",&p);
	printf("Enter the rate of intrest: \n");
	scanf("%f",&r);
	printf("Enter the time period: \n");
	scanf("%f",&t);
	
	i=(p*r*t)/100;
	printf("The simple intrest is: %f",i);
}
