 // Add two numbers using a user-defined function.
 #include<stdio.h>
 int sum(int a,int b);
 void main()
 {
 	int a,b,Total;
 	printf("Enter A:");
 	scanf("%d",&a);
	printf("Enter B:");
 	scanf("%d",&b);
 	Total=sum(a,b);
 	printf("Sum of A and B=%d",Total);
 }
  int sum (int a,int b)
  {
  	int sum;
  	sum=a+b;
  	return sum;
  }
  
  
