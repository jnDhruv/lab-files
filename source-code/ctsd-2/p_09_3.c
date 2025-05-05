/*
Write a program to read a specific line from a file.
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char line[1000];
    int lineNumber, currentLine = 1;

    printf("Enter the line number to read: ");
    scanf("%d", &lineNumber);

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        if (currentLine == lineNumber) {
            printf("Line %d: %s", lineNumber, line);
            break;
        }
        currentLine++;
    }

    if (currentLine < lineNumber) {
        printf("Line %d not found in the file.\n", lineNumber);
    }

    fclose(file);
    return 0;
}