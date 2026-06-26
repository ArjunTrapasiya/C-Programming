#include<stdio.h>
void main()
{
	char str[100],str2[100];
	int i,len=0;
	printf("Enter The String:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		str2[i]=str[i];
	}
	printf("Copy String Given Below:\n");
	puts(str2);
}
