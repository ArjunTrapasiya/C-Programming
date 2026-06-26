#include<stdio.h>

void main()
{
 	int a[50],i,j,no,pos;
 	printf("Enter 10 num:");
	 for(i=0;i<10;i++){
	 	scanf("%d",&a[i]);
	 }	
	  for(i=0;i<10;i++){
	 	printf("%d",a[i]);
	 }
	 printf("\nenter position:");
	 scanf("%d",&pos);
	 printf("\nenter new no:");
	 scanf("%d",&no);
	 
	 for(i=9;i>=pos-1;i--){
	 	a[i+1]=a[i];
	 }
	 a[pos]=no;
	 
	  for(i=0;i<=10;i++){
	 	printf("\n%d",a[i]);
	 } 
}
