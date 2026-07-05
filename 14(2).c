// 2. Demonstrate functions fprintf(), fscanf(), fputc(), fgetc()

#include <stdio.h>

void main()
{
    FILE *fptr;
    int i, n;
    char ch;

  
    fptr = fopen("14_2.txt", "w");

    
    fprintf(fptr, "Numbers:\n");

    
    for(i = 1; i <= 5; i++)
    {
        fprintf(fptr, "%d ", i);  
    }

    fputc('\n', fptr);  
    fputc('A', fptr);   

    fclose(fptr);

   
    fptr = fopen("14_2.txt", "r");

    printf("Reading from file:\n");


    fscanf(fptr, "Numbers:\n");
    for(i = 1; i <= 5; i++)
    {
        fscanf(fptr, "%d", &n);
        printf("%d ", n);
    }

    printf("\n");

    while((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fptr);

   
}
