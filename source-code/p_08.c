// 8. Find area of rectangle and circle.

#include <stdio.h>

int main() {
    float length,width,radius,areaRect,areaCircle;
    // Area of Rectangle
    printf("Enter length of rectangle: ");
    scanf("%f",&length);
    printf("Enter width of rectangle: ");
    scanf("%f",&width);
    
    // calc and output
    areaRect = length*width;
    printf("\nArea of the rectangle is: %.2f\n",areaRect);
    
    // Area of Circle
    printf("\nEnter radius of circle: ");
    scanf("%f",&radius);
    
    // calc and output
    areaCircle = 3.14 * radius * radius;
    printf("\nArea of the circle is: %.2f",areaCircle);
    return 0;
}

/* 
OUTPUT:

Enter length of rectangle: 5
Enter width of rectangle: 9

Area of the rectangle is: 45.00

Enter radius of circle: 4

Area of the circle is: 50.24
*/