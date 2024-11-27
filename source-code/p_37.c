// 37. Floyd's triangle

#include<stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int colValue = 1;

    for (int row = 1; row <= n; row++) {

        for (int col = 1; col <= row; col++) {
            printf("%d ", colValue);
            colValue++;
        }
        printf("\n");
    }
    return 0;
}