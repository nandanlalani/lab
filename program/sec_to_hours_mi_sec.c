//convert seconds to hour and minutes and seconds
#include<stdio.h>

void main()
{
    int h,m,s,s1;
	printf("Enter the Seconds: ");
	scanf("%d",&s1);
	s=s1%60;
	h=s1/3600;
	m=(s1-(h*3600))/60;
	printf("%d %d %d",h,m,s);	
}
