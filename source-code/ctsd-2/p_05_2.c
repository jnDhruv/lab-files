/*
Define a macro for a constant value and use it to calculate the perimeter of a rectangle.
*/

#include <stdio.h>

#define double 2

int main(){
    int l,b;
    printf("Enter length of the rectangle:\n");
    scanf("%d",&l);
    printf("Enter breadth of the rectangle:\n");
    scanf("%d",&b);

    printf("Perimeter of the rectangle using macro = %d", double * (l+b));

    return 0;
}

/*
OUTPUT:

Enter length of the rectangle:
10
Enter breadth of the rectangle:
6
Perimeter of the rectangle using macro = 32

*/