// 1. Create structure student with name, percentage and age. Read data of 5 students using array of structure. 
#include<stdio.h>
struct student
{
	char name[50];
	float percentage;
	int age;
};
int main()
{
	struct student s[50];
	int n,i;
	
	printf("Enter The Size Of Array:");
	scanf("%d",&n);
	
	printf("\n");
	
	printf("Enetr %d Students detail\n",n);
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter Student Name:");
		scanf("%s",s[i].name);
		printf("Enter Student percentage:");
		scanf("%f",&s[i].percentage);
		printf("Enter Student Age:");
		scanf("%d",&s[i].age);
		
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
	printf("\nStudent Name: %s",s[i].name);
	printf("\nStudent Percentage: %f",s[i].percentage);
	printf("\nStudent age: %d",s[i].age);
	
	printf("\n");
	}
	return 0;
}
