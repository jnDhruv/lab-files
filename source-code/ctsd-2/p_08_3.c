/*
Write a program to append text to an existing file.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char input[200];

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "a");

    if (file == NULL)
    {
        printf("File cannot be openend");
        return 1;
    }

    printf("Enter text you want to append to the file: \n");
    getchar();
    fgets(input, 200, stdin);

    fprintf(file, "%s", input);

    fclose(file);

    return 0;
}

/*
OUTPUT:

Enter the file name: hello.txt
Enter text you want to append to the file:
and this is the second line

hello.txt
This is a demo text file
and this is the second line

*/