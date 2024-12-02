// 44. Reverse the order of numbers.

#include <stdio.h>

int main(){
    int size;
    printf("Enter How Much Numbers You Want To Enter : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Numbers\n");

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i = size - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
OUTPUT:

Enter How Much Numbers You Want To Enter : 6
Enter Numbers
1 2 3 4 5 6
6 5 4 3 2 1 
*/