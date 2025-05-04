/*
Write a program to demonstrate file inclusion using #include user’s own header file.
*/

// my_header.h file content:
/*
int add(int num1, int num2){
    return num1 + num2;
}
*/

// Main File
#include <stdio.h>
// Custom header file inclusion:
// #include "my_header.h"

int main()
{
    int a, b;
    printf("Enter Two Numbers\n");
    scanf("%d %d", &a, &b);

    printf("Calling the function located inside the my_header.h file:\n");
    printf("%d + %d = %d", a, b, add(a, b));

    return 0;
}

/*
OUTPUT:

Enter Two Numbers
10 20
Calling the function located inside the my_header.h file:
10 + 20 = 30

*/