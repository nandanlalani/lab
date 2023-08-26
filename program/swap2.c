#include<stdio.h>

void main()
{
	int a,b,c;
    printf("Enter two number to be swapped: ");
    scanf("%d %d",&a,&b);
    int d;
    printf("1.Swap with third variabble\n2.Swap eithout third variable\n");
    scanf("%d",&d);
    
    if(d==1)
    {
    	c=a;
    	a=b;
    	b=c;
    	printf("%d %d",a,b);
	}
	else if(d==2)
	{
		a=a+b;
		b=a-b;
		a=a-b;
		printf("%d %d",a,b);
	}
	else
	{
		printf("Enter valid option");
	}
}
