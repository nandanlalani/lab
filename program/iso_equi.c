//tringle iso,scalene,equi
#include<stdio.h>

void main()
{
	int a1,a2,a3;
	printf("Enter the angle of tringles: \n");
	scanf("%d %d %d",&a1,&a2,&a3);
	int a=a1+a2+a3;
	if(a==180)
	{
	
		if(a1==a2 && a1==a3)
		{
			printf("The tringle is equilateral tringle");
		}
		else if(a1==a2 || a1==a3)
		{
			printf("The tringle is isosceles tringle");
		}
		else
		{	
			printf("The tringle is scalene tringle");
		}
    }
	else
	{
		printf("enter valid angles of tringle");
	}
}
