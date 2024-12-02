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

/*
OUTPUT:

Enter number of rows: 6
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/