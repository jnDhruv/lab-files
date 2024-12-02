// 14. Generate student’s result based on percentage.

#include<stdio.h>

int main() {
    float percent;
    printf("Enter your percentage: ");
    scanf("%f",&percent);

    if (percent >= 90) {
        printf("Your Grade is A");
    } else if (percent >= 80) {
        printf("Your Grade is B");
    } else if (percent >= 70) {
        printf("Your Grade is C");
    } else if (percent >= 60) {
        printf("Your Grade is D");
    } else if (percent >= 50) {
        printf("Your Grade is E");
    } else {
        printf("You failed.");
    }
}

/*
OUTPUT:

Enter your percentage: 92
Your Grade is A
*/