// Demonstrate nested structure.
#include<stdio.h>
struct basic
{
	char student_name[50];
	int roll_no;
	int fee;
};
struct Department
{
	char department_name[50];
	struct basic b;
};
int main()
{
	struct Department d;
	printf("Enter Student Name:");
	scanf("%s",d.b.student_name);
	printf("Enter Student Roll Number:");
	scanf("%s",d.b.roll_no);
	printf("Enter Fee:");
	scanf("%s",d.b.fee);
	printf("Enter Department:");
	scanf("%s",d.department);
	
	printf("\n");
	printf("Student Name:");
	printf("\nStudent Roll Number:");
	printf("\nStudent Fee:");
	printf("\nStudent Department:");
}
