// 24. Generate a Fibonacci series up to N Numbers.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 .....

#include <stdio.h>

int main(){

    int terms;

    scanf("%d" , &terms);

    int a = 0, b = 1 , c;

    for (int i = 0; i <= terms ; i++){

        c = a + b;

        printf("%d ", c);

        b = c;
        a = b;
    }
    
    return 0;
}