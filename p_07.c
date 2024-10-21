#include<stdio.h>

// 7. Find average of 3 numbers.

int main() {
    float a, b, c, avg;

    scanf("%f %f %f", &a, &b, &c);
    avg = (a + b + c)/3;

    printf("Average is %f", avg);

    return 0;
}