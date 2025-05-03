// Write a c program to increase or decrease the existing size of an 1D array.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int originalSize, newSize;
    printf("Enter The Size of An Array: ");
    scanf("%d", &originalSize);
    int *arr = (int*) calloc(5, sizeof(int));
    
    printf("Enter The Elements of An Array:\n");
    for (int i = 0; i < originalSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for (int i = 0; i < originalSize; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nSize: %d", originalSize);

    printf("\nEnter New Size of An Array: ");
    scanf("%d", &newSize);
    arr = realloc(arr,newSize);

    printf("Enter The Elements of An New Sized Array:\n");
    for (int i = 0; i < newSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nNew Size: %d", newSize);

    return 0;
}

/*
OUTPUT

Enter The Size of An Array: 4
Enter The Elements of An Array:
1 2 3 4
Array: 1 2 3 4 
Size: 4
Enter New Size of An Array: 6
Enter The Elements of An New Sized Array:
1 2 3 4 5 6
Array: 1 2 3 4 5 6 
New Size: 6

*/