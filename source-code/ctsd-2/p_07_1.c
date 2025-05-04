/*
Pass a structure containing two integers to a function to calculate their sum.
*/

#include <stdio.h>

struct numbers
{
    int num1;
    int num2;
};

int sum(struct numbers myNums)
{
    return myNums.num1 + myNums.num2;
}

int main()
{
    struct numbers nums = {10, 20};
    int result = sum(nums);
    printf("The sum is: %d", result);
    return 0;
}

/*
OUTPUT:

The sum is: 30

*/