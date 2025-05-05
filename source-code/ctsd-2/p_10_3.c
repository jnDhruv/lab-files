/*
Write a program to perform a linear search on an array.
*/

#include <stdio.h>

int main(){
    int n;

    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of an array in ascending or descending order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter the target element\n");
    scanf("%d",&target);

    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("Element not found in the array");
    return 0;
}

/*
OUTPUT:

Enter the size of an array:
6
Enter the elements of an array in ascending or descending order:
5 4 7 9 2 6
Enter the target element
2
4

*/