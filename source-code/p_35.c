// 35. Number pyramid


#include<stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        for (int spaces = 0; spaces < n - row;spaces++) {
            printf(" ");
        }
        
        for (int col = 1; col <= row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:

Enter number of rows: 6
     1 
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
1 2 3 4 5 6
*/