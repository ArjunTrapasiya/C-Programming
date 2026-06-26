// Reverse String Without In Built Function
#include<stdio.h>
void main()
{
	char str[100],str2[100];
	int i,j=0,len=0;
	printf("Enter The String:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1;i>=0;i--,j++)
	{
		str2[j]=str[i];
	}
	str2[j]='\0';
	puts(str2);
}
