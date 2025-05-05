/*
Write a program to sort an array using the Bubble Sort algorithm.
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

    int start = 0;
    int end = n - 1;

    if (arr[start] < arr[end])
    {
        while (start <= end)
        {
            int mid = start + (end - start)/2;
            if (arr[mid] == target)
            {
                printf("%d found at index %d",target,mid);
                return 0;
            }
            else if (target > arr[mid])
            {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        printf("%d not found in the array",target);
    }
    else if (arr[start] > arr[end])
    {
        while (start <= end)
        {
            int mid = start + (end - start)/2;
            if (arr[mid] == target)
            {
                printf("%d found at index %d",target,mid);
                return 0;
            }
            else if (target > arr[mid])
            {
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        printf("%d not found in the array",target);
    }
    else{
        printf("array have same elements");
    }
    
    return 0;
}

/*
OUTPUT:

Enter the size of an array:
6
Enter the elements of an array in ascending or descending order:
1 2 3 4 5 6
Enter the target element
6
6 found at index 5

*/