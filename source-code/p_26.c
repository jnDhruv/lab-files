// 26. Generate result sheet for 5 students using for loop.

#include <stdio.h>

int main(){

    int rollnum[5],marks[5][3];
    char name[5][50];
    float avg[5], totalmarks[5];

    for (int i = 0; i < 5; i++)
    {
    totalmarks[i] = 0;
    int j = 0;
    printf("Enter Details Of Student %d\n", i + 1);

    printf("Enter The Name Of Student %d : \n", i + 1);
    scanf("%s", &name[i]);

    printf("Enter The Roll Number Of Student %d : \n", i + 1);
    scanf("%d", &rollnum[i]);

    printf("Marks in physics : \n");
    scanf("%3d", &marks[i][j]);
    totalmarks[i] += marks[i][j];
    j++;

    printf("Marks in chemistry : \n");
    scanf("%3d", &marks[i][j]);
    totalmarks[i] += marks[i][j];
    j++;

    printf("Marks in mathematics : \n");
    scanf("%3d", &marks[i][j]);
    totalmarks[i] += marks[i][j];

    avg[i] = totalmarks[i]/3;
    }

    printf("\n\nResult Sheet : \n\n");

    for (int i = 0; i < 5; i++)
    {
    printf("Roll Number : %d\n Name : %s\n TotalMarks : %.2f\n Percentage : %.2f%%\n\n", rollnum[i], name[i], totalmarks[i] , avg[i]);

    }

    return 0;
}