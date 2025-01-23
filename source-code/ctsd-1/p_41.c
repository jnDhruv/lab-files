// 41. Multiply first 10 numbers using 1-D Array.

#include<stdio.h>

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int product = 1;

    for (int i = 0; i < 10; i++) {
        product *= arr[i];
    }
    
    printf("Product is: %d", product);
    return 0;
}