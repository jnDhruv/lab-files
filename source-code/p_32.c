// 30. Inverted right angled pyramid 

// ****
// ***
// **
// *


#include <stdio.h>

int main(){

    int rows;
    printf("Enter Numbers Of Rows : ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int cols = 0; cols < rows - i ; cols++)
        {
            printf("*");
        }
        printf("\n");
    }
    




    return 0;
}