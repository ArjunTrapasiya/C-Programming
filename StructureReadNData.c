// 3. Create structure student with name, percentage and age. Read data of N students using array of structure. Arrange student data alphabetically and print all data. 
#include<stdio.h>
struct student
{
	char name[50];
	float percentage;
	int age;
};
int main()
{
	struct student s[50],temp;
	int n,i,j;
	
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
	}
	printf("afaff");
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
	printf("Comp");
	
	for(i=0;i<n;i++)
	{
	 printf("\nStudent Name: %s",s[i].name);
	 printf("\nStudent Percentage: %f",s[i].percentage);
	 printf("\nStudent age: %d",s[i].age);
	}
	return 0;
}

