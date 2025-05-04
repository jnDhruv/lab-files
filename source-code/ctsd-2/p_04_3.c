/*
Write a program to demonstrate the call by value and call by reference.
*/

#include <stdio.h>

void squareByValue(int num) {
    num = num * num;
}

void squareByReference(int* ptr) {
    *ptr = *ptr * *ptr;
}

int main()
{
    int num = 10;
    printf("Initial value of num: %d\n", num);

    squareByValue(num);
    printf("Value of num after squaring using pass by value: %d\n", num);

    squareByReference(&num);
    printf("Value of num after squaring using pass by reference: %d\n", num);

    return 0;
}

/*
OUTPUT:

Initial value of num: 10
Value of num after squaring using pass by value: 10
Value of num after squaring using pass by reference: 100

*/