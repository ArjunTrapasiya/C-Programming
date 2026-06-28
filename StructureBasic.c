// Create, declare and initialise the structure employee. 
#include<stdio.h>
struct employe
{
    char employe_name[50];
    int employe_id;
	int employe_salary;
};
void main()
{
	struct employe e;
	printf("Enter Employe Name:");
	scanf("%s",&e.employe_name);
	printf("\nEnter Employe Id:");
	scanf("%d",&e.employe_id);
	printf("\nEnter Employe Salary:");
	scanf("%d",&e.employe_salary);
	
	printf("\nEmploye Id:%d",e.employe_id);
	printf("\nEmploye Name:%s",e.employe_name);
	printf("\nEmploye Salary:%d",e.employe_salary);
	
}
