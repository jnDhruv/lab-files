// 33. Diamond pattern
#include<stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int row, col;

    for (row = 0; row < 2*n; row++) {

        int noOfCols = (row < n) ? row : 2*n - row;
        int noOfSpaces = n - noOfCols;

        for(int spaces = 0; spaces < noOfSpaces; spaces++) {
            printf(" ");
        }

        for (col = 0; col < noOfCols; col++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:

Enter number of rows: 6
      
     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/