// 15. Generate electricity bill based on usage of units.
// for units
// 100< 1.5/unit
// 200 < 2.0/unit
// 300 < 3.0/unit
// 300 > 5.0/unit

#include <stdio.h>

int main()
{
    int units;
    float money;
    printf("Enter number of units consumed\n");
    scanf("%d", &units);

    if (units <= 100)
    {
        money = (100 - (100 - units)) * 1.5;
    }
    else if (units <= 200)
    {
        money = 100 * 1.5 + (units - 100) * 2.0;
    }
    else if (units <= 300)
    {
        money = 100 * 1.5 + 100 * 2.0 + (units - 200) * 3.0;
    }
    else
    {
        money = 100 * 1.5 + 100 * 2.0 + 100 * 3.0 + (units - 300) * 5.0;
    }

    printf("money for %d units consumption is %.2f", units, money);
    return 0;
}