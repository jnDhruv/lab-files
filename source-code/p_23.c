// 23. Generate a Fibonacci series of N Numbers.

#include<stdio.h>

int main() {
    int n, a = 0, b = 1;

    printf("Enter the term you want: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("%d", a);
    }
    if (n == 1) {
        printf("%d", a);
    }
    else {
        for (int i = 2; i <= n; i++) {
            int temp = b;
            b = a + b;
            a = temp;
        }
        printf("%d\n", b);
    }
    return 0;
}