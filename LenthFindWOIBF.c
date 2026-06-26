// Find Lenth Without In Built Function
#include<stdio.h>
void main()
{
	char str[100];
	int i,len=0;
	printf("Enter The String:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("Lenth:%d",len);
}
