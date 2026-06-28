// Demonstrate the difference between structure and union.
#include<stdio.h>
struct employe
{
	char employe_name[50];
	int employe_id;
};
union Employe
{
	char employe_name[50];
	int employe_id;
};
int main()
{
	struct employe s;
	union Employe u;
	
	// Structure
	printf("Enter Employe Name:");
	scanf("%s",s.employe_name);
	printf("Enter Employe Id:");
	scanf("%d",&s.employe_id);
	
	printf("\n");
	printf("Name:%s",s.employe_name);
	printf("\nId:%d",s.employe_id);
	
	//Union
	printf("\n");
	printf("Enter Employe Name:");
	scanf("%s",u.employe_name);
	printf("Enter Employe Id:");
	scanf("%d",&u.employe_id);
	
	printf("\n");
	printf("Name:%s",u.employe_name);
	printf("\nId:%d",u.employe_id);
	
	return 0;
}
