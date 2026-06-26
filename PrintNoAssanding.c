// Print Number to Asending Order
#include<stdio.h>
void main()
{
	int i,n,t,j,a[100];
	printf("Enter The Number:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("Asending Order:%d\n",a[i]);
	}	
}
