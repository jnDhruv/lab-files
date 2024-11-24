// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
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
    printf("%d",max);
    return 0;
}