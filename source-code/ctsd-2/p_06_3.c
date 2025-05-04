/*
Define a structure for a student's academic record that includes a nested structure for personal details (name, age, address).
*/

#include <stdio.h>
#include <string.h>

struct details{
    char name[50];
    int age;
    char address[80];
};
struct student{
    float phy;
    float chem;
    float maths;
    struct details d1;
};


int main(){
    struct student s1;
    s1.phy = 86.15;
    s1.chem = 94.48;
    s1.maths = 99.99;
    strcpy(s1.d1.name, "pratham rathore");
    s1.d1.age = 18;
    strcpy(s1.d1.address, "parul university hostel");

    printf("student marks in physics = %.2f\n",s1.phy);
    printf("student marks in maths = %.2f\n",s1.maths);
    printf("student marks in chemistry = %.2f\n",s1.chem);
    printf("student name = %s\n",s1.d1.name);
    printf("student age = %d\n",s1.d1.age);
    printf("student address = %s\n",s1.d1.address);

    return 0;
}

/*
OUTPUT:

student marks in physics = 86.15
student marks in maths = 99.99
student marks in chemistry = 94.48
student name = pratham rathore
student age = 18
student address = parul university hostel

*/