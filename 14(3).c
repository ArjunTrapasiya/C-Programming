// 3. Count chars, spaces, tabs and new lines in a file.
#include <stdio.h>

void main()
{
    FILE *fptr;
    char ch;
    int chars = 0, spaces = 0, tabs = 0, newlines = 0;

   
    fptr = fopen("14_3.txt", "r");

    if (fptr == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    
    while ((ch = fgetc(fptr)) != EOF)
    {
        chars++;

        if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            newlines++;
    }

    fclose(fptr);

   
    printf("Total Characters = %d\n", chars);
    printf("Spaces = %d\n", spaces);
    printf("Tabs = %d\n", tabs);
    printf("New Lines = %d\n", newlines);
}
