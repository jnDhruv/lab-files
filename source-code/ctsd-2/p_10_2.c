/*
Write a program to sort an array using the Insertion Sort algorithm.
*/

#include <stdio.h>

int main(){
    int n;

    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            else{
                break;
            }
            
        }
        
    }

    printf("Sorted array using insertion sort:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

/*
OUTPUT:

Enter the size of an array:
6
Enter the elements of an array
5 4 7 9 2 6
Sorted array using insertion sort:
2 4 5 6 7 9

*/