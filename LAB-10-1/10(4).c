#include <stdio.h>
void main()
{
   float Salary;
   float Bonus;
   printf("Enter The Value Of Salary=");
   scanf("%f",&Salary);
   printf("Enter The Value Of Bonus=");
   scanf("%f",&Bonus);
   float FinalSalary=Salary+Salary*Bonus/100;
   printf("%f",FinalSalary);	
}
