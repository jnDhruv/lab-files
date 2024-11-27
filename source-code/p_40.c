// 40. Hourglass pattern

/*

* * * *
 * * *
  * *
   *
  * * 
 * * *
* * * *

*/

#include <stdio.h>

int main (){
    int n;
    printf("Enter Number Of Rows : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int spaces = 0; spaces < i; spaces++){
            printf(" ");
        }
        for (int stars = 0; stars < n - i; stars++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    for (int i = 0; i < n - 1; i++){
        for (int spaces = 0; spaces < n - i - 2; spaces++){
            printf(" ");
        }

        for (int stars = 0; stars <= i + 1  ; stars++){
            printf("* ");
        }
        
        printf("\n");
    }
    










    return 0;
}