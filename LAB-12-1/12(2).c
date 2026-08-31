#include<stdio.h>
void main()
{ float bs;
 float GrossSalary;
  printf("Enter Basic Salary=");
  scanf("%f",&bs);
  if (bs>=10000 && bs<=20000)
 {GrossSalary=bs+(bs*0.2)+(bs*0.8);
  printf("GrossSalary=%f",GrossSalary);}
  if (bs>=20000 && bs<=30000)
  {GrossSalary=bs+(bs*0.25)+(bs*0.9);
   printf("GrossSalary=%f",GrossSalary);}
  if (bs>=30000)
  {GrossSalary=bs+(bs*0.3)+(bs*0.95);
   printf("GrossSalary=%f",GrossSalary);}	
}
