// 23. Generate a Fibonacci series of N Numbers.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 .....
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