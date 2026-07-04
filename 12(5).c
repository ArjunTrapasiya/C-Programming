// 5. Allocate dynamic memory for a structure variable. 

#include<stdio.h>

struct sum{
    float *p;
	float *q;
};
void main()
{

    struct sum s;
	
	s.p=(float*)calloc(100,4);
	s.q=(float*)calloc(100,4);
	
	printf("Enter The 1st Number:");
	scanf("%f",&s.p[0]);
	printf("Enter The 2nd Number:");
	scanf("%f",&s.q[0]);
	printf("Sum Of Two Number:%f\n",s.p[0]+s.q[0]);
	
	free(s.p);
	free(s.q);
	
}
