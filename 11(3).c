 // 3. Find the length of the string using Pointers.
#include <stdio.h>

int main()
{
    char str[100],*ptr;
    int length = 0;

    printf("Enter a string: ");
    gets(str);

    ptr = str; 

    while(*ptr != '\0')
    {
        length++;
        ptr++; 
    }

    printf("Length of the string = %d", length);

    return 0;
}
