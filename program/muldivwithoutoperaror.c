//multiply divide two number without multiply of divide operator
#include<stdio.h>

void main()
{
	int a,b,c,d=0;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	int i,j;
	
	printf("Multiply: ");
	for(i=1;i<=b;i++)
	{
		d=d+a;
	}
	printf("%d",d);
	int e=a;
	printf("\nDivide: ");
	for(j=0;e>0;j++)
	{
		e=e-b;
		if(e<0)
		{
			break;
		}
	}
	int f=a%b;
	printf("%d",j);
	printf(" The remiander is: %d",f);
	
}
