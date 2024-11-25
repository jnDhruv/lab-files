// 24. Generate a Fibonacci series up to N Numbers.

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