// 24. Generate a Fibonacci series up to N Numbers.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 .....

#include <stdio.h>

int main(){

    int terms;
    printf("Enter The Number Of Terms : ");
    scanf("%d" , &terms);

    int a = 0, b = 1 , c;
    printf("%d %d ", a , b);
    for (int i = 0; i < terms - 2 ; i++){

        c = a + b;

        printf("%d ", c);

        a = b;
        b = c;
    }
    
    return 0;
}

/*
OUTPUT:

Enter The Number Of Terms : 6
0 1 1 2 3 5
*/