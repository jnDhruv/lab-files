/*
Write a program to search for a specific word in a file and display its occurrences.
*/

//data.txt content:
/*
hello world
*/


#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char word[50], temp[50];
    int count = 0;

    printf("Enter the word to search: ");
    scanf("%s", word);

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    while (fscanf(file, "%s", temp) != EOF) {
        if (strcmp(temp, word) == 0) {
            count++;
        }
    }

    fclose(file);

    printf("The word '%s' was found %d time(s) in the file.\n", word, count);

    return 0;
}