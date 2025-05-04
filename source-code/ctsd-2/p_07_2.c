/*
Define a union to store data of different types (integer, float, and character).
*/

#include <stdio.h>

union myUnion
{
    int num;
    float dec;
    char ch;
};

int main()
{
    union myUnion u1;

    u1.num = 10;
    printf("Integer Value: %d\n", u1.num);

    u1.dec = 1.2f;
    printf("Float Value: %.2f\n", u1.dec);

    u1.ch = 'C';
    printf("Character Value: %c", u1.ch);

    return 0;
}

/*
OUTPUT:

Integer Value: 10
Float Value: 1.20
Character Value: C

*/