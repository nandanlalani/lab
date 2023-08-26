#include<stdio.h>

void main()
{
	char b;
	printf("Enter a letter: \n");
	scanf("%c",&b);
	
	if(b=='a'||b=='A'||b=='E'||b=='e'||b=='I'||b=='i'||b=='o'||b=='O'||b=='u'||b=='U')
	{
		printf("The letter entered is vowel");
	}
	else
	{
		printf("The letter entered is consonant");
	}
}
