// 28. Inverted pyramid 

//  * * * *
//   * * *
//    * *
//     *

#include <stdio.h>

int main(){
    int rows;
    printf("Enter Number Of Rows : ");
    scanf("%d", &rows);

    for (int i = 0 ; i < rows; i++){
        for (int spaces = 0 ; spaces < i + 1 ; spaces++){
            printf(" ");
        }

        for (int stars = rows - i ; stars > 0 ; stars--){
           printf("* ");
        }
        printf("\n"); 
    }
    return 0;
}

/*
OUTPUT:

Enter Number Of Rows : 6
 * * * * * * 
  * * * * *
   * * * *
    * * *
     * *
      *
*/