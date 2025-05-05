/*
Write a program to sort an array using the Bubble Sort algorithm.
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int check;
    for (int i = 0; i < n; i++)
    {
        check = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                check = 1;
            }
        }
        if (check == 0)
        {
            break;
        }
    }

    printf("Sorted array using bubble sort:\n");
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
Sorted array using bubble sort:
2 4 5 6 7 9

*/