// 5. Copy one file to another file.

#include<stdio.h>
void main()
{
	FILE *fptr1,*fptr2;
	char c;
	
	fptr1 = fopen("14(5)-1.txt","r");
	fptr2 = fopen("14(5)-2.txt","w");
	
	c = fgetc(fptr1);
	while( c != EOF )
	{
		fputc(c,fptr2);
		c=fgetc(fptr1);
	}
	
	printf("\n Content Copied To Another File");
	
	fclose(fptr1);
	fclose(fptr2);
}
