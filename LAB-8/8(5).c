#include <stdio.h>
	void main ()
{
  char ch1,ch2;
  printf("Enter a Uppercase character and lowercase character:");
  scanf("%c %c", &ch1, &ch2);
  printf("lowercase: %c\n", ch1 + 32);
  printf("Uppercase: %c\n", ch2 - 32); 
}

