// Online C compiler to run C program online
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