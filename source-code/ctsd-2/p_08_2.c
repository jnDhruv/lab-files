/*
Write a program to read and display the contents of a file.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char ch[100];

    printf("Enter the name of file: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("Content of the file: \n");

    while (fgets(ch, 100, file))
    {
        printf("%s", ch);
    }

    fclose(file);

    return 0;
}

/*
OUTPUT:

Enter the name of file: hello.txt
Content of the file:
This is a demo text file

hello.txt
This is a demo text file

*/