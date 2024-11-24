// 17. Find area of rectangle, circle and square using switch case.
#include<stdio.h>

int main() {
    int ch;
    printf("Enter\n");
    printf("1: Area of Rectangle\n");
    printf("2: Area of Circle\n");
    printf("3: Area of Square\n");
    scanf("%d",&ch);

    float area, l, b, r, s;
    switch (ch) {
    case 1:
        printf("Enter length and breadth of rectangle: ");
        scanf("%f %f",&l,&b);
        area = l*b;
        break;
    case 2:
        printf("Enter radius of circle: ");
        scanf("%f",&r);
        area = 3.14*r*r;
        break;
    case 3:
        printf("Enter side of square: ");
        scanf("%f",&s);
        area = s*s;
        break;
    default:
        printf("Invalid");
        return 0;
    }
    printf("Area = %.2f",area);
    return 0;
}