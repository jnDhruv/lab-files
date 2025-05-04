/*
Write a program to demonstrate accessing array elements using pointers.
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    int *ptr[n];    

    printf("Enter elements of an array\n");
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
      ptr[i] = &arr[i];  
    }

    printf("Array elements accessed using pointer\n");
    for (int i = 0; i < n; i++)
    {
      printf("%d ",*ptr[i]); 
    }
    
    return 0;
}

/*
OUTPUT:

Enter the size of an array: 8
Enter elements of an array
1 2 3 4 5 6 7 8
Array elements accessed using pointer
1 2 3 4 5 6 7 8

*/