#include<stdio.h>
void main()
{
	char a;
	printf("Enter A Character:");
	scanf("%c",&a);
	if (a>='A' && a<='Z')
	{
		printf("This Character Is Upper Case");
	}
	else
	{
		if (a>='a' && a<='z')
		{
			printf("This Character Is Lower Case");
		}
		else
		{
		   if(a>='1' && a<='10')
			printf("This Character Is Digit Character");
		   else
		    printf("This Character Is Special Character");	
		}
	
	}
}
