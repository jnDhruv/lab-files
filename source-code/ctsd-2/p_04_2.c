/*
Write a program to demonstrate the use of a pointer to a pointer.
*/

#include <stdio.h>

int main()
{
    int num = 10;
    // pointer
    int *ptr = &num;
    // double pointer
    int **ptrToPtr = &ptr;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n\n", &num);

    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n\n", *ptr);

    printf("Value of ptrToPtr: %p\n", ptrToPtr);
    printf("Value pointed by ptrToPtr: %p\n", *ptrToPtr);
    printf("Value pointed by the value stored in ptrToPtr: %d\n", **ptrToPtr);

    return 0;
}

/*
OUTPUT:

Value of num: 10
Address of num: 0061FF18

Value of ptr: 0061FF18
Value pointed by ptr: 10

Value of ptrToPtr: 0061FF14
Value pointed by ptrToPtr: 0061FF18
Value pointed by the value stored in ptrToPtr: 10

*/