// 30. Inverted right angled pyramid

//    *
//   **
//  ***
// ****

#include <stdio.h>

int main(){

    int rows;
    printf("Enter Numbers Of Rows : ");
    scanf("%d" , &rows);

    for (int i = 0; i < rows ; i++){
        for (int spaces = 0; spaces < rows - i - 1; spaces++){
            printf(" ");
        }

        for (int stars = 0 ; stars <= i ; stars++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:

Enter Numbers Of Rows : 6
     *
    **
   ***
  ****
 *****
******
*/