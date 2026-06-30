// 5. Sort array using pointers.
#include<stdio.h>
void main()
{
	int n,j,i,arr[n],*ptr,temp;
	ptr=arr;
	
	printf("Enter The Number:");
	scanf("%d",&n);
	
	printf("\nEnter The %d Number:\n",n);
	
	for(i=0;i<n;i++)
	{
	 scanf("%d",(ptr+i));	
	}
	
	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
 		if(*(ptr+i) > *(ptr+j))
		{
			temp=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=temp;
		}
	  }
	}
	
	printf("\n");
	for(i=0;i<n;i++)
	{
	 printf("%d\n",*(ptr+i));	
	}
}
