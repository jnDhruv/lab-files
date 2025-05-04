/*
Write a program to swap two numbers using pointers.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    printf("Value of a = ");
    scanf("%d",&a);
    printf("Value of b = ");
    scanf("%d",&b);

    int *ptra = &a;
    int *ptrb = &b;
    printf("Before Swap:\n");
    printf("Value of a = %d, Value of b = %d\n",a,b);

    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
    	
    printf("After Swap:\n");
    printf("Value of a = %d, Value of b = %d",a,b);
    	
    return 0;
}

/*
OUTPUT:

Value of a = 10
Value of b = 20
Before Swap:
Value of a = 10, Value of b = 20
After Swap:
Value of a = 20, Value of b = 10

*/