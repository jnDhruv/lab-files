// 19. Print the sum of odd and even numbers between 51 and 550.
#include<stdio.h>

int main() {
    int sumEven = 0, sumOdd = 0;
    for (int i = 51; i <= 550; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }
    printf("Sum of Even numbers: %d\n", sumEven);
    printf("Sum of Odd numbers: %d", sumOdd);
    return 0;
}