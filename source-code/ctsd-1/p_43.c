// 43. Arrange a given numbers in descending order.

#include<stdio.h>
#include<stdbool.h>

int main() {
    int arr[] = {10,2,44,21,5,11,16};
    int i, j;

    int length = sizeof(arr)/sizeof(arr[0]);

    for (i = 0; i < length; i++) {
        bool swapped = false;
        for (j = 0; j < length - 1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
    int item;
    for (item = 0; item < length; item++) {
        printf("%d ", arr[item]);
    }

    return 0;
}