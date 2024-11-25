// 20. Reverse a given number.

#include <stdio.h>

int main(){
    int num;
    int rev = 0;
    printf("Enter The Number\n");
    scanf("%d" , &num);

    for (int i = 0; i >= 0 ; i++){
        
        rev = rev + num % 10;

        num = num/10;

        if (num == 0){
            break;
        }
        rev = rev*10;
    }
    
    printf("%d" , rev);

    return 0;
}