/*
Write a program to create a file and write user input into it.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[50], userInput[100];
    
    printf("Enter the filename to create: ");
    scanf("%s", filename);

    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error opening the file");
        return 1;
    }

    printf("Enter text to write inside the file (max 500 characters): \n");
    getchar();
    fgets(userInput, sizeof(userInput), stdin);

    fprintf(file, "%s", userInput);

    fclose(file);

    return 0;
}

/*
OUTPUT:

Enter the filename to create: hello.txt
Enter text to write inside the file (max 500 characters): 
This is a demo text file

hello.txt
This is a demo text file

*/