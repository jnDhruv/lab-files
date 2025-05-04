/*
Write a program to calculate the square of a number using a macro.
*/

#include <stdio.h>

#define square(a) a*a

int main(){
    int num;
    printf("Enter number\n");
    scanf("%d",&num);

    printf("Square(Using macro) of %d = %d",num,square(num));

    return 0;
}

/*
OUTPUT:

Enter number
6
Square(Using macro) of 6 = 36

*/