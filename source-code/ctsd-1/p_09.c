// 9. Swap 2 numbers using 3rd variable.

#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    
    printf("Before swapping: a = %d, b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d",a,b);

    return 0;
}

/*
OUTPUT:

Enter two numbers:12 15
Before swapping: a = 12, b = 15
After swapping: a = 15, b = 12
*/