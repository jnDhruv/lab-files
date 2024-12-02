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

/*
OUTPUT:

Enter Details Of Student 1
Enter The Name Of Student 1 : 
vikash
Enter The Roll Number Of Student 1 : 
1
Marks in physics : 
65
Marks in chemistry : 
45
Marks in mathematics : 
76
Enter Details Of Student 2
Enter The Name Of Student 2 : 
akash
Enter The Roll Number Of Student 2 : 
2
Marks in physics : 
98
Marks in chemistry : 
78
Marks in mathematics : 
90
Enter Details Of Student 3
Enter The Name Of Student 3 : 
shakti
Enter The Roll Number Of Student 3 : 
56
Marks in physics : 
98
Marks in chemistry : 
78
Marks in mathematics : 
56
Enter Details Of Student 4
Enter The Name Of Student 4 : 
aradhna
Enter The Roll Number Of Student 4 : 
4
Marks in physics : 
67
Marks in chemistry : 
90
Marks in mathematics : 
89
Enter Details Of Student 5
Enter The Name Of Student 5 :
sandhya
Enter The Roll Number Of Student 5 : 
5
Marks in physics : 
67
Marks in chemistry : 
89
Marks in mathematics : 
98


Result Sheet :

Roll Number : 1
 Name : vikash
 TotalMarks : 186.00
 Percentage : 62.00%

Roll Number : 2
 Name : akash
 TotalMarks : 266.00
 Percentage : 88.67%

Roll Number : 3
 Name : shakti
 TotalMarks : 232.00
 Percentage : 77.33%

Roll Number : 4
 Name : aradhna
 TotalMarks : 246.00
 Percentage : 82.00%

Roll Number : 5
 Name : sandhya
 TotalMarks : 254.00
 Percentage : 84.67%
*/