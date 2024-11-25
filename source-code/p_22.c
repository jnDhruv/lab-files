// 22. Check whether given number is Armstrong.

#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    int orignum, tempnum;

    printf("Enter The Number You Want To Check If It Is Armstrong Or Not\n");
    scanf("%d", &orignum);

    tempnum = orignum;

    int digits = 0;

    while (tempnum != 0)
    {

        tempnum = tempnum / 10;

        digits = digits + 1;
    }

    tempnum = orignum;

    int backdig, result = 0;

    while (tempnum != 0)
    {
        backdig = tempnum % 10;
        result = result + power(backdig, digits);

        tempnum = tempnum / 10;
    }

    if (result == orignum)
    {
        printf("The Number Is Armstrong Number");
    }
    else
    {
        printf("The Number Is Not Armsrtrong Number");
    }

    return 0;
}
