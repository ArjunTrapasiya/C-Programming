// 1. Create, open and close a file

#include<stdio.h>
void main()
{
	FILE *fptr;
	char ch;
	fptr = fopen("14_1.txt","w");
	putc('C',fptr);
	fclose(fptr);
}
