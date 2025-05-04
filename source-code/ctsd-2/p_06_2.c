/*
Define a structure for employee details (ID, name, salary) and use an array of structures to store and display details of 5 employees.
*/

#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};


int main(){
    struct employee details[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Employee details of employee %d\n",i + 1);
        printf("Enter Employee ID\n");
        scanf("%d", &details[i].id);
        printf("Enter Employee Name\n");
        scanf("%s", &details[i].name);
        printf("Enter Employee salary\n");
        scanf("%f", &details[i].salary);
    }

    printf("Employee details:\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("ID: %d\t|",details[i].id);
        printf("NAME: %s\t|",details[i].name);
        printf("SALARY: $%.2f\n",details[i].salary);
    }
    
    return 0;
}

/*
OUTPUT:

Enter Employee details of employee 1
Enter Employee ID
1
Enter Employee Name
steve
Enter Employee salary
15422.12
Enter Employee details of employee 2
Enter Employee ID
2
Enter Employee Name
alex
Enter Employee salary
1548.657
Enter Employee details of employee 3
Enter Employee ID
3
Enter Employee Name
harry
Enter Employee salary
1.45
Enter Employee details of employee 4
Enter Employee ID
4
Enter Employee Name
potter
Enter Employee salary
87.4
Enter Employee details of employee 5
Enter Employee ID
5
Enter Employee Name
jack
Enter Employee salary
1000000.455
Employee details:

ID: 1   |NAME: steve    |SALARY: $15422.12
ID: 2   |NAME: alex     |SALARY: $1548.66
ID: 3   |NAME: harry    |SALARY: $1.45
ID: 4   |NAME: potter   |SALARY: $87.40
ID: 5   |NAME: jack     |SALARY: $1000000.44
*/