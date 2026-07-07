// 4. Count Even and Odd.

#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	int i,Even=0,Odd=0;
	
	
	for(i=1;i<argc;i++)
	{
		int a = atoi(argv[i]);
		if(a%2==0)
		Even++;
		else
		Odd++;
	}
	
	printf("Total Even:%d\n",Even);
	printf("Total Odd:%d",Odd);
	
}
