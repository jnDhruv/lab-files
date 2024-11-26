// 31. Inverted right angled pyramid ( right align)
// *****
//  ****
//   ***
//    **
//     *

#include<stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int row = n; row >= 1; row--) {

        for (int spaces = 0; spaces < n - row + 1;spaces++) {
            printf(" ");
        }
        
        for (int col = 1; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}