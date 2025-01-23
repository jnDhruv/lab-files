// 30. Inverted right angled pyramid 

// ****
// ***
// **
// *


#include <stdio.h>

int main(){

    int rows;
    printf("Enter Number Of Rows : ");
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

/*
OUTPUT:

Enter Number Of Rows : 6
******
*****
****
***
**
*
*/