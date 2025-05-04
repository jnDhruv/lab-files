/*
Define an enumeration for the days of the week and display the name of the day based on its value.
*/

#include <stdio.h>

enum week
{
    sunday = 1,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
};

int main()
{
    int day;
    printf("Enter day number from 1 to 7 (day starts from sunday):");
    scanf("%d", &day);

    switch (day)
    {
    case sunday:
        printf("sunday");
        break;
    case monday:
        printf("Monday");
        break;
    case tuesday:
        printf("tuesday");
        break;
    case wednesday:
        printf("wednesday");
        break;
    case thursday:
        printf("thursday");
        break;
    case friday:
        printf("friday");
        break;
    case saturday:
        printf("saturday");
        break;
    default:
        printf("Please Enter valid day number");
        break;
    }

    return 0;
}

/*
OUTPUT:

Enter day number from 1 to 7 (day starts from sunday): 4
wednesday

*/