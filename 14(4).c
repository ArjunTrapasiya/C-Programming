// 4. Demonstrate functions fseek() and rewind ().

#include<stdio.h>
void main()
{

FILE *fptr;
int len=0;

fptr = fopen("14(4).txt","r");

fseek(fptr,0,2);
len = ftell(fptr);

printf("Size: %d bytes", len);
fclose(fptr);

}
