//converts days to years weaks and days
#include<stdio.h>

void main()
{
	int y,w,d,d1,d2;
	printf("Enter the number of days: ");
	scanf("%d",&d1);
	y=d1/365;
	d2=d1%365;
	d=d2%7;
	w=(d1-(y*365))/7;
	printf("%d %d %d",y,w,d);
}
