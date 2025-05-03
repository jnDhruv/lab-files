/*
Write a program to compare malloc and calloc by allocating memory for an array and printing the uninitialized values.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int Msize,Csize;

    printf("Enter size of an uninitialized array allocated by malloc function: ");
    scanf("%d", &Msize);
    int *Marr = (int*) malloc(Msize * sizeof(int));

    printf("Enter size of an uninitialized array allocated by calloc function: ");
    scanf("%d", &Csize);
    int *Carr = (int*) calloc(Csize, sizeof(int));

    printf("Uninitialized malloc array stores garbage value by default\n");
    printf("Malloc Array:\n");
    for (int i = 0; i < Msize; i++)
    {
        printf("%d ",Marr[i]);
    }

    printf("\nUninitialized calloc array initializes each block by default value 0\n");
    printf("Calloc Array:\n");
    for (int i = 0; i < Csize; i++)
    {
        printf("%d ",Carr[i]);
    }

    return 0;
}

/*
OUTPUT:

Enter size of an uninitialized array allocated by malloc function: 5
Enter size of an uninitialized array allocated by calloc function: 5
Uninitialized malloc array stores garbage value by default
Malloc Array:
11671160 11665600 83886085 50892 11671160 
Uninitialized calloc array initializes each block by default value 0
Calloc Array:
0 0 0 0 0 

*/