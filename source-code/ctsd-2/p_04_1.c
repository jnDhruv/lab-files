/*
Write a program to demonstrate an array of pointers to strings.
*/

#include <stdio.h>

int main()
{
    char *arr[] = {"Hello", "Apple", "Pineapple"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("List of items in array of pointers to strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", *(arr + i));
    }
    return 0;
}


/*
OUTPUT:

List of items in array of pointers to strings:
Hello
Apple
Pineapple

*/