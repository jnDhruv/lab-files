/*
Write a program to reverse the contents of a file and save it in another file.
*/

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;
    long length;

    src = fopen("input.txt", "r");

    dest = fopen("output.txt", "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    fseek(src, 0, SEEK_END);
    length = ftell(src);

    for (long i = 1; i <= length; i++) {
        fseek(src, -i, SEEK_END);
        ch = fgetc(src);
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File content reversed and saved to output.txt\n");

    return 0;
}