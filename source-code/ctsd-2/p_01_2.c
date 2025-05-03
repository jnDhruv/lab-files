/*
Write a c program on 2D array to Increase & Decrease
a. No of subarrays
b. elements in the subarrays
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows = 3, cols = 3;
    int **arr = (int**) calloc(rows,sizeof(int));

    printf("Number Of Sub Arrays: %d, Number Of Elements In Sub Arrays: %d\n",rows,cols);
    for (int i = 0; i < rows; i++)
    {
       arr[i] = (int*) calloc(cols,sizeof(int)); 
    }
    
    int count = 1;
    printf("Array: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = count;
            count++;

            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    int newRows = 4, Newcols = 6;
    printf("Re-Sized Number Of Sub Arrays: %d, Re-Sized Number Of Elements In Sub Arrays: %d\n",newRows,Newcols);
    arr = realloc(arr,newRows);
    for (int i = 0; i < newRows; i++)
    {
       arr[i] = realloc(arr[i],Newcols); 
    }
    
    count = 1;
    printf("Array: \n");
    for (int i = 0; i < newRows; i++)
    {
        for (int j = 0; j < Newcols; j++)
        {
            arr[i][j] = count;
            count++;
            if (count > 9)
            {
                count = 1;
            }
            
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Number Of Sub Arrays: 3, Number Of Elements In Sub Arrays: 3
Array: 
1 2 3 
4 5 6 
7 8 9 
Re-Sized Number Of Sub Arrays: 4, Re-Sized Number Of Elements In Sub Arrays: 6
Array: 
1 2 3 4 5 6 
7 8 9 1 2 3 
4 5 6 7 8 9
1 2 3 4 5 6
*/