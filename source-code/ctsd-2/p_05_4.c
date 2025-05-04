/*
Write a program to include different code sections based on a macro value.
*/

#include <stdio.h>
#define operator '-'

// Only the code under #elif operator == '-' gets compiled and executed
int main()
{
    int a, b;
    printf("Enter Two Numbers\n");
    scanf("%d %d", &a, &b);

#if operator == '+'
    printf("%d + %d = %d", a, b, a + b);
#elif operator == '-'
    printf("%d - %d = %d", a, b, a - b);
#elif operator == '*'
    printf("%d * %d = %d", a, b, a * b);
#elif operator == '/'
    printf("%d / %d = %d", a, b, a / b);
#endif

    return 0;
}

/*
OUTPUT:

Enter Two Numbers
10 20
10 - 20 = -10

*/