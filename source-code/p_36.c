// 36. Inverted number pyramid
/*
0 0 0 0 
 1 1 1
  2 2
   3
*/

#include <stdio.h>

int main(){
    
    int n, k = 0;
    printf("Enter Number Of Rows : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        if (k > 9){
            k = 0;
        } 
        for (int spaces = 0; spaces < i; spaces++){
            printf(" ");
        }
        for (int j = 0; j < n - i; j++){
            printf("%d ", k);
        }
        printf("\n");
        k++;
    }
    return 0;
}

/*
OUTPUT:

Enter Number Of Rows : 6
0 0 0 0 0 0 
 1 1 1 1 1
  2 2 2 2
   3 3 3
    4 4
     5
*/