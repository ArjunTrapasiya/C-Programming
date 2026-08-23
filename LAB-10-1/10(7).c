#include <stdio.h>
void main()
{ float discount,cost,finalcost,prc;
  printf("enter the value of discount=");
  scanf("%f",&discount);
  printf("enetr the value of cost=");
  scanf("%f",&cost);
  finalcost=cost-discount;
  prc=finalcost/cost*100;
  printf("%f",prc);	
}
