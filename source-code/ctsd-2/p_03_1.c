/*
Write a program to demonstrate how to access a variable using its pointer
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter any number which will store in a variable \"a\" \n");
    scanf("%d",&a);
    
    int *ptr = &a; 
    printf("Value of a variable \"a\" = %d\n",a);
    printf("Value of a variable \"a\" accessed for it's pointer = %d", *ptr);

    return 0;
}

/*
OUTPUT:

Enter any number which will store in a variable "a" 
10
Value of a variable "a" = 10
Value of a variable "a" accessed for it's pointer = 10

*/