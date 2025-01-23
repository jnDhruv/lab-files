// 34. Hollow diamond pattern

/*    
   *
  * *        
 *   *
*     *
 *   *
  * *
   *
*/

#include <stdio.h>

int main(){

   int rows;
   printf("Enter Number Of Rows : ");
   scanf("%d", &rows);

   for (int i = 0; i < rows; i++){
      for (int j = 0; j < rows - i - 1; j++){
         printf(" ");
      }
      for (int j = rows - i; j <= rows + i ; j++){
         if (j == rows + i || j == rows - i){
            printf("*");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
   }

   for (int i = rows - 1; i > 0; i--){
      for (int j = 0; j < rows - i ; j++){
         printf(" ");
      }
      for (int j = rows - i + 1; j <= rows + i - 1 ; j++){
         if (j == rows - i + 1 || j == rows + i - 1 ){
            printf("*");
         }
         else{
            printf(" ");
         }   
      }
      printf("\n");
   }
   return 0;
}

/*
OUTPUT:

Enter Number Of Rows : 6
     *
    * *
   *   *
  *     *
 *       *
*         *
 *       *
  *     *
   *   *
    * *
     *
*/