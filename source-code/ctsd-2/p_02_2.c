/*
Write a program to dynamically allocate memory for a string and store a user-entered string
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter The Size of An String: ");
    scanf("%d",&size);

    char *string = (char*)malloc(size * sizeof(char));

    printf("Enter the string:\n");
    for (int i = 0; i <= size; i++)
    {
        scanf("%c", &string[i]);
    }

    printf("Dynamically allocated string:");
    for (int i = 0; i <= size; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}

/*
OUTPUT:

Enter The Size of An String: 15
Enter the string:
pratham rathore
Dynamically allocated string:
pratham rathore

*/