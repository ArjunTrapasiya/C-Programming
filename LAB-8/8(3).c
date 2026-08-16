#include <stdio.h>

void main ()
{
	char a;
	printf("Enter a character:");
	scanf("%c", &a);
	int ascii_value = (int)a;
	printf("%d", ascii_value);
}
