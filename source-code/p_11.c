// 11. Find the maximum of 2 numbers.

#include <stdio.h>

int main() {
    int a, b, max;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    if (a > b) {
        max = a;
    }
    else {
        max = b;
    }
    
    printf("The maximum value from %d and %d is: %d",a,b,max);
    
    return 0;
}