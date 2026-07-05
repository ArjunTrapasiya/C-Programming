// 3. Define a function like Macro that should use printf. Define Macro PRINT to print the given integer argument.
#include<stdio.h>
#define sum(a,b)a+b
void main()
{
	int a=10;
	int b=32;
	printf("Total=%d",sum(a,b));
}
