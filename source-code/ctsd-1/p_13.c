// 13. Find the maximum of 3 numbers using else if else ladder.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    
    int max;
    
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    printf("The Maximum Number Is = %d",max);
    return 0;
}

/*
OUTPUT:

Enter three numbers: 12 14 16
The Maximum Number Is = 16
*/